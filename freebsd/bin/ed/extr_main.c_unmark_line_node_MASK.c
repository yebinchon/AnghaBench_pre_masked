
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line_t ;


 int VAR_0 ;
 int ** VAR_1 ;
 scalar_t__ VAR_2 ;

void
FUNC_0(line_t *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_2 && VAR_4 < VAR_0; VAR_4++)
  if (VAR_1[VAR_4] == VAR_3) {
   VAR_1[VAR_4] = ((void*)0);
   VAR_2--;
  }
}
