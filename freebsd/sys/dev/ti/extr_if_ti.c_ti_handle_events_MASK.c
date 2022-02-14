
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ti_event_ring_map; int ti_event_ring_tag; } ;
struct TYPE_6__ {struct ti_event_desc* ti_event_ring; } ;
struct TYPE_5__ {size_t ti_idx; } ;
struct ti_softc {size_t ti_ev_saved_considx; TYPE_3__ ti_cdata; int ti_dev; TYPE_4__* ti_ifp; int ti_linkstat; TYPE_2__ ti_rdata; TYPE_1__ ti_ev_prodidx; } ;
struct ti_event_desc {int dummy; } ;
struct TYPE_8__ {int if_baudrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ti_softc*,int ,size_t) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct ti_event_desc*) ;
 int FUNC_4 (struct ti_event_desc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;






 int VAR_11 ;
 int FUNC_5 (size_t,int ) ;
 int VAR_12 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (struct ti_softc*) ;

__attribute__((used)) static void
FUNC_10(struct ti_softc *VAR_13)
{
 struct ti_event_desc *VAR_14;

 if (VAR_13->ti_rdata.ti_event_ring == ((void*)0))
  return;

 FUNC_6(VAR_13->ti_cdata.ti_event_ring_tag,
     VAR_13->ti_cdata.ti_event_ring_map, VAR_0);
 while (VAR_13->ti_ev_saved_considx != VAR_13->ti_ev_prodidx.ti_idx) {
  VAR_14 = &VAR_13->ti_rdata.ti_event_ring[VAR_13->ti_ev_saved_considx];
  switch (FUNC_4(VAR_14)) {
  case 131:
   VAR_13->ti_linkstat = FUNC_3(VAR_14);
   if (VAR_13->ti_linkstat == VAR_10) {
    FUNC_8(VAR_13->ti_ifp, VAR_3);
    VAR_13->ti_ifp->if_baudrate = FUNC_2(100);
    if (VAR_12)
     FUNC_7(VAR_13->ti_dev,
         "10/100 link up\n");
   } else if (VAR_13->ti_linkstat == VAR_8) {
    FUNC_8(VAR_13->ti_ifp, VAR_3);
    VAR_13->ti_ifp->if_baudrate = FUNC_1(1UL);
    if (VAR_12)
     FUNC_7(VAR_13->ti_dev,
         "gigabit link up\n");
   } else if (VAR_13->ti_linkstat == VAR_9) {
    FUNC_8(VAR_13->ti_ifp,
        VAR_2);
    VAR_13->ti_ifp->if_baudrate = 0;
    if (VAR_12)
     FUNC_7(VAR_13->ti_dev,
         "link down\n");
   }
   break;
  case 133:
   if (FUNC_3(VAR_14) == VAR_6)
    FUNC_7(VAR_13->ti_dev, "invalid command\n");
   else if (FUNC_3(VAR_14) == VAR_7)
    FUNC_7(VAR_13->ti_dev, "unknown command\n");
   else if (FUNC_3(VAR_14) == VAR_5)
    FUNC_7(VAR_13->ti_dev, "bad config data\n");
   break;
  case 132:
   FUNC_9(VAR_13);
   break;
  case 128:
  case 129:
  case 130:

   break;
  default:
   FUNC_7(VAR_13->ti_dev, "unknown event: %d\n",
       FUNC_4(VAR_14));
   break;
  }

  FUNC_5(VAR_13->ti_ev_saved_considx, VAR_4);
  FUNC_0(VAR_13, VAR_11, VAR_13->ti_ev_saved_considx);
 }
 FUNC_6(VAR_13->ti_cdata.ti_event_ring_tag,
     VAR_13->ti_cdata.ti_event_ring_map, VAR_1);
}
