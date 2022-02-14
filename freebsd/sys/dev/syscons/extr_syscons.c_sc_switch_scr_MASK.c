
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_17__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef scalar_t__ u_int ;
struct tty {int dummy; } ;
struct proc {int dummy; } ;
struct TYPE_23__ {scalar_t__ mode; } ;
struct TYPE_25__ {int status; scalar_t__ index; TYPE_1__ smode; int pid; struct proc* proc; int bell_duration; int bell_pitch; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_26__ {int flags; scalar_t__ first_vty; scalar_t__ vtys; scalar_t__ unit; scalar_t__ switch_in_progress; TYPE_3__* cur_scp; TYPE_3__* old_scp; TYPE_3__* new_scp; scalar_t__ delayed_next_scr; scalar_t__ blink_in_progress; scalar_t__ write_in_progress; } ;
typedef TYPE_4__ sc_softc_t ;
struct TYPE_24__ {scalar_t__ mode; } ;
struct TYPE_22__ {TYPE_2__ smode; } ;
struct TYPE_21__ {int bell_pitch; } ;
struct TYPE_20__ {scalar_t__ index; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct proc*) ;
 struct tty* FUNC_3 (TYPE_4__*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_17__* FUNC_4 (struct tty*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_4__*,scalar_t__) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 TYPE_15__ VAR_11 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int ,int*) ;
 scalar_t__ VAR_12 ;
 struct proc* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_3__*,int ,int ) ;
 TYPE_10__* VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 TYPE_3__* FUNC_12 (struct tty*) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (TYPE_3__*) ;
 scalar_t__ FUNC_15 (TYPE_3__*) ;
 int FUNC_16 () ;
 int FUNC_17 (int) ;
 scalar_t__ FUNC_18 (struct tty*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (int ) ;

int
FUNC_21(sc_softc_t *VAR_16, u_int VAR_17)
{
    scr_stat *VAR_18;
    struct tty *VAR_19;
    struct proc *VAR_20;
    int VAR_21;

    FUNC_0(5, ("sc0: sc_switch_scr() %d ", VAR_17 + 1));

    if (VAR_16->cur_scp == ((void*)0))
 return (0);


    if (VAR_16->flags & VAR_5) {
     FUNC_11(VAR_16->cur_scp, VAR_16->cur_scp->bell_pitch,
  VAR_16->cur_scp->bell_duration);
     return VAR_2;
    }


    if ((VAR_16->flags & VAR_4) || VAR_16->write_in_progress
 || VAR_16->blink_in_progress) {
 VAR_16->delayed_next_scr = VAR_17 + 1;
 FUNC_13();
 FUNC_0(5, ("switch delayed\n"));
 return 0;
    }
    VAR_16->delayed_next_scr = 0;

    VAR_21 = FUNC_16();
    VAR_18 = VAR_16->cur_scp;


    if (VAR_16->switch_in_progress
 && (VAR_18->smode.mode == VAR_10)
 && VAR_18->proc) {
 VAR_20 = FUNC_10(VAR_18->pid);
 if (VAR_18->proc != VAR_20) {
     if (VAR_20)
  FUNC_2(VAR_20);





     FUNC_0(5, ("cur_scp controlling process %d died, ",
        VAR_18->pid));
     if (VAR_18->status & VAR_7) {




  FUNC_0(5, ("reset WAIT_REL, "));
  FUNC_9(VAR_18, VAR_8, &VAR_21);
  FUNC_17(VAR_21);
  FUNC_0(5, ("finishing previous switch\n"));
  return VAR_1;
     } else if (VAR_18->status & VAR_6) {

  FUNC_0(5, ("reset WAIT_ACQ, "));
  FUNC_8(VAR_18);
     } else {





  FUNC_0(5, ("waiting nothing, "));
     }
 } else {
     if (VAR_20)
  FUNC_2(VAR_20);






     if (VAR_18->status & VAR_7) {
  switch (VAR_16->switch_in_progress++) {
  case 1:
      break;
  case 2:
      FUNC_0(5, ("sending relsig again, "));
      FUNC_15(VAR_18);
      break;
  case 3:
      break;
  case 4:
  default:




      FUNC_0(5, ("force reset WAIT_REL, "));
      FUNC_9(VAR_18, VAR_3, &VAR_21);
      FUNC_17(VAR_21);
      FUNC_0(5, ("act as if VT_FALSE was seen\n"));
      return VAR_1;
  }
     } else if (VAR_18->status & VAR_6) {
  switch (VAR_16->switch_in_progress++) {
  case 1:
      break;
  case 2:
      FUNC_0(5, ("sending acqsig again, "));
      FUNC_14(VAR_18);
      break;
  case 3:
      break;
  case 4:
  default:

      FUNC_0(5, ("force reset WAIT_ACQ, "));
      FUNC_8(VAR_18);
      break;
  }
     }
 }
    }





    if ((VAR_17 < VAR_16->first_vty) || (VAR_17 >= VAR_16->first_vty + VAR_16->vtys)
 || VAR_16->switch_in_progress) {
 FUNC_17(VAR_21);
 FUNC_11(VAR_18, VAR_11.bell_pitch, VAR_0);
 FUNC_0(5, ("error 1\n"));
 return VAR_1;
    }






    VAR_19 = FUNC_3(VAR_16, VAR_18->index);
    if ((VAR_18->index != VAR_17)
 && FUNC_18(VAR_19)
 && (VAR_18->smode.mode == VAR_9)
 && FUNC_1(VAR_18)) {
 FUNC_17(VAR_21);
 FUNC_11(VAR_18, VAR_11.bell_pitch, VAR_0);
 FUNC_0(5, ("error, graphics mode\n"));
 return VAR_1;
    }







    if ((VAR_13 == ((void*)0)) || (VAR_17 != VAR_13->index)) {
 VAR_19 = FUNC_3(VAR_16, VAR_17);
 if (!FUNC_18(VAR_19)) {
     FUNC_17(VAR_21);
     FUNC_11(VAR_18, VAR_11.bell_pitch, VAR_0);
     FUNC_0(5, ("error 2, requested vty isn't open!\n"));
     return VAR_1;
 }
 if (VAR_12 && FUNC_4(VAR_19)->smode.mode == VAR_10) {
     FUNC_17(VAR_21);
     FUNC_0(5, ("error 3, requested vty is in the VT_PROCESS mode\n"));
     return VAR_1;
 }
    }


    ++VAR_16->switch_in_progress;
    VAR_16->old_scp = VAR_18;
    VAR_16->new_scp = FUNC_12(FUNC_3(VAR_16, VAR_17));
    if (VAR_16->new_scp == VAR_16->old_scp) {
 VAR_16->switch_in_progress = 0;
 if (!VAR_12)
     FUNC_20(FUNC_5(VAR_16,VAR_17));
 FUNC_17(VAR_21);
 FUNC_0(5, ("switch done (new == old)\n"));
 return 0;
    }


    FUNC_19(VAR_16->old_scp);
    FUNC_19(VAR_16->new_scp);


    if (FUNC_15(VAR_16->old_scp)) {
 FUNC_17(VAR_21);
 return 0;
    }


    FUNC_17(VAR_21);
    FUNC_7(VAR_16);
    VAR_21 = FUNC_16();


    if (!VAR_12)
 FUNC_20(FUNC_5(VAR_16,VAR_17));


    if (FUNC_14(VAR_16->cur_scp)) {
 FUNC_17(VAR_21);
 return 0;
    }

    VAR_16->switch_in_progress = 0;
    if (VAR_16->unit == VAR_14)
 FUNC_6(VAR_15, VAR_8);
    FUNC_17(VAR_21);
    FUNC_0(5, ("switch done\n"));

    return 0;
}
