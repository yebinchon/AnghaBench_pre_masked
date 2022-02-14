
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ cpp_dir ;


 TYPE_1__** VAR_0 ;
 TYPE_1__** VAR_1 ;

void
FUNC_0 (cpp_dir *VAR_2, int VAR_3)
{
  if (VAR_1[VAR_3])
    VAR_1[VAR_3]->next = VAR_2;
  else
    VAR_0[VAR_3] = VAR_2;
  VAR_1[VAR_3] = VAR_2;
}
