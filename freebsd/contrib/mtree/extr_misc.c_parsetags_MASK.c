
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int slist_t ;


 int FUNC_0 (int *,char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,char*,char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char**,char*) ;

void
FUNC_6(slist_t *VAR_0, char *VAR_1)
{
 char *VAR_2, *VAR_3;
 int VAR_4;

 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0, ((void*)0));
  return;
 }
 while ((VAR_2 = FUNC_5(&VAR_1, ",")) != ((void*)0)) {
  if (*VAR_2 == '\0')
   continue;
  VAR_4 = FUNC_4(VAR_2) + 3;
  if ((VAR_3 = FUNC_1(VAR_4)) == ((void*)0))
   FUNC_2("memory allocation error");
  FUNC_3(VAR_3, VAR_4, ",%s,", VAR_2);
  FUNC_0(VAR_0, VAR_3);
 }
}
