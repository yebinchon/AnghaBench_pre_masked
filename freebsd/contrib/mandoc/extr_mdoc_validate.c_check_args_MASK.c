
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {TYPE_1__* args; } ;
struct roff_man {int dummy; } ;
struct TYPE_2__ {int * argv; scalar_t__ argc; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct roff_man*,struct roff_node*,int *) ;

__attribute__((used)) static void
FUNC_2(struct roff_man *VAR_0, struct roff_node *VAR_1)
{
 int VAR_2;

 if (((void*)0) == VAR_1->args)
  return;

 FUNC_0(VAR_1->args->argc);
 for (VAR_2 = 0; VAR_2 < (int)VAR_1->args->argc; VAR_2++)
  FUNC_1(VAR_0, VAR_1, &VAR_1->args->argv[VAR_2]);
}
