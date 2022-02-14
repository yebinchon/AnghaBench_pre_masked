
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 int * VAR_2 ;
 char* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,char const*) ;
 int * FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char*) ;

int
FUNC_6(const char *VAR_3)
{
 char *VAR_4;

 if (!VAR_3)
  VAR_3 = "";
 if (VAR_2 != ((void*)0) && FUNC_3(VAR_2, VAR_3) == 0)
  return 0;
 if (VAR_2)
  FUNC_0(VAR_2);
 VAR_2 = FUNC_4(VAR_3);
 if (VAR_2 == ((void*)0))
  return -1;

 while ((VAR_4 = FUNC_2(VAR_2, VAR_0)) != ((void*)0)) {

  if (VAR_4[1] == VAR_1) {
   FUNC_1(VAR_4, VAR_4 + 2, 1 + FUNC_5(VAR_4 + 2));
  } else {
   *VAR_4 = VAR_1;
  }
 }

 return 0;
}
