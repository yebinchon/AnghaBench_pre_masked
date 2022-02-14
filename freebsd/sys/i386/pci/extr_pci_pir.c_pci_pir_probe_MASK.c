
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pt_entry; } ;
struct TYPE_3__ {int pe_bus; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

int
FUNC_0(int VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_1 == ((void*)0) || (VAR_4 && !VAR_2))
  return (0);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_1->pt_entry[VAR_5].pe_bus == VAR_3)
   return (1);
 return (0);
}
