
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {int len; } ;
struct mbuf {TYPE_4__ m_pkthdr; } ;
struct TYPE_15__ {int * ifq_head; } ;
struct ifnet {TYPE_8__ if_snd; } ;
struct TYPE_13__ {TYPE_6__* fc; } ;
struct fwe_softc {TYPE_5__ fd; int pkt_hdr; int xferlist; } ;
struct fw_xferq {int queued; int maxq; int (* start ) (TYPE_6__*) ;} ;
struct TYPE_9__ {int len; } ;
struct TYPE_10__ {TYPE_1__ stream; } ;
struct fw_pkt {TYPE_2__ mode; } ;
struct TYPE_11__ {int pay_len; struct fw_pkt hdr; } ;
struct fw_xfer {TYPE_3__ send; struct mbuf* mbuf; } ;
typedef int int32_t ;
struct TYPE_14__ {struct fw_xferq* atq; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int FUNC_1 (struct fwe_softc*) ;
 int FUNC_2 (struct fwe_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_8__*,struct mbuf*) ;
 int VAR_3 ;
 int FUNC_4 (struct mbuf*,int ,int ) ;
 struct fw_xfer* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct fw_xfer*,int ) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (TYPE_6__*,int,struct fw_xfer*) ;
 int FUNC_9 (struct fw_xfer*) ;
 int FUNC_10 (struct ifnet*,int ,int) ;
 int VAR_4 ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (TYPE_6__*) ;

__attribute__((used)) static void
FUNC_13(struct fwe_softc *VAR_5, struct ifnet *VAR_6)
{
 struct mbuf *VAR_7;
 struct fw_xfer *VAR_8;
 struct fw_xferq *VAR_9;
 struct fw_pkt *VAR_10;
 int VAR_11 = 0;

 VAR_8 = ((void*)0);
 VAR_9 = VAR_5->fd.fc->atq;
 while ((VAR_9->queued < VAR_9->maxq - 1) &&
   (VAR_6->if_snd.ifq_head != ((void*)0))) {
  FUNC_1(VAR_5);
  VAR_8 = FUNC_5(&VAR_5->xferlist);
  if (VAR_8 == ((void*)0)) {



   FUNC_2(VAR_5);
   break;
  }
  FUNC_7(&VAR_5->xferlist, VAR_4);
  FUNC_2(VAR_5);

  FUNC_3(&VAR_6->if_snd, VAR_7);
  if (VAR_7 == ((void*)0)) {
   FUNC_1(VAR_5);
   FUNC_6(&VAR_5->xferlist, VAR_8, VAR_4);
   FUNC_2(VAR_5);
   break;
  }
  FUNC_0(VAR_6, VAR_7);


  FUNC_4(VAR_7, VAR_0, VAR_3);
  VAR_10 = &VAR_8->send.hdr;
  *(uint32_t *)&VAR_8->send.hdr = *(int32_t *)&VAR_5->pkt_hdr;
  VAR_10->mode.stream.len = VAR_7->m_pkthdr.len;
  VAR_8->mbuf = VAR_7;
  VAR_8->send.pay_len = VAR_7->m_pkthdr.len;

  if (FUNC_8(VAR_5->fd.fc, -1, VAR_8) != 0) {

   FUNC_10(VAR_6, VAR_1, 1);

   FUNC_9(VAR_8);
  } else {
   FUNC_10(VAR_6, VAR_2, 1);
   VAR_11++;
  }
 }




 if (VAR_11 > 0)
  VAR_9->start(VAR_5->fd.fc);
}
