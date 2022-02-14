
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*,size_t,int*,int) ;
 char* FUNC_1 (char const*,size_t) ;
 size_t FUNC_2 (char const*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;

char *
FUNC_3(const char *VAR_6)
{
 int VAR_7;
 size_t VAR_8;


 if (VAR_6 == ((void*)0) || (VAR_8 = FUNC_2(VAR_6)) == 0) {
  VAR_4 = VAR_0;
  return (((void*)0));
 }
 if (VAR_3 == ((void*)0) || VAR_3[0] == ((void*)0))
  return (((void*)0));
 else if (VAR_1 == ((void*)0) || VAR_3 != VAR_5)
  return (FUNC_1(VAR_6, VAR_8));
 else {
  VAR_7 = VAR_2 - 1;
  return (FUNC_0(VAR_6, VAR_8, &VAR_7, 1));
 }
}
