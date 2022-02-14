
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char) ;
 char* FUNC_4 (char*) ;

void
FUNC_5(void)
{
 char *VAR_0, *VAR_1, *VAR_2, *VAR_3;

 if ((VAR_2 = FUNC_1("prompt")) == ((void*)0))
  VAR_2 = ">";
 VAR_0 = VAR_1 = FUNC_4(VAR_2);

 while (*VAR_1 != 0) {
  if ((*VAR_1 == '$') && (*(VAR_1+1) == '{')) {
   for (VAR_2 = VAR_1 + 2; (*VAR_2 != 0) && (*VAR_2 != '}'); VAR_2++)
    ;
   *VAR_2 = 0;
   VAR_3 = FUNC_1(VAR_1 + 2);

   if (VAR_3 != ((void*)0))
    FUNC_2("%s", VAR_3);
   VAR_1 = VAR_2 + 1;
   continue;
  }
  FUNC_3(*VAR_1++);
 }
 FUNC_3(' ');
 FUNC_0(VAR_0);
}
