
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_arch_option_table {int * name; int default_fpu; int value; } ;


 int FUNC_0 (char*) ;
 struct arm_arch_option_table* VAR_0 ;
 int FUNC_1 (char*,int **) ;
 int FUNC_2 (int ,char*) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_7 (char * VAR_4)
{
  const struct arm_arch_option_table *VAR_5;
  char *VAR_6 = FUNC_3 (VAR_4, '+');
  int VAR_7;

  if (VAR_6 != ((void*)0))
    VAR_7 = VAR_6 - VAR_4;
  else
    VAR_7 = FUNC_5 (VAR_4);

  if (VAR_7 == 0)
    {
      FUNC_2 (FUNC_0("missing architecture name `%s'"), VAR_4);
      return 0;
    }

  for (VAR_5 = VAR_0; VAR_5->name != ((void*)0); VAR_5++)
    if (FUNC_6 (VAR_5->name, VAR_4, VAR_7) == 0)
      {
 VAR_1 = &VAR_5->value;
 VAR_2 = &VAR_5->default_fpu;
 FUNC_4(VAR_3, VAR_5->name);

 if (VAR_6 != ((void*)0))
   return FUNC_1 (VAR_6, &VAR_1);

 return 1;
      }

  FUNC_2 (FUNC_0("unknown architecture `%s'\n"), VAR_4);
  return 0;
}
