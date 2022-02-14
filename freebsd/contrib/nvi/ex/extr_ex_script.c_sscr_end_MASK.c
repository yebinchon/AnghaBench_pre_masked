
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* script; } ;
struct TYPE_8__ {int sh_master; int sh_slave; struct TYPE_8__* sh_prompt; scalar_t__ sh_pid; } ;
typedef TYPE_1__ SCRIPT ;
typedef TYPE_2__ SCR ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_2__*,long,char*,int ,int ) ;
 int FUNC_4 (TYPE_2__*) ;

int
FUNC_5(SCR *VAR_1)
{
 SCRIPT *VAR_2;

 if ((VAR_2 = VAR_1->script) == ((void*)0))
  return (0);


 FUNC_0(VAR_1, VAR_0);
 FUNC_4(VAR_1);


 if (VAR_2->sh_master != -1)
     (void)FUNC_1(VAR_2->sh_master);
 if (VAR_2->sh_slave != -1)
     (void)FUNC_1(VAR_2->sh_slave);


 (void)FUNC_3(VAR_1, (long)VAR_2->sh_pid, "script-shell", 0, 0);


 FUNC_2(VAR_2->sh_prompt);
 FUNC_2(VAR_2);
 VAR_1->script = ((void*)0);

 return (0);
}
