
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* free_buffs; } ;
typedef TYPE_1__ cpp_reader ;
struct TYPE_7__ {size_t limit; size_t base; size_t cur; struct TYPE_7__* next; } ;
typedef TYPE_2__ _cpp_buff ;


 size_t FUNC_0 (size_t) ;
 TYPE_2__* FUNC_1 (size_t) ;

_cpp_buff *
FUNC_2 (cpp_reader *VAR_0, size_t VAR_1)
{
  _cpp_buff *VAR_2, **VAR_3;

  for (VAR_3 = &VAR_0->free_buffs;; VAR_3 = &(*VAR_3)->next)
    {
      size_t VAR_4;

      if (*VAR_3 == ((void*)0))
 return FUNC_1 (VAR_1);
      VAR_2 = *VAR_3;
      VAR_4 = VAR_2->limit - VAR_2->base;


      if (VAR_4 >= VAR_1 && VAR_4 <= FUNC_0 (VAR_1))
 break;
    }

  *VAR_3 = VAR_2->next;
  VAR_2->next = ((void*)0);
  VAR_2->cur = VAR_2->base;
  return VAR_2;
}
