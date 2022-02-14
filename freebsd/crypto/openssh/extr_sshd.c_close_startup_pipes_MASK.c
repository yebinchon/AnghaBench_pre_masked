
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_startups; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_2;

 if (VAR_1)
  for (VAR_2 = 0; VAR_2 < VAR_0.max_startups; VAR_2++)
   if (VAR_1[VAR_2] != -1)
    FUNC_0(VAR_1[VAR_2]);
}
