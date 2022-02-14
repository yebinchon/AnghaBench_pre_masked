
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process {int p_flags; } ;
struct command {int dummy; } ;
typedef int Char ;


 int VAR_0 ;
 int FUNC_0 (struct command*) ;
 struct process* FUNC_1 (int *) ;

void
FUNC_2(Char **VAR_1, struct command *VAR_2)
{
    struct process *VAR_3;

    FUNC_0(VAR_2);
    VAR_3 = FUNC_1(*++VAR_1);
    VAR_3->p_flags |= VAR_0;
}
