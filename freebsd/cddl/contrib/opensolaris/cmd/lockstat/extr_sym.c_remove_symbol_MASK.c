
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {uintptr_t addr; } ;
typedef TYPE_1__ syment_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_0(uintptr_t VAR_2)
{
 int VAR_3;
 syment_t *VAR_4 = VAR_1;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++, VAR_4++)
  if (VAR_4->addr == VAR_2)
   VAR_4->addr = 0;
}
