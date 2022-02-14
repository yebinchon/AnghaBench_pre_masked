
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(
 char *VAR_2
 )
{
 int VAR_3;
 int VAR_4;

 VAR_3 = 0;
 if ('0' == VAR_2[VAR_3] && 'x' == FUNC_2((u_char)VAR_2[VAR_3 + 1])) {
  VAR_3 += 2;
  VAR_4 = VAR_1;
 } else {
  VAR_4 = VAR_0;
 }


 for (; VAR_2[VAR_3] != '\0'; VAR_3++) {
  if (VAR_4 && !FUNC_1((u_char)VAR_2[VAR_3]))
   return VAR_0;
  if (!VAR_4 && !FUNC_0((u_char)VAR_2[VAR_3]))
   return VAR_0;
 }

 return VAR_1;
}
