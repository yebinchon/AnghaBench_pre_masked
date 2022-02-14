
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t*,char const**,char**,char**) ;
 int FUNC_1 (char*,char*,size_t,size_t) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (char*) ;

size_t
FUNC_4(
 const char * VAR_0,
 size_t VAR_1,
 const char * VAR_2,
 char * VAR_3,
 size_t VAR_4)
{
 char * VAR_5;
 char * VAR_6;
 size_t VAR_7;

 VAR_6 = ((void*)0);
 VAR_7 = (int)VAR_1;

 while (FUNC_0(&VAR_7, &VAR_0, &VAR_5, &VAR_6)) {
  if (FUNC_2(VAR_2, VAR_5) == 0) {
   FUNC_1(VAR_3, VAR_6, FUNC_3(VAR_6), VAR_4);

   return FUNC_3(VAR_3);
  }
 }

 return 0;
}
