
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibv_context {int dummy; } ;
struct TYPE_2__ {struct ibv_context* verbs; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 struct ibv_context** FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;

struct ibv_context **FUNC_2(int *VAR_2)
{
 struct ibv_context **VAR_3 = ((void*)0);
 int VAR_4;

 if (FUNC_1())
  goto out;

 VAR_3 = FUNC_0(sizeof(*VAR_3) * (VAR_1 + 1));
 if (!VAR_3)
  goto out;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3[VAR_4] = VAR_0[VAR_4].verbs;
 VAR_3[VAR_4] = ((void*)0);
out:
 if (VAR_2)
  *VAR_2 = VAR_3 ? VAR_1 : 0;
 return VAR_3;
}
