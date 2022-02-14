
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 () ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char const*,char const*,char const*) ;
 int FUNC_4 (char const*) ;

int
FUNC_5(int VAR_4, char *VAR_5[])
{
 const char *VAR_6, *VAR_7, *VAR_8;


 if ((VAR_6 = FUNC_1(VAR_3)) == ((void*)0))
  return (VAR_2);

 if ((VAR_4 == 2 || VAR_4 == 3) && FUNC_2(VAR_5[1], "login") == 0) {

  VAR_7 = FUNC_0();
  if (VAR_7 == ((void*)0))
   return (VAR_1);


  VAR_8 = VAR_4 == 3 ? VAR_5[2] : ((void*)0);

  FUNC_3(VAR_6, VAR_7, VAR_8);
  return (VAR_0);
 } else if (VAR_4 == 2 && FUNC_2(VAR_5[1], "logout") == 0) {
  FUNC_4(VAR_6);
  return (VAR_0);
 }

 return (VAR_2);
}
