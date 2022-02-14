
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct scb {int sg_count; int flags; TYPE_3__* hscb; TYPE_1__* sg_list; } ;
struct ahc_softc {int flags; int timedout_scbs; TYPE_2__* scb_data; } ;
struct TYPE_6__ {int tag; scalar_t__ control; } ;
struct TYPE_5__ {scalar_t__ numscbs; } ;
struct TYPE_4__ {int addr; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int *) ;
 struct scb* FUNC_1 (int *) ;
 int FUNC_2 (struct scb*,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 char FUNC_3 (struct ahc_softc*,struct scb*) ;
 int FUNC_4 (struct scb*) ;
 int FUNC_5 (struct ahc_softc*,struct scb*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int FUNC_6 (struct ahc_softc*,int,char,int,int,int ,int ) ;
 int FUNC_7 (struct ahc_softc*) ;
 scalar_t__ FUNC_8 (struct ahc_softc*,int ) ;
 struct scb* FUNC_9 (struct ahc_softc*,scalar_t__) ;
 char* FUNC_10 (struct ahc_softc*) ;
 scalar_t__ FUNC_11 (struct ahc_softc*,struct scb*,struct scb*) ;
 int FUNC_12 (struct ahc_softc*,int ,scalar_t__) ;
 int FUNC_13 (struct ahc_softc*) ;
 int FUNC_14 (struct ahc_softc*,struct scb*) ;
 int FUNC_15 (struct ahc_softc*,struct scb*) ;
 int FUNC_16 (struct ahc_softc*,char,int) ;
 int FUNC_17 (struct ahc_softc*) ;
 int FUNC_18 (struct ahc_softc*,int,char,int,int,int,int,int) ;
 scalar_t__ FUNC_19 (struct ahc_softc*,int,char,int,int,int ,int ,int ) ;
 int FUNC_20 (struct ahc_softc*,struct scb*) ;
 int FUNC_21 (struct ahc_softc*) ;
 int FUNC_22 (struct scb*,int) ;
 int FUNC_23 (struct scb*,int ) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*,...) ;
 int VAR_32 ;

void
FUNC_26(struct ahc_softc *VAR_33)
{
 struct scb *VAR_34;
 int VAR_35;
 int VAR_36;
 u_int VAR_37;






 FUNC_13(VAR_33);

 if (FUNC_0(&VAR_33->timedout_scbs) != 0) {
  FUNC_25("%s: Timedout SCBs already complete. "
         "Interrupts may not be functioning.\n", FUNC_10(VAR_33));
  FUNC_21(VAR_33);
  return;
 }

 VAR_36 = 0;
 FUNC_25("%s: Recovery Initiated\n", FUNC_10(VAR_33));
 FUNC_7(VAR_33);

 VAR_37 = FUNC_8(VAR_33, VAR_8);
 while ((VAR_34 = FUNC_1(&VAR_33->timedout_scbs)) != ((void*)0)) {
  u_int VAR_38;
  u_int VAR_39;
  int VAR_40;
  int VAR_41;
  int VAR_42;
  char VAR_43;

  VAR_40 = FUNC_5(VAR_33, VAR_34);
  VAR_43 = FUNC_3(VAR_33, VAR_34);
  VAR_41 = FUNC_4(VAR_34);

  FUNC_14(VAR_33, VAR_34);
  FUNC_25("SCB 0x%x - timed out\n", VAR_34->hscb->tag);
  if (VAR_34->sg_count > 0) {
   for (VAR_42 = 0; VAR_42 < VAR_34->sg_count; VAR_42++) {
    FUNC_25("sg[%d] - Addr 0x%x : Length %d\n",
           VAR_42,
           VAR_34->sg_list[VAR_42].addr,
           VAR_34->sg_list[VAR_42].len & VAR_1);
   }
  }
  if (VAR_34->flags & (VAR_19|VAR_17)) {




   FUNC_23(VAR_34, VAR_3);
bus_reset:
   VAR_35 = FUNC_16(VAR_33, VAR_43,
                          VAR_31);
   FUNC_25("%s: Issued Channel %c Bus Reset. "
          "%d SCBs aborted\n", FUNC_10(VAR_33), VAR_43,
          VAR_35);
   continue;
  }





  FUNC_2(VAR_34, VAR_32);
  VAR_34->flags &= ~VAR_23;
  VAR_39 = FUNC_8(VAR_33, VAR_16);
  VAR_38 = FUNC_8(VAR_33, VAR_21);

  if ((FUNC_8(VAR_33, VAR_27) & VAR_11) == 0
    && (VAR_38 < VAR_33->scb_data->numscbs)) {
   struct scb *VAR_44;







   VAR_44 = FUNC_9(VAR_33, VAR_38);
   if (VAR_44 != VAR_34) {
    if (FUNC_11(VAR_33, VAR_34,
         VAR_44) == 0)
     goto bus_reset;
    continue;
   }


   if ((VAR_34->flags & VAR_22) != 0) {





    FUNC_6(VAR_33, FUNC_5(VAR_33, VAR_34),
            FUNC_3(VAR_33, VAR_34),
            FUNC_4(VAR_34),
            VAR_34->hscb->tag,
            VAR_15,
            VAR_3);


    VAR_36 = 1;
    break;
   }

   FUNC_20(VAR_33, VAR_44);
   FUNC_12(VAR_33, VAR_10, VAR_7);
   FUNC_12(VAR_33, VAR_24, VAR_37|VAR_2);
   FUNC_14(VAR_33, VAR_44);
   FUNC_25("BDR message in message buffer\n");
   VAR_44->flags |= VAR_19;
   FUNC_22(VAR_34, 2 * 1000);
  } else if (VAR_37 != VAR_12
   && (FUNC_8(VAR_33, VAR_29) & VAR_13) == 0) {







   FUNC_25("%s: Connection stuck awaiting busfree or "
          "Identify Msg.\n", FUNC_10(VAR_33));
   goto bus_reset;
  } else {
   int VAR_45;

   if (VAR_37 != VAR_12
    && (FUNC_8(VAR_33, VAR_28) & VAR_30) != 0) {

    FUNC_25("%s: Hung target selection\n",
           FUNC_10(VAR_33));
    VAR_36 = 1;
    break;
   }


   if ((VAR_34->flags & VAR_22) != 0)
    FUNC_24("Timed-out target SCB but bus idle");

   if (FUNC_19(VAR_33, VAR_40, VAR_43, VAR_41,
            VAR_34->hscb->tag, VAR_14,
                      0, VAR_26) > 0) {
    VAR_45 = VAR_6;
   } else {
    VAR_45 = VAR_31;
   }

   if (VAR_45) {

    FUNC_20(VAR_33, VAR_34);
    VAR_34->hscb->control |= VAR_9|VAR_5;
    VAR_34->flags |= VAR_19;
    FUNC_18(VAR_33, VAR_40, VAR_43,
           VAR_41, VAR_34->hscb->tag,
                            VAR_31,
                     VAR_31,
                         VAR_6);
    if ((VAR_33->flags & VAR_0) == 0) {
     FUNC_12(VAR_33, VAR_16, VAR_34->hscb->tag);
     FUNC_12(VAR_33, VAR_18,
       FUNC_8(VAR_33, VAR_18)
      | VAR_9);
    }






    FUNC_19(VAR_33,
         FUNC_5(VAR_33, VAR_34),
         VAR_43, FUNC_4(VAR_34),
         VAR_20,
         VAR_14,
         VAR_4,
         VAR_25);
    FUNC_14(VAR_33, VAR_34);
    FUNC_25("Queuing a BDR SCB\n");
    FUNC_15(VAR_33, VAR_34);
    FUNC_12(VAR_33, VAR_16, VAR_39);
    FUNC_22(VAR_34, 2 * 1000);
   } else {


    FUNC_20(VAR_33, VAR_34);
    FUNC_14(VAR_33, VAR_34);
    FUNC_25("SCB %d: Immediate reset.  "
     "Flags = 0x%x\n", VAR_34->hscb->tag,
     VAR_34->flags);
    goto bus_reset;
   }
  }
  break;
 }






 while ((VAR_34 = FUNC_1(&VAR_33->timedout_scbs)) != ((void*)0)) {

  FUNC_2(VAR_34, VAR_32);
  VAR_34->flags &= ~VAR_23;
 }

 if (VAR_36)
  FUNC_17(VAR_33);
 else
  FUNC_21(VAR_33);
}
