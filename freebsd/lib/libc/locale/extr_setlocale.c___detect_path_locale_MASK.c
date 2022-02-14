
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 scalar_t__ VAR_7 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 () ;
 int * FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;

int
FUNC_4(void)
{
 if (VAR_6 == ((void*)0)) {
  char *VAR_8 = FUNC_0("PATH_LOCALE");

  if (VAR_8 != ((void*)0) && !FUNC_1()) {
   if (FUNC_3(VAR_8) + 1 + VAR_2 +
       1 + VAR_0 >= VAR_4)
    return (VAR_1);
   VAR_6 = FUNC_2(VAR_8);
   if (VAR_6 == ((void*)0))
    return (VAR_7 == 0 ? VAR_3 : VAR_7);
  } else
   VAR_6 = VAR_5;
 }
 return (0);
}
