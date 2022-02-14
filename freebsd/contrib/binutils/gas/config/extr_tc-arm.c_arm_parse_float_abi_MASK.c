
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_option_value_table {int value; int * name; } ;


 int FUNC_0 (char*) ;
 struct arm_option_value_table* VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,char*) ;

__attribute__((used)) static int
FUNC_3 (char * VAR_2)
{
  const struct arm_option_value_table * VAR_3;

  for (VAR_3 = VAR_0; VAR_3->name != ((void*)0); VAR_3++)
    if (FUNC_2 (VAR_3->name, VAR_2))
      {
 VAR_1 = VAR_3->value;
 return 1;
      }

  FUNC_1 (FUNC_0("unknown floating point abi `%s'\n"), VAR_2);
  return 0;
}
