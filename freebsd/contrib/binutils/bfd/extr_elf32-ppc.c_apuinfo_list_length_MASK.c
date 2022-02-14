
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ apuinfo_list ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned
FUNC_0 (void)
{
  apuinfo_list *VAR_1;
  unsigned long VAR_2;

  for (VAR_1 = VAR_0, VAR_2 = 0;
       VAR_1;
       VAR_1 = VAR_1->next)
    ++ VAR_2;

  return VAR_2;
}
