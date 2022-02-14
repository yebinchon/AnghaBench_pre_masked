
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,int,char**) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(int VAR_0, int VAR_1, char* VAR_2[])
{
 char *VAR_3;

 for (VAR_0 = 0; (VAR_3 = FUNC_0(VAR_0)) != ((void*)0); VAR_0++)
  if (FUNC_1(VAR_3, VAR_1 - 1, VAR_2 + 1) != 0)
   FUNC_2("can't load '%s'\n", VAR_3);
  else
   return 1;
 return 0;
}
