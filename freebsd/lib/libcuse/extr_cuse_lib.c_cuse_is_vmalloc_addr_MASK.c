
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ptr; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;

int
FUNC_2(void *VAR_3)
{
 int VAR_4;

 if (VAR_2 < 0 || VAR_3 == ((void*)0))
  return (0);

 FUNC_0();
 for (VAR_4 = 0; VAR_4 != VAR_0; VAR_4++) {
  if (VAR_1[VAR_4].ptr == VAR_3)
   break;
 }
 FUNC_1();

 return (VAR_4 != VAR_0);
}
