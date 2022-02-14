
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct process {int p_command; scalar_t__ p_procid; } ;
struct command {int dummy; } ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct command*) ;
 int VAR_2 ;
 int FUNC_1 () ;
 struct process* FUNC_2 (int *) ;
 int FUNC_3 (struct process*) ;
 int FUNC_4 (struct process*,int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int ) ;

void
FUNC_7(Char **VAR_3, struct command *VAR_4)
{
    struct process *VAR_5;

    FUNC_0(VAR_4);
    FUNC_1();
    VAR_5 = FUNC_2(VAR_3[0]);
    if (!FUNC_4(VAR_5, 1)) {
 VAR_5->p_procid = 0;
 FUNC_5(VAR_1|VAR_0, VAR_5->p_command, FUNC_6(VAR_2));
 return;
    }
    FUNC_3(VAR_5);
}
