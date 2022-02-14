
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dtha_nactions; int ** dtha_actions; int * dtha_predicate; } ;
typedef TYPE_1__ dtrace_helper_action_t ;
typedef int dtrace_difo_t ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(dtrace_helper_action_t *VAR_0)
{
 int VAR_1 = 0, VAR_2;
 dtrace_difo_t *VAR_3;

 if ((VAR_3 = VAR_0->dtha_predicate) != ((void*)0))
  VAR_1 += FUNC_0(VAR_3);

 for (VAR_2 = 0; VAR_2 < VAR_0->dtha_nactions; VAR_2++)
  VAR_1 += FUNC_0(VAR_0->dtha_actions[VAR_2]);

 return (VAR_1 == 0);
}
