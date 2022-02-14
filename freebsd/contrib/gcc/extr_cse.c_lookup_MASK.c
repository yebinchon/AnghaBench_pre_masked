
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct table_elt {int mode; scalar_t__ exp; struct table_elt* next_same_hash; } ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,int,int) ;
 struct table_elt** VAR_0 ;

__attribute__((used)) static struct table_elt *
FUNC_2 (rtx VAR_1, unsigned int VAR_2, enum machine_mode VAR_3)
{
  struct table_elt *VAR_4;

  for (VAR_4 = VAR_0[VAR_2]; VAR_4; VAR_4 = VAR_4->next_same_hash)
    if (VAR_3 == VAR_4->mode && ((VAR_1 == VAR_4->exp && FUNC_0 (VAR_1))
       || FUNC_1 (VAR_1, VAR_4->exp, !FUNC_0 (VAR_1), 0)))
      return VAR_4;

  return 0;
}
