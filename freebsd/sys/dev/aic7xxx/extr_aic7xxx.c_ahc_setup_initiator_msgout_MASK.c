
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct scb {int flags; TYPE_1__* hscb; } ;
struct ahc_softc {int* msgout_buf; int msg_type; scalar_t__ msgout_index; scalar_t__ msgout_len; } ;
struct ahc_devinfo {int target_mask; } ;
struct TYPE_2__ {int control; int tag; int scsiid; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct scb*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct ahc_softc*,struct ahc_devinfo*) ;
 int FUNC_2 (struct ahc_softc*,int ) ;
 int FUNC_3 (struct ahc_softc*,int ,int) ;
 int FUNC_4 (struct ahc_softc*,struct scb*) ;
 int FUNC_5 (char*,int,int,int,int) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7(struct ahc_softc *VAR_18, struct ahc_devinfo *VAR_19,
      struct scb *VAR_20)
{





 VAR_18->msgout_index = 0;
 VAR_18->msgout_len = 0;

 if ((VAR_20->flags & VAR_13) == 0
  && FUNC_2(VAR_18, VAR_8) == VAR_6) {
  u_int VAR_21;

  VAR_21 = VAR_6 | FUNC_0(VAR_20);
  if ((VAR_20->hscb->control & VAR_0) != 0)
   VAR_21 |= VAR_7;
  VAR_18->msgout_buf[VAR_18->msgout_index++] = VAR_21;
  VAR_18->msgout_len++;

  if ((VAR_20->hscb->control & VAR_17) != 0) {
   VAR_18->msgout_buf[VAR_18->msgout_index++] =
       VAR_20->hscb->control & (VAR_17|VAR_15);
   VAR_18->msgout_buf[VAR_18->msgout_index++] = VAR_20->hscb->tag;
   VAR_18->msgout_len += 2;
  }
 }

 if (VAR_20->flags & VAR_13) {
  VAR_18->msgout_buf[VAR_18->msgout_index++] = VAR_5;
  VAR_18->msgout_len++;
  FUNC_4(VAR_18, VAR_20);
  FUNC_6("Bus Device Reset Message Sent\n");







  FUNC_3(VAR_18, VAR_16, (FUNC_2(VAR_18, VAR_16) & ~VAR_1));
 } else if ((VAR_20->flags & VAR_10) != 0) {
  if ((VAR_20->hscb->control & VAR_17) != 0)
   VAR_18->msgout_buf[VAR_18->msgout_index++] = VAR_4;
  else
   VAR_18->msgout_buf[VAR_18->msgout_index++] = VAR_3;
  VAR_18->msgout_len++;
  FUNC_4(VAR_18, VAR_20);
  FUNC_6("Abort%s Message Sent\n",
         (VAR_20->hscb->control & VAR_17) != 0 ? " Tag" : "");







  FUNC_3(VAR_18, VAR_16, (FUNC_2(VAR_18, VAR_16) & ~VAR_1));
 } else if ((VAR_20->flags & (VAR_11|VAR_14)) != 0) {
  FUNC_1(VAR_18, VAR_19);
 } else {
  FUNC_6("ahc_intr: AWAITING_MSG for an SCB that "
         "does not have a waiting message\n");
  FUNC_6("SCSIID = %x, target_mask = %x\n", VAR_20->hscb->scsiid,
         VAR_19->target_mask);
  FUNC_5("SCB = %d, SCB Control = %x, MSG_OUT = %x "
        "SCB flags = %x", VAR_20->hscb->tag, VAR_20->hscb->control,
        FUNC_2(VAR_18, VAR_8), VAR_20->flags);
 }





 FUNC_3(VAR_18, VAR_12, FUNC_2(VAR_18, VAR_12) & ~VAR_2);
 VAR_20->hscb->control &= ~VAR_2;
 VAR_18->msgout_index = 0;
 VAR_18->msg_type = VAR_9;
}
