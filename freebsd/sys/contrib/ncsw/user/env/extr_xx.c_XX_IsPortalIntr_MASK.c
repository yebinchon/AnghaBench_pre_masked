
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {uintptr_t** portal_intr; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static bool
FUNC_0(uintptr_t VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++)
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   if (VAR_2 == VAR_1.portal_intr[VAR_4][VAR_3])
    return (1);

 return (0);
}
