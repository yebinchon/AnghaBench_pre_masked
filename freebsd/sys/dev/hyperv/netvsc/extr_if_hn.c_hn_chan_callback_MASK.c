
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmbus_chanpkt_hdr {int cph_type; } ;
struct vmbus_channel {int dummy; } ;
struct hn_softc {int dummy; } ;
struct hn_rx_ring {int hn_pktbuf_len; int hn_txr; TYPE_1__* hn_ifp; struct vmbus_chanpkt_hdr* hn_pktbuf; } ;
struct TYPE_2__ {struct hn_softc* if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;



 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct vmbus_chanpkt_hdr*,int ) ;
 int FUNC_3 (struct hn_rx_ring*,int ) ;
 int FUNC_4 (struct hn_softc*,struct vmbus_channel*,struct vmbus_chanpkt_hdr*) ;
 int FUNC_5 (struct hn_softc*,struct vmbus_chanpkt_hdr*) ;
 int FUNC_6 (struct hn_rx_ring*,struct vmbus_channel*,struct vmbus_chanpkt_hdr*) ;
 int FUNC_7 (TYPE_1__*,char*,int,...) ;
 void* FUNC_8 (int,int ,int ) ;
 int FUNC_9 (struct vmbus_channel*,struct vmbus_chanpkt_hdr*,int*) ;

__attribute__((used)) static void
FUNC_10(struct vmbus_channel *VAR_4, void *VAR_5)
{
 struct hn_rx_ring *VAR_6 = VAR_5;
 struct hn_softc *VAR_7 = VAR_6->hn_ifp->if_softc;

 for (;;) {
  struct vmbus_chanpkt_hdr *VAR_8 = VAR_6->hn_pktbuf;
  int VAR_9, VAR_10;

  VAR_10 = VAR_6->hn_pktbuf_len;
  VAR_9 = FUNC_9(VAR_4, VAR_8, &VAR_10);
  if (FUNC_1(VAR_9 == VAR_1)) {
   void *VAR_11;
   int VAR_12;
   VAR_12 = VAR_6->hn_pktbuf_len * 2;
   while (VAR_12 < VAR_10)
    VAR_12 *= 2;
   VAR_11 = FUNC_8(VAR_12, VAR_2, VAR_3);

   FUNC_7(VAR_6->hn_ifp, "expand pktbuf %d -> %d\n",
       VAR_6->hn_pktbuf_len, VAR_12);

   FUNC_2(VAR_6->hn_pktbuf, VAR_2);
   VAR_6->hn_pktbuf = VAR_11;
   VAR_6->hn_pktbuf_len = VAR_12;

   continue;
  } else if (FUNC_1(VAR_9 == VAR_0)) {

   break;
  }
  FUNC_0(!VAR_9, ("vmbus_chan_recv_pkt failed: %d", VAR_9));

  switch (VAR_8->cph_type) {
  case 130:
   FUNC_4(VAR_7, VAR_4, VAR_8);
   break;

  case 128:
   FUNC_6(VAR_6, VAR_4, VAR_8);
   break;

  case 129:
   FUNC_5(VAR_7, VAR_8);
   break;

  default:
   FUNC_7(VAR_6->hn_ifp, "unknown chan pkt %u\n",
       VAR_8->cph_type);
   break;
  }
 }
 FUNC_3(VAR_6, VAR_6->hn_txr);
}
