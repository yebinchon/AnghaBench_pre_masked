
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
typedef int u_char ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(
 char *VAR_3
 )
{
 int VAR_4;
 int VAR_5;
 u_int VAR_6;

 VAR_4 = 0;


 if (VAR_3[VAR_4] == '-') {
  VAR_4++;
  VAR_5 = VAR_2;
 } else {
  VAR_5 = VAR_0;
 }


 for (; VAR_3[VAR_4] != '\0'; VAR_4++) {
  if (!FUNC_0((u_char)VAR_3[VAR_4]))
   return VAR_0;
 }

 if (VAR_5)
  return VAR_2;


 if (1 == FUNC_1(VAR_3, "%u", &VAR_6))
  return (VAR_6 <= VAR_1);
 else
  return VAR_0;
}
