
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct scb {int flags; TYPE_1__* hscb; } ;
struct ahd_softc {int send_msg_perror; int* msgout_buf; void* msg_type; scalar_t__ msgout_index; scalar_t__ msgout_len; int msg_flags; } ;
struct ahd_devinfo {int target_mask; } ;
struct TYPE_2__ {int control; int scsiid; } ;


 int FUNC_0 (struct ahd_softc*) ;
 int FUNC_1 (struct ahd_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (struct scb*) ;
 int FUNC_3 (struct scb*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_4 (struct ahd_softc*,struct ahd_devinfo*) ;
 scalar_t__ FUNC_5 (struct ahd_softc*) ;
 int VAR_22 ;
 scalar_t__ FUNC_6 (struct ahd_softc*,int ) ;
 int FUNC_7 (struct ahd_softc*,int ) ;
 char* FUNC_8 (struct ahd_softc*) ;
 int FUNC_9 (struct ahd_softc*,int ,int) ;
 int FUNC_10 (struct ahd_softc*,struct scb*) ;
 int FUNC_11 (char*,int,int,int,scalar_t__,int) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static void
FUNC_13(struct ahd_softc *VAR_23, struct ahd_devinfo *VAR_24,
      struct scb *VAR_25)
{





 VAR_23->msgout_index = 0;
 VAR_23->msgout_len = 0;

 if (FUNC_5(VAR_23))
  VAR_23->msg_flags |= VAR_7;

 if (VAR_23->send_msg_perror
  && FUNC_6(VAR_23, VAR_11) == VAR_2) {
  VAR_23->msgout_buf[VAR_23->msgout_index++] = VAR_23->send_msg_perror;
  VAR_23->msgout_len++;
  VAR_23->msg_type = VAR_12;




  return;
 } else if (VAR_25 == ((void*)0)) {
  FUNC_12("%s: WARNING. No pending message for "
         "I_T msgin.  Issuing NO-OP\n", FUNC_8(VAR_23));
  FUNC_0(VAR_23);
  VAR_23->msgout_buf[VAR_23->msgout_index++] = VAR_10;
  VAR_23->msgout_len++;
  VAR_23->msg_type = VAR_12;
  return;
 }

 if ((VAR_25->flags & VAR_16) == 0
  && (VAR_25->flags & VAR_18) == 0
  && FUNC_6(VAR_23, VAR_11) == VAR_8) {
  u_int VAR_26;

  VAR_26 = VAR_8 | FUNC_2(VAR_25);
  if ((VAR_25->hscb->control & VAR_1) != 0)
   VAR_26 |= VAR_9;
  VAR_23->msgout_buf[VAR_23->msgout_index++] = VAR_26;
  VAR_23->msgout_len++;

  if ((VAR_25->hscb->control & VAR_21) != 0) {
   VAR_23->msgout_buf[VAR_23->msgout_index++] =
       VAR_25->hscb->control & (VAR_21|VAR_19);
   VAR_23->msgout_buf[VAR_23->msgout_index++] = FUNC_3(VAR_25);
   VAR_23->msgout_len += 2;
  }
 }

 if (VAR_25->flags & VAR_16) {
  VAR_23->msgout_buf[VAR_23->msgout_index++] = VAR_6;
  VAR_23->msgout_len++;
  FUNC_10(VAR_23, VAR_25);
  FUNC_12("Bus Device Reset Message Sent\n");
  FUNC_0(VAR_23);







  FUNC_9(VAR_23, VAR_20, 0);
 } else if ((VAR_25->flags & VAR_13) != 0) {

  if ((VAR_25->hscb->control & VAR_21) != 0) {
   VAR_23->msgout_buf[VAR_23->msgout_index++] = VAR_5;
  } else {
   VAR_23->msgout_buf[VAR_23->msgout_index++] = VAR_4;
  }
  VAR_23->msgout_len++;
  FUNC_10(VAR_23, VAR_25);
  FUNC_12("Abort%s Message Sent\n",
         (VAR_25->hscb->control & VAR_21) != 0 ? " Tag" : "");
  FUNC_0(VAR_23);







  FUNC_9(VAR_23, VAR_20, 0);
 } else if ((VAR_25->flags & (VAR_14|VAR_17)) != 0) {
  FUNC_4(VAR_23, VAR_24);







  FUNC_9(VAR_23, VAR_20, 0);
 } else {
  FUNC_12("ahd_intr: AWAITING_MSG for an SCB that "
         "does not have a waiting message\n");
  FUNC_12("SCSIID = %x, target_mask = %x\n", VAR_25->hscb->scsiid,
         VAR_24->target_mask);
  FUNC_1(VAR_23);
  FUNC_11("SCB = %d, SCB Control = %x:%x, MSG_OUT = %x "
        "SCB flags = %x", FUNC_3(VAR_25), VAR_25->hscb->control,
        FUNC_7(VAR_23, VAR_15), FUNC_6(VAR_23, VAR_11),
        VAR_25->flags);
 }





 FUNC_9(VAR_23, VAR_15,
   FUNC_7(VAR_23, VAR_15) & ~VAR_3);
 VAR_25->hscb->control &= ~VAR_3;
 VAR_23->msgout_index = 0;
 VAR_23->msg_type = VAR_12;
}
