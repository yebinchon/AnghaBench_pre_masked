
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constant_pool {int insns; struct constant_pool* next; } ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static struct constant_pool *
FUNC_2 (struct constant_pool *VAR_0, rtx VAR_1)
{
  struct constant_pool *VAR_2;

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    if (FUNC_1 (VAR_2->insns, FUNC_0 (VAR_1)))
      break;

  return VAR_2;
}
