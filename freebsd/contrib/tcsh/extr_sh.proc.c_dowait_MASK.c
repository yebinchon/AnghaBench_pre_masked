
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct process {int p_flags; scalar_t__ p_procid; struct process* p_next; } ;
typedef int * command ;
typedef int sigset_t ;
struct TYPE_2__ {struct process* p_next; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int **) ;
 int FUNC_1 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *) ;

void
FUNC_6(Char **VAR_9, struct command *VAR_10)
{
    struct process *VAR_11;


    sigset_t VAR_12;


    sigset_t VAR_13;



    sigset_t VAR_14;

    int VAR_15, VAR_16;

    FUNC_0(VAR_10);
    FUNC_0(VAR_9);
    VAR_6++;

    FUNC_4(VAR_3, ((void*)0), &VAR_14);
    FUNC_3(&VAR_14, VAR_1);
    if (VAR_8)
 FUNC_3(&VAR_14, VAR_2);


    FUNC_4(VAR_3, ((void*)0), &VAR_13);
    FUNC_2(&VAR_13, VAR_1);
    FUNC_4(VAR_3, &VAR_13, &VAR_12);


    (void)FUNC_1();

loop:
    for (VAR_11 = VAR_7.p_next; VAR_11; VAR_11 = VAR_11->p_next)
 if (VAR_11->p_procid &&
     VAR_11->p_flags & VAR_0) {

     FUNC_5(&VAR_14);


     VAR_15 = VAR_5;
     VAR_5 = 0;
     VAR_16 = FUNC_1();
     VAR_5 = VAR_15;
     if (VAR_16)
  break;
     goto loop;
 }
    VAR_6 = 0;

    FUNC_4(VAR_4, &VAR_12, ((void*)0));
}
