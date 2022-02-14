
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_2 (scalar_t__) ;

char *
FUNC_3(int VAR_4, BOOL *VAR_5) {
 char *VAR_6 = ((void*)0);


 DWORD VAR_7 = VAR_4;

 *VAR_5 = VAR_0;


 if (VAR_7 >= VAR_2 && VAR_7 <= (VAR_2 + 1015)) {
  VAR_6 = FUNC_1(VAR_7);
  if (VAR_6 != ((void*)0))
   return (VAR_6);
 }




 if (VAR_7 > (DWORD) VAR_3) {
  *VAR_5 = VAR_1;
  return (FUNC_0(VAR_7));
 } else {
  return (FUNC_2(VAR_7));
 }
}
