
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strlist {int dummy; } ;
typedef int entry ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char const*,char*) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (struct strlist*,char*) ;

int FUNC_5(struct strlist *VAR_1, const char *VAR_2)
{
 char VAR_3[1024];
 int VAR_4;
 FILE *VAR_5 = FUNC_2(VAR_2, "r");

 if (VAR_5 == ((void*)0))
  return VAR_0;

 while (FUNC_1(VAR_3, sizeof(VAR_3), VAR_5) != ((void*)0)) {
  const size_t VAR_6 = FUNC_3(VAR_3);

  if (VAR_6 == 0)
   continue;
  VAR_3[VAR_6 - 1] = '\0';

  VAR_4 = FUNC_4(VAR_1, VAR_3);
  if (VAR_4 != 0)
   goto out;
 }

 VAR_4 = 0;
out:
 FUNC_0(VAR_5);
 return VAR_4;
}
