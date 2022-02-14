
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct scb {int flags; TYPE_1__* hscb; } ;
struct ahd_softc {int timedout_scbs; } ;
struct TYPE_2__ {int task_management; int control; scalar_t__ task_attribute; scalar_t__ cdb_len; } ;


 int FUNC_0 (struct ahd_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *) ;
 struct scb* FUNC_2 (int *) ;
 int FUNC_3 (struct scb*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char FUNC_4 (struct ahd_softc*,struct scb*) ;
 int FUNC_5 (struct scb*) ;
 int FUNC_6 (struct scb*) ;
 int FUNC_7 (struct ahd_softc*,struct scb*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*) ;
 int FUNC_10 (struct ahd_softc*,int ) ;
 int FUNC_11 (struct ahd_softc*) ;
 struct scb* FUNC_12 (struct ahd_softc*,int) ;
 char* FUNC_13 (struct ahd_softc*) ;
 scalar_t__ FUNC_14 (struct ahd_softc*,struct scb*,struct scb*) ;
 int FUNC_15 (struct ahd_softc*,int ,int) ;
 int FUNC_16 (struct ahd_softc*) ;
 int FUNC_17 (struct ahd_softc*,struct scb*) ;
 int FUNC_18 (struct ahd_softc*,struct scb*) ;
 int FUNC_19 (struct ahd_softc*,char,int ) ;
 scalar_t__ FUNC_20 (struct ahd_softc*,int,char,int,int,int ,int ,int ) ;
 int FUNC_21 (struct ahd_softc*,int ,int ) ;
 int FUNC_22 (struct ahd_softc*,struct scb*) ;
 int FUNC_23 (struct ahd_softc*,int) ;
 int FUNC_24 (struct ahd_softc*) ;
 int FUNC_25 (struct scb*,int) ;
 int FUNC_26 (struct scb*,int ) ;
 int FUNC_27 (char*,...) ;
 int VAR_27 ;

void
FUNC_28(struct ahd_softc *VAR_28)
{
 struct scb *VAR_29;
 struct scb *VAR_30;
 int VAR_31;
 int VAR_32;
 u_int VAR_33;
 u_int VAR_34;






 VAR_32 = FUNC_11(VAR_28);

 FUNC_27("%s: Recovery Initiated - Card was %spaused\n", FUNC_13(VAR_28),
        VAR_32 ? "" : "not ");
 FUNC_0(VAR_28);
 FUNC_8(VAR_28);

 FUNC_16(VAR_28);

 if (FUNC_1(&VAR_28->timedout_scbs) != 0) {
  FUNC_27("%s: Timedout SCBs already complete. "
         "Interrupts may not be functioning.\n", FUNC_13(VAR_28));
  FUNC_24(VAR_28);
  return;
 }
 FUNC_21(VAR_28, VAR_0, VAR_0);
 VAR_34 = FUNC_10(VAR_28, VAR_6);
 VAR_33 = FUNC_9(VAR_28);
 VAR_30 = ((void*)0);
 if (VAR_34 != VAR_10
  || (FUNC_10(VAR_28, VAR_24) & VAR_9) == 0)
  VAR_30 = FUNC_12(VAR_28, VAR_33);

 while ((VAR_29 = FUNC_2(&VAR_28->timedout_scbs)) != ((void*)0)) {
  int VAR_35;
  int VAR_36;
  char VAR_37;

  VAR_35 = FUNC_7(VAR_28, VAR_29);
  VAR_37 = FUNC_4(VAR_28, VAR_29);
  VAR_36 = FUNC_5(VAR_29);

  FUNC_17(VAR_28, VAR_29);
  FUNC_27("SCB %d - timed out\n", FUNC_6(VAR_29));

  if (VAR_29->flags & (VAR_14|VAR_12)) {




   FUNC_26(VAR_29, VAR_2);
bus_reset:
   VAR_31 = FUNC_19(VAR_28, VAR_37,
                          VAR_26);
   FUNC_27("%s: Issued Channel %c Bus Reset. "
          "%d SCBs aborted\n", FUNC_13(VAR_28), VAR_37,
          VAR_31);
   continue;
  }





  FUNC_3(VAR_29, VAR_27);
  VAR_29->flags &= ~VAR_19;

  if (VAR_30 != ((void*)0)) {

   if (VAR_30 != VAR_29) {
    if (FUNC_14(VAR_28, VAR_29,
         VAR_30) == 0)
     goto bus_reset;
    continue;
   }





   FUNC_22(VAR_28, VAR_30);
                 VAR_30->flags |= VAR_17|VAR_14;
   FUNC_15(VAR_28, VAR_8, VAR_5);
   FUNC_15(VAR_28, VAR_21, VAR_34|VAR_1);
   FUNC_17(VAR_28, VAR_30);
   FUNC_27("BDR message in message buffer\n");
   FUNC_25(VAR_29, 2 * 1000);
   break;
  } else if (VAR_34 != VAR_10
   && FUNC_10(VAR_28, VAR_20) == 0) {







   FUNC_27("%s: Connection stuck awaiting busfree or "
          "Identify Msg.\n", FUNC_13(VAR_28));
   goto bus_reset;
  } else if (FUNC_20(VAR_28, VAR_35, VAR_37, VAR_36,
           FUNC_6(VAR_29),
           VAR_11, 0,
           VAR_23) > 0) {







   if (FUNC_14(VAR_28, VAR_29, ((void*)0)) == 0)
    goto bus_reset;
  } else {





   FUNC_22(VAR_28, VAR_29);
   VAR_29->flags |= VAR_14;
   VAR_29->hscb->cdb_len = 0;
   VAR_29->hscb->task_attribute = 0;
   VAR_29->hscb->task_management = VAR_25;

   FUNC_23(VAR_28, FUNC_6(VAR_29));
   if ((VAR_29->flags & VAR_16) != 0) {







    FUNC_15(VAR_28, VAR_18,
      VAR_29->hscb->task_management);
   } else {
    VAR_29->hscb->control |= VAR_7|VAR_4;







    FUNC_15(VAR_28, VAR_13,
      FUNC_10(VAR_28, VAR_13)|VAR_7);
   }






   FUNC_20(VAR_28, VAR_35, VAR_37, VAR_36,
        VAR_15, VAR_11,
        VAR_3, VAR_22);
   FUNC_18(VAR_28, VAR_29);
   FUNC_23(VAR_28, VAR_33);
   FUNC_17(VAR_28, VAR_29);
   FUNC_27("Queuing a BDR SCB\n");
   FUNC_25(VAR_29, 2 * 1000);
   break;
  }
 }






 while ((VAR_29 = FUNC_2(&VAR_28->timedout_scbs)) != ((void*)0)) {

  FUNC_3(VAR_29, VAR_27);
  VAR_29->flags &= ~VAR_19;
 }

 FUNC_24(VAR_28);
}
