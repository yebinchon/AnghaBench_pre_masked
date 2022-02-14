
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strlist {int dummy; } ;


 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (struct strlist*,char const*) ;

int FUNC_2(struct strlist *VAR_0, const char *VAR_1)
{
 char *VAR_2;
 int VAR_3;

 while ((VAR_2 = FUNC_0(VAR_1, ',')) != ((void*)0)) {
  *VAR_2 = '\0';
  VAR_3 = FUNC_1(VAR_0, VAR_1);
  *VAR_2 = ',';
  if (VAR_3 != 0)
   return VAR_3;
  VAR_1 = VAR_2 + 1;
 }

 return *VAR_1 ? FUNC_1(VAR_0, VAR_1) : 0;
}
