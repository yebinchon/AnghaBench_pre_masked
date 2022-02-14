
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int ext_size; } ;
struct TYPE_13__ {int len; } ;
struct mbuf {TYPE_6__ m_ext; TYPE_5__ m_pkthdr; int m_len; } ;
struct ifnet {int if_drv_flags; int if_flags; } ;
struct TYPE_16__ {struct firewire_comm* fc; } ;
struct TYPE_10__ {int chtag; } ;
struct TYPE_11__ {TYPE_2__ stream; } ;
struct TYPE_12__ {TYPE_3__ mode; } ;
struct TYPE_9__ {struct ifnet* ifp; } ;
struct fwe_softc {size_t dma_ch; int stream_ch; int xferlist; TYPE_8__ fd; TYPE_4__ pkt_hdr; TYPE_1__ eth_softc; } ;
struct fwe_eth_softc {struct fwe_softc* fwe; } ;
struct fw_xferq {int flag; int bnchunk; int bnpacket; struct fw_xfer* bulkxfer; int stfree; int * stproc; int stdma; int stvalid; int * buf; scalar_t__ queued; int psize; int hand; void* sc; } ;
struct TYPE_15__ {int spd; } ;
struct fw_xfer {int hand; void* sc; struct firewire_comm* fc; TYPE_7__ send; struct mbuf* mbuf; } ;
struct fw_bulkxfer {int hand; void* sc; struct firewire_comm* fc; TYPE_7__ send; struct mbuf* mbuf; } ;
struct firewire_comm {int (* irx_enable ) (struct firewire_comm*,size_t) ;struct fw_xferq** ir; } ;
typedef void* caddr_t ;


 int FUNC_0 (struct ifnet*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct fw_xfer*,int ) ;
 int VAR_12 ;
 size_t FUNC_3 (struct firewire_comm*,int ) ;
 struct fw_xfer* FUNC_4 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (struct ifnet*) ;
 int VAR_15 ;
 struct mbuf* FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int,int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (struct firewire_comm*,size_t) ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_9(void *VAR_19)
{
 struct fwe_softc *VAR_20 = ((struct fwe_eth_softc *)VAR_19)->fwe;
 struct firewire_comm *VAR_21;
 struct ifnet *VAR_22 = VAR_20->eth_softc.ifp;
 struct fw_xferq *VAR_23;
 struct fw_xfer *VAR_24;
 struct mbuf *VAR_25;
 int VAR_26;

 FUNC_0(VAR_22, "initializing\n");


 VAR_22->if_flags |= VAR_6;

 VAR_21 = VAR_20->fd.fc;
 if (VAR_20->dma_ch < 0) {
  VAR_20->dma_ch = FUNC_3(VAR_21, 0);
  if (VAR_20->dma_ch < 0)
   return;
  VAR_23 = VAR_21->ir[VAR_20->dma_ch];
  VAR_23->flag |= VAR_0 |
    VAR_1 | VAR_3;
  VAR_20->stream_ch = VAR_17;
  VAR_20->pkt_hdr.mode.stream.chtag = VAR_20->stream_ch;
  VAR_23->flag &= ~0xff;
  VAR_23->flag |= VAR_20->stream_ch & 0xff;

  VAR_23->sc = (caddr_t) VAR_20;
  VAR_23->hand = VAR_13;
  VAR_23->bnchunk = VAR_16;
  VAR_23->bnpacket = 1;
  VAR_23->psize = VAR_7;
  VAR_23->queued = 0;
  VAR_23->buf = ((void*)0);
  VAR_23->bulkxfer = (struct fw_bulkxfer *) FUNC_7(
   sizeof(struct fw_bulkxfer) * VAR_23->bnchunk,
       VAR_9, VAR_11);
  FUNC_1(&VAR_23->stvalid);
  FUNC_1(&VAR_23->stfree);
  FUNC_1(&VAR_23->stdma);
  VAR_23->stproc = ((void*)0);
  for (VAR_26 = 0; VAR_26 < VAR_23->bnchunk; VAR_26++) {
   VAR_25 = FUNC_6(VAR_11, VAR_8, VAR_10);
   VAR_23->bulkxfer[VAR_26].mbuf = VAR_25;
   VAR_25->m_len = VAR_25->m_pkthdr.len = VAR_25->m_ext.ext_size;
   FUNC_2(&VAR_23->stfree,
     &VAR_23->bulkxfer[VAR_26], VAR_15);
  }
  FUNC_1(&VAR_20->xferlist);
  for (VAR_26 = 0; VAR_26 < VAR_12; VAR_26++) {
   VAR_24 = FUNC_4(VAR_9);
   if (VAR_24 == ((void*)0))
    break;
   VAR_24->send.spd = VAR_18;
   VAR_24->fc = VAR_20->fd.fc;
   VAR_24->sc = (caddr_t)VAR_20;
   VAR_24->hand = VAR_14;
   FUNC_2(&VAR_20->xferlist, VAR_24, VAR_15);
  }
 } else
  VAR_23 = VAR_21->ir[VAR_20->dma_ch];



 if ((VAR_23->flag & VAR_2) == 0)
  VAR_21->irx_enable(VAR_21, VAR_20->dma_ch);

 VAR_22->if_drv_flags |= VAR_5;
 VAR_22->if_drv_flags &= ~VAR_4;





}
