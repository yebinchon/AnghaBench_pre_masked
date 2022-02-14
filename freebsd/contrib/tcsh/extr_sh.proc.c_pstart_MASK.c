
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process {int p_flags; int p_jobid; int p_command; struct process* p_friends; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_10 ;
 int FUNC_4 (struct process*) ;
 int FUNC_5 (struct process*,int) ;
 int FUNC_6 (int ,int ) ;

int
FUNC_7(struct process *VAR_11, int VAR_12)
{
    int VAR_13 = 0;
    struct process *VAR_14;



    VAR_10++;
    FUNC_0(&VAR_10, VAR_9);
    VAR_14 = VAR_11;
    do {


 if (VAR_14->p_flags & (VAR_6 | VAR_7)) {
     VAR_14->p_flags |= VAR_6;
     VAR_14->p_flags &= ~VAR_7;
     if (VAR_12)
  VAR_14->p_flags |= VAR_5;
     else
  VAR_14->p_flags &= ~VAR_5;
 }
    } while ((VAR_14 = VAR_14->p_friends) != VAR_11);
    if (!VAR_12)
 FUNC_4(VAR_11);
    (void) FUNC_5(VAR_11, VAR_12 ? VAR_3 | VAR_2 : VAR_4 | VAR_3 | VAR_0);


    if (VAR_12) {
 FUNC_2(VAR_11->p_command);
    }
    FUNC_1(&VAR_10);
    return VAR_13 != -1;
}
