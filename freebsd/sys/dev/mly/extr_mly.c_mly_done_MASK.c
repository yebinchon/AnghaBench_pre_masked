
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ flag; } ;
struct TYPE_5__ {scalar_t__ command_id; int residue; void* sense_length; void* status; } ;
union mly_status_packet {TYPE_3__ mmbox; TYPE_2__ status; } ;
typedef scalar_t__ u_int16_t ;
struct mly_softc {size_t mly_mmbox_status_index; int mly_state; int mly_task_complete; int mly_odbr; struct mly_command* mly_command; TYPE_1__* mly_mmbox; int mly_idbr; scalar_t__ mly_status_mailbox; } ;
struct mly_command {int mc_flags; int mc_resid; void* mc_sense; void* mc_status; } ;
struct TYPE_4__ {union mly_status_packet* mmm_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct mly_softc*) ;
 int VAR_1 ;
 void* FUNC_1 (struct mly_softc*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct mly_softc*,scalar_t__) ;
 int FUNC_3 (struct mly_softc*,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct mly_softc*,int ) ;
 int FUNC_5 (struct mly_softc*,int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct mly_softc*) ;
 int FUNC_7 (struct mly_command*) ;
 int FUNC_8 (struct mly_softc*,char*,scalar_t__,...) ;
 int FUNC_9 (struct mly_command*) ;
 int FUNC_10 (int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_11(struct mly_softc *VAR_9)
{
    struct mly_command *VAR_10;
    union mly_status_packet *VAR_11;
    u_int16_t VAR_12;
    int VAR_13;

    FUNC_0(VAR_9);
    VAR_13 = 0;


    if (FUNC_4(VAR_9, VAR_3)) {
 VAR_12 = FUNC_2(VAR_9, VAR_9->mly_status_mailbox);
 if (VAR_12 < VAR_5) {
     VAR_10 = &VAR_9->mly_command[VAR_12 - VAR_6];
     VAR_10->mc_status = FUNC_1(VAR_9, VAR_9->mly_status_mailbox + 2);
     VAR_10->mc_sense = FUNC_1(VAR_9, VAR_9->mly_status_mailbox + 3);
     VAR_10->mc_resid = FUNC_3(VAR_9, VAR_9->mly_status_mailbox + 4);
     FUNC_9(VAR_10);
     VAR_10->mc_flags &= ~VAR_1;
     FUNC_7(VAR_10);
     VAR_13 = 1;
 } else {

     FUNC_8(VAR_9, "got HM completion for illegal slot %u\n", VAR_12);
 }

 FUNC_5(VAR_9, VAR_9->mly_odbr, VAR_3);
 FUNC_5(VAR_9, VAR_9->mly_idbr, VAR_2);
    }


    if (FUNC_4(VAR_9, VAR_0)) {
 for (;;) {
     VAR_11 = &VAR_9->mly_mmbox->mmm_status[VAR_9->mly_mmbox_status_index];


     if (VAR_11->mmbox.flag == 0)
  break;


     VAR_12 = VAR_11->status.command_id;
     if (VAR_12 < VAR_5) {
  VAR_10 = &VAR_9->mly_command[VAR_12 - VAR_6];
  VAR_10->mc_status = VAR_11->status.status;
  VAR_10->mc_sense = VAR_11->status.sense_length;
  VAR_10->mc_resid = VAR_11->status.residue;
  FUNC_9(VAR_10);
  VAR_10->mc_flags &= ~VAR_1;
  FUNC_7(VAR_10);
  VAR_13 = 1;
     } else {

  FUNC_8(VAR_9, "got AM completion for illegal slot %u at %d\n",
      VAR_12, VAR_9->mly_mmbox_status_index);
     }


     VAR_11->mmbox.flag = 0;
     VAR_9->mly_mmbox_status_index = (VAR_9->mly_mmbox_status_index + 1) % VAR_4;
 }

 FUNC_5(VAR_9, VAR_9->mly_odbr, VAR_0);
    }

    if (VAR_13) {
 if (VAR_9->mly_state & VAR_7)
     FUNC_10(VAR_8, &VAR_9->mly_task_complete);
 else
     FUNC_6(VAR_9);
    }
}
