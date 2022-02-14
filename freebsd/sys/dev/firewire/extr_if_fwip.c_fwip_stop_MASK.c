
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ifnet {int if_drv_flags; } ;
struct TYPE_7__ {int xferlist; } ;
struct TYPE_6__ {struct firewire_comm* fc; } ;
struct TYPE_5__ {struct ifnet* fwip_ifp; } ;
struct fwip_softc {size_t dma_ch; int xferlist; TYPE_3__ fwb; TYPE_2__ fd; TYPE_1__ fw_softc; } ;
struct fw_xferq {int flag; int bnchunk; TYPE_4__* bulkxfer; int * hand; } ;
struct fw_xfer {int dummy; } ;
struct firewire_comm {int (* irx_disable ) (struct firewire_comm*,size_t) ;struct fw_xferq** ir; } ;
struct TYPE_8__ {int mbuf; } ;


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
 struct fw_xfer* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct fw_xfer* FUNC_2 (struct fw_xfer*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (struct firewire_comm*,TYPE_3__*) ;
 int FUNC_5 (struct fw_xfer*) ;
 int VAR_10 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct firewire_comm*,size_t) ;

__attribute__((used)) static void
FUNC_8(struct fwip_softc *VAR_11)
{
 struct firewire_comm *VAR_12;
 struct fw_xferq *VAR_13;
 struct ifnet *VAR_14 = VAR_11->fw_softc.fwip_ifp;
 struct fw_xfer *VAR_15, *VAR_16;
 int VAR_17;

 VAR_12 = VAR_11->fd.fc;

 if (VAR_11->dma_ch >= 0) {
  VAR_13 = VAR_12->ir[VAR_11->dma_ch];

  if (VAR_13->flag & VAR_5)
   VAR_12->irx_disable(VAR_12, VAR_11->dma_ch);
  VAR_13->flag &=
   ~(VAR_3 | VAR_4 | VAR_6 |
   VAR_1 | VAR_2 | VAR_0);
  VAR_13->hand = ((void*)0);

  for (VAR_17 = 0; VAR_17 < VAR_13->bnchunk; VAR_17++)
   FUNC_6(VAR_13->bulkxfer[VAR_17].mbuf);
  FUNC_3(VAR_13->bulkxfer, VAR_9);

  FUNC_4(VAR_12, &VAR_11->fwb);
  for (VAR_15 = FUNC_0(&VAR_11->fwb.xferlist); VAR_15 != ((void*)0);
     VAR_15 = VAR_16) {
   VAR_16 = FUNC_2(VAR_15, VAR_10);
   FUNC_5(VAR_15);
  }

  for (VAR_15 = FUNC_0(&VAR_11->xferlist); VAR_15 != ((void*)0);
     VAR_15 = VAR_16) {
   VAR_16 = FUNC_2(VAR_15, VAR_10);
   FUNC_5(VAR_15);
  }
  FUNC_1(&VAR_11->xferlist);

  VAR_13->bulkxfer = ((void*)0);
  VAR_11->dma_ch = -1;
 }

 VAR_14->if_drv_flags &= ~(VAR_8 | VAR_7);
}
