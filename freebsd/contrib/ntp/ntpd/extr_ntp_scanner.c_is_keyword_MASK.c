
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ follby ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 char FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * VAR_2 ;

__attribute__((used)) static int
FUNC_4(
 char *VAR_3,
 follby *VAR_4
 )
{
 follby VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_6 = VAR_1;
 VAR_7 = 0;

 for (VAR_8 = 0; VAR_3[VAR_8]; VAR_8++) {
  while (VAR_6 && (VAR_3[VAR_8] != FUNC_0(VAR_2[VAR_6])))
   VAR_6 = FUNC_3(VAR_2[VAR_6]);

  if (VAR_6 && (VAR_3[VAR_8] == FUNC_0(VAR_2[VAR_6]))) {
   if ('\0' == VAR_3[VAR_8 + 1]
       && VAR_0
          != FUNC_1(VAR_2[VAR_6])) {
    VAR_5 = FUNC_1(VAR_2[VAR_6]);
    *VAR_4 = VAR_5;
    VAR_7 = VAR_6;
    break;
   }
   VAR_6 = FUNC_2(VAR_2[VAR_6]);
  } else
   break;
 }

 return VAR_7;
}
