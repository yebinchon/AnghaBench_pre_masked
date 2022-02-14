
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__*,scalar_t__*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__* VAR_6 ;

void FUNC_1 (void)
{
 for (VAR_0 = 0; VAR_0 < VAR_1; VAR_0++) {
  if (VAR_3[VAR_0] == VAR_6[0]) {
   if (FUNC_0 (&VAR_3[VAR_0], VAR_6, VAR_5) == 0) {
    if (VAR_4 == 0)
     VAR_2 = VAR_0;
    VAR_4++;
   }
  }
 }
}
