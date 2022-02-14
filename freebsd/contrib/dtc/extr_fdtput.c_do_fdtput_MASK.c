
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct display_info {int oper; int auto_path; } ;






 int FUNC_0 (int) ;
 int FUNC_1 (char**,char*) ;
 int FUNC_2 (char**,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (struct display_info*,char**,int,char**,int*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char**,char*,char*,char*,int) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (char const*,char*) ;

__attribute__((used)) static int FUNC_11(struct display_info *VAR_0, const char *VAR_1,
      char **VAR_2, int VAR_3)
{
 char *VAR_4 = ((void*)0);
 char *VAR_5;
 char *VAR_6;
 int VAR_7, VAR_8 = 0;

 VAR_5 = FUNC_9(VAR_1);
 if (!VAR_5)
  return -1;

 switch (VAR_0->oper) {
 case 128:




  FUNC_0(VAR_3 >= 2);
  if (VAR_0->auto_path && FUNC_2(&VAR_5, *VAR_2))
   return -1;
  if (FUNC_5(VAR_0, VAR_2 + 2, VAR_3 - 2, &VAR_4, &VAR_7) ||
   FUNC_8(&VAR_5, *VAR_2, VAR_2[1], VAR_4, VAR_7))
   VAR_8 = -1;
  break;
 case 131:
  for (; VAR_8 >= 0 && VAR_3--; VAR_2++) {
   if (VAR_0->auto_path)
    VAR_8 = FUNC_2(&VAR_5, *VAR_2);
   else
    VAR_8 = FUNC_1(&VAR_5, *VAR_2);
  }
  break;
 case 129:
  for (; VAR_8 >= 0 && VAR_3--; VAR_2++)
   VAR_8 = FUNC_3(VAR_5, *VAR_2);
  break;
 case 130:
  VAR_6 = *VAR_2;
  for (VAR_2++; VAR_8 >= 0 && VAR_3-- > 1; VAR_2++)
   VAR_8 = FUNC_4(VAR_5, VAR_6, *VAR_2);
  break;
 }
 if (VAR_8 >= 0) {
  FUNC_6(VAR_5);
  VAR_8 = FUNC_10(VAR_1, VAR_5);
 }

 FUNC_7(VAR_5);

 if (VAR_4) {
  FUNC_7(VAR_4);
 }

 return VAR_8;
}
