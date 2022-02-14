
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint32_t ;
typedef size_t u_int ;
struct scb {int flags; TYPE_1__* hscb; } ;
struct ahc_softc {size_t qinfifonext; int features; size_t* qinfifo; TYPE_4__* scb_data; TYPE_3__* next_queued_scb; } ;
typedef int role_t ;
typedef int cam_status ;
typedef int ahc_search_action ;
struct TYPE_8__ {size_t numscbs; int ** scbindex; } ;
struct TYPE_7__ {TYPE_2__* hscb; } ;
struct TYPE_6__ {size_t tag; } ;
struct TYPE_5__ {size_t next; size_t tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct ahc_softc*,struct scb*) ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*) ;
 size_t FUNC_3 (struct ahc_softc*,int ) ;
 struct scb* FUNC_4 (struct ahc_softc*,size_t) ;
 scalar_t__ FUNC_5 (struct ahc_softc*,struct scb*,int,char,int,size_t,int ) ;
 int FUNC_6 (struct ahc_softc*,int ,size_t) ;
 int FUNC_7 (struct ahc_softc*,struct scb*,struct scb*) ;
 int FUNC_8 (struct ahc_softc*) ;
 size_t FUNC_9 (struct ahc_softc*,size_t,size_t) ;
 scalar_t__ FUNC_10 (struct ahc_softc*,int *,int,char,int,int ,int) ;
 int FUNC_11 (struct ahc_softc*,struct scb*) ;
 int FUNC_12 (struct scb*) ;
 int FUNC_13 (struct scb*) ;
 int FUNC_14 (struct scb*,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,...) ;

int
FUNC_17(struct ahc_softc *VAR_14, int VAR_15, char VAR_16,
     int VAR_17, u_int VAR_18, role_t VAR_19, uint32_t VAR_20,
     ahc_search_action VAR_21)
{
 struct scb *VAR_22;
 struct scb *VAR_23;
 uint8_t VAR_24;
 uint8_t VAR_25;
 uint8_t VAR_26;
 uint8_t VAR_27;
 uint8_t VAR_28;
 uint8_t VAR_29;
 int VAR_30;
 int VAR_31;

 VAR_26 = VAR_14->qinfifonext;
 VAR_31 = (VAR_14->features & VAR_0) != 0;
 if (VAR_31) {
  VAR_24 = FUNC_3(VAR_14, VAR_12);
  FUNC_6(VAR_14, VAR_12, VAR_24);
 } else
  VAR_24 = FUNC_3(VAR_14, VAR_6);
 VAR_25 = VAR_24;
 VAR_30 = 0;
 VAR_23 = ((void*)0);

 if (VAR_21 == 130) {




  FUNC_2(VAR_14);
 }





 VAR_14->qinfifonext = VAR_25;
 FUNC_6(VAR_14, VAR_5, VAR_14->next_queued_scb->hscb->tag);

 while (VAR_25 != VAR_26) {
  VAR_22 = FUNC_4(VAR_14, VAR_14->qinfifo[VAR_25]);
  if (VAR_22 == ((void*)0)) {
   FUNC_16("qinpos = %d, SCB index = %d\n",
    VAR_25, VAR_14->qinfifo[VAR_25]);
   FUNC_15("Loop 1\n");
  }

  if (FUNC_5(VAR_14, VAR_22, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19)) {



   VAR_30++;
   switch (VAR_21) {
   case 130:
   {
    cam_status VAR_32;
    cam_status VAR_33;

    VAR_32 = FUNC_13(VAR_22);
    if (VAR_32 == VAR_2)
     FUNC_14(VAR_22, VAR_20);
    VAR_33 = FUNC_13(VAR_22);
    if (VAR_33 != VAR_1)
     FUNC_12(VAR_22);
    if ((VAR_22->flags & VAR_8) == 0)
     FUNC_16("Inactive SCB in qinfifo\n");
    FUNC_0(VAR_14, VAR_22);


   }
   case 128:
    break;
   case 129:
    FUNC_7(VAR_14, VAR_23, VAR_22);
    VAR_23 = VAR_22;
    break;
   }
  } else {
   FUNC_7(VAR_14, VAR_23, VAR_22);
   VAR_23 = VAR_22;
  }
  VAR_25++;
 }

 if ((VAR_14->features & VAR_0) != 0) {
  FUNC_6(VAR_14, VAR_3, VAR_14->qinfifonext);
 } else {
  FUNC_6(VAR_14, VAR_4, VAR_14->qinfifonext);
 }

 if (VAR_21 != 129
  && (VAR_30 != 0)
  && (VAR_24 != VAR_14->qinfifonext)) {
  VAR_22 = FUNC_4(VAR_14, VAR_14->qinfifo[VAR_24]);

  if (VAR_22 == ((void*)0)) {
   FUNC_16("found = %d, qinstart = %d, qinfifionext = %d\n",
    VAR_30, VAR_24, VAR_14->qinfifonext);
   FUNC_15("First/Second Qinfifo fixup\n");
  }






  VAR_27 = VAR_22->hscb->next;
  VAR_14->scb_data->scbindex[VAR_22->hscb->tag] = ((void*)0);
  FUNC_11(VAR_14, VAR_22);
  VAR_22->hscb->next = VAR_27;
  VAR_14->qinfifo[VAR_24] = VAR_22->hscb->tag;


  FUNC_6(VAR_14, VAR_5, VAR_22->hscb->tag);


  VAR_26 = VAR_14->qinfifonext - 1;
  VAR_22 = FUNC_4(VAR_14, VAR_14->qinfifo[VAR_26]);
  VAR_22->hscb->next = VAR_14->next_queued_scb->hscb->tag;
 }




 VAR_29 = FUNC_3(VAR_14, VAR_7);
 VAR_27 = FUNC_3(VAR_14, VAR_13);
 VAR_28 = VAR_9;

 while (VAR_27 != VAR_9) {
  uint8_t VAR_34;

  FUNC_6(VAR_14, VAR_7, VAR_27);
  VAR_34 = FUNC_3(VAR_14, VAR_11);
  if (VAR_34 >= VAR_14->scb_data->numscbs) {
   FUNC_16("Waiting List inconsistency. "
          "SCB index == %d, yet numscbs == %d.",
          VAR_34, VAR_14->scb_data->numscbs);
   FUNC_1(VAR_14);
   FUNC_15("for safety");
  }
  VAR_22 = FUNC_4(VAR_14, VAR_34);
  if (VAR_22 == ((void*)0)) {
   FUNC_16("scb_index = %d, next = %d\n",
    VAR_34, VAR_27);
   FUNC_15("Waiting List traversal\n");
  }
  if (FUNC_5(VAR_14, VAR_22, VAR_15, VAR_16,
      VAR_17, VAR_9, VAR_19)) {



   VAR_30++;
   switch (VAR_21) {
   case 130:
   {
    cam_status VAR_35;
    cam_status VAR_36;

    VAR_35 = FUNC_13(VAR_22);
    if (VAR_35 == VAR_2)
     FUNC_14(VAR_22,
           VAR_20);
    VAR_36 = FUNC_13(VAR_22);
    if (VAR_36 != VAR_1)
     FUNC_12(VAR_22);
    if ((VAR_22->flags & VAR_8) == 0)
     FUNC_16("Inactive SCB in Wait List\n");
    FUNC_0(VAR_14, VAR_22);

   }
   case 128:
    VAR_27 = FUNC_9(VAR_14, VAR_27, VAR_28);
    break;
   case 129:
    VAR_28 = VAR_27;
    VAR_27 = FUNC_3(VAR_14, VAR_10);
    break;
   }
  } else {

   VAR_28 = VAR_27;
   VAR_27 = FUNC_3(VAR_14, VAR_10);
  }
 }
 FUNC_6(VAR_14, VAR_7, VAR_29);

 VAR_30 += FUNC_10(VAR_14, ((void*)0), VAR_15,
         VAR_16, VAR_17, VAR_20, VAR_21);

 if (VAR_21 == 130)
  FUNC_8(VAR_14);
 return (VAR_30);
}
