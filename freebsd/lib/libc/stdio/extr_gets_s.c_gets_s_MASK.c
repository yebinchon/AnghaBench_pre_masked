
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rsize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,int ) ;
 char* FUNC_3 (char*,scalar_t__) ;
 int VAR_2 ;

char *
FUNC_4(char *VAR_3, rsize_t VAR_4)
{
 char *VAR_5;
 if (VAR_3 == ((void*)0)) {
  FUNC_2("gets_s : str is NULL", VAR_0);
  return(((void*)0));
 } else if (VAR_4 > VAR_1) {
  FUNC_2("gets_s : n > RSIZE_MAX",
   VAR_0);
  return(((void*)0));
 } else if (VAR_4 == 0) {
  FUNC_2("gets_s : n == 0", VAR_0);
  return(((void*)0));
 }

 FUNC_0(VAR_2);
 VAR_5 = FUNC_3(VAR_3, VAR_4);
 FUNC_1();
 return (VAR_5);
}
