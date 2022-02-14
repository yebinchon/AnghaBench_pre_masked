
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SCR ;
typedef int EXCMD ;
typedef int CHAR_T ;


 int FUNC_0 (int *,char*,int,int *,size_t) ;
 int FUNC_1 (int *,char*,size_t) ;
 int FUNC_2 (int *,char*,size_t,size_t) ;
 int FUNC_3 (int *,int *,int *) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,size_t) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char**,char*) ;

__attribute__((used)) static int
FUNC_8(SCR *VAR_0, EXCMD *VAR_1)
{
 size_t VAR_2, VAR_3;
 char *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 CHAR_T *VAR_8;
 size_t VAR_9;
 if ((VAR_5 = FUNC_4("CSCOPE_DIRS")) == ((void*)0))
  return (0);
 VAR_3 = FUNC_6(VAR_5);
 FUNC_2(VAR_0, VAR_4, VAR_2, VAR_3);
 FUNC_5(VAR_4, VAR_5, VAR_3 + 1);

 for (VAR_5 = VAR_7 = VAR_4; (VAR_6 = FUNC_7(&VAR_7, "\t :")) != ((void*)0);)
  if (*VAR_6 != '\0') {
   FUNC_0(VAR_0, VAR_6, FUNC_6(VAR_6) + 1, VAR_8, VAR_9);
   (void)FUNC_3(VAR_0, VAR_1, VAR_8);
  }

 FUNC_1(VAR_0, VAR_4, VAR_2);
 return (0);
}
