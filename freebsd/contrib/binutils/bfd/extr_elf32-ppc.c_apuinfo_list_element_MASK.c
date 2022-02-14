
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long value; struct TYPE_3__* next; } ;
typedef TYPE_1__ apuinfo_list ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline unsigned long
FUNC_0 (unsigned long VAR_1)
{
  apuinfo_list * VAR_2;

  for (VAR_2 = VAR_0;
       VAR_2 && VAR_1 --;
       VAR_2 = VAR_2->next)
    ;

  return VAR_2 ? VAR_2->value : 0;
}
