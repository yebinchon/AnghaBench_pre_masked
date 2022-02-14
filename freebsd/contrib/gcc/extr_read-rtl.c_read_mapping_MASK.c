
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapping {struct map_value* values; } ;
struct map_value {int dummy; } ;
struct macro_group {int (* find_builtin ) (char*,int *) ;} ;
typedef int htab_t ;
typedef int FILE ;


 struct map_value** FUNC_0 (struct map_value**,int,char const*) ;
 struct mapping* FUNC_1 (struct macro_group*,int ,char*,int *) ;
 int FUNC_2 (int *,char,int) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (char*,int *) ;
 int FUNC_7 (int,int *) ;

__attribute__((used)) static struct mapping *
FUNC_8 (struct macro_group *VAR_0, htab_t VAR_1, FILE *VAR_2)
{
  char VAR_3[256];
  struct mapping *VAR_4;
  struct map_value **VAR_5;
  const char *VAR_6;
  int VAR_7, VAR_8;


  FUNC_3 (VAR_3, VAR_2);
  VAR_4 = FUNC_1 (VAR_0, VAR_1, VAR_3, VAR_2);

  VAR_8 = FUNC_4 (VAR_2);
  if (VAR_8 != '[')
    FUNC_2 (VAR_2, '[', VAR_8);


  VAR_5 = &VAR_4->values;
  VAR_8 = FUNC_4 (VAR_2);
  do
    {
      if (VAR_8 != '(')
 {


   FUNC_7 (VAR_8, VAR_2);
   FUNC_3 (VAR_3, VAR_2);
   VAR_6 = "";
 }
      else
 {

   FUNC_3 (VAR_3, VAR_2);
   VAR_6 = FUNC_5 (VAR_2, 0);
   VAR_8 = FUNC_4 (VAR_2);
   if (VAR_8 != ')')
     FUNC_2 (VAR_2, ')', VAR_8);
 }
      VAR_7 = VAR_0->find_builtin (VAR_3, VAR_2);
      VAR_5 = FUNC_0 (VAR_5, VAR_7, VAR_6);
      VAR_8 = FUNC_4 (VAR_2);
    }
  while (VAR_8 != ']');

  VAR_8 = FUNC_4 (VAR_2);
  if (VAR_8 != ')')
    FUNC_2 (VAR_2, ')', VAR_8);

  return VAR_4;
}
