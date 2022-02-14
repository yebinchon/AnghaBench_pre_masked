
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct df_ref {struct df_ref* next_ref; } ;
struct df {int dummy; } ;
typedef int rtx ;
struct TYPE_2__ {struct df_ref* defs; } ;


 TYPE_1__* FUNC_0 (struct df*,unsigned int) ;
 int FUNC_1 (struct df_ref*) ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;

struct df_ref *
FUNC_8 (struct df *VAR_1, rtx VAR_2, rtx VAR_3)
{
  unsigned int VAR_4;
  struct df_ref *VAR_5;

  if (FUNC_2 (VAR_3) == VAR_0)
    VAR_3 = FUNC_5 (VAR_3);
  FUNC_6 (FUNC_4 (VAR_3));

  VAR_4 = FUNC_3 (VAR_2);
  for (VAR_5 = FUNC_0 (VAR_1, VAR_4)->defs; VAR_5; VAR_5 = VAR_5->next_ref)
    if (FUNC_7 (FUNC_1 (VAR_5), VAR_3))
      return VAR_5;

  return ((void*)0);
}
