
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sigaction {int sa_flags; int sa_mask; int sa_handler; } ;
struct command {int t_dflg; scalar_t__ t_systype; int t_nice; } ;
typedef int sigset_t ;
typedef int pid_t ;
struct TYPE_2__ {int p_jobid; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_14 ;
 int FUNC_0 (int ) ;
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
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_1 (scalar_t__*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__*) ;
 int VAR_29 ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ VAR_30 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ VAR_31 ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int,struct command*) ;
 struct sigaction VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 TYPE_1__* VAR_35 ;
 int FUNC_13 () ;
 int FUNC_14 (int,int) ;
 scalar_t__ VAR_36 ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int *,int *) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,...) ;
 int FUNC_26 (scalar_t__) ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 int VAR_39 ;
 int FUNC_27 (int ,int ) ;

pid_t
FUNC_28(struct command *VAR_40, int VAR_41)
{
    pid_t VAR_42;
    int VAR_43 = 0;
    pid_t VAR_44;
    if (VAR_36)
 VAR_43 = (VAR_39 == -1 && (VAR_40->t_dflg & VAR_7))
     || (VAR_31 && FUNC_5(VAR_31, VAR_26));




    if (VAR_28 == 16)
 FUNC_25(VAR_1, 16);
    if (VAR_41 < 0) {
 VAR_34++;
 FUNC_1(&VAR_34, VAR_29);
    }
    while ((VAR_42 = FUNC_6()) == -1)
 if (VAR_36 == 0)
     (void) FUNC_24(VAR_4);
 else
     FUNC_25(VAR_2);
    if (VAR_42 == 0) {
 (void)FUNC_2();
 VAR_34 = 0;
 FUNC_17();
 VAR_44 = VAR_35 ? VAR_35->p_jobid : FUNC_7();
 FUNC_13();
 VAR_35 = ((void*)0);

 VAR_38 = 0;

 VAR_28++;
 if (VAR_36) {
     VAR_36 = 0;




     (void) FUNC_21(VAR_13, VAR_43 ? VAR_23 : VAR_22);
     (void) FUNC_21(VAR_15, VAR_43 ? VAR_23 : VAR_22);
     FUNC_18(VAR_17, &VAR_32, ((void*)0));
 }
 else if (VAR_39 == -1 && (VAR_40->t_dflg & VAR_7)) {
     (void) FUNC_21(VAR_13, VAR_23);
     (void) FUNC_21(VAR_15, VAR_23);
 }




 FUNC_14(VAR_41, VAR_44);





 if (VAR_40->t_dflg & VAR_6)
     (void) FUNC_21(VAR_12, VAR_23);
 if (VAR_40->t_dflg & VAR_5) {
     int VAR_45 = FUNC_0(VAR_40->t_nice);




     (void) FUNC_11(VAR_45);

 }
    }
    else {
 FUNC_12(VAR_42, VAR_40);
 if (VAR_41 < 0)
     FUNC_3(&VAR_34);
    }
    return (VAR_42);
}
