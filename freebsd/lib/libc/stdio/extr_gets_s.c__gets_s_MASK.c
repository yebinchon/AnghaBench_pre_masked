
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rsize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int VAR_2 ;

__attribute__((used)) static inline char *
FUNC_3(char *VAR_3, rsize_t VAR_4)
{
 int VAR_5;
 char *VAR_6;

 FUNC_0(VAR_2, -1);
 for (VAR_6 = VAR_3, VAR_4--; (VAR_5 = FUNC_1(VAR_2)) != '\n' && VAR_4 > 0 ; VAR_4--) {
  if (VAR_5 == VAR_1) {
   if (VAR_6 == VAR_3) {
    return (((void*)0));
   } else
    break;
  } else
   *VAR_6++ = VAR_5;
 }





 if (VAR_4 == 0) {

  while ((VAR_5 = FUNC_1(VAR_2)) != '\n' && VAR_5 != VAR_1);

  FUNC_2("gets_s : end of buffer", VAR_0);
  return (((void*)0));
 }
 *VAR_6 = 0;
 return (VAR_3);
}
