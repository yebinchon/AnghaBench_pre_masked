
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_option_cpu_value_table {int * name; int value; } ;
typedef int arm_feature_set ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;
 struct arm_option_cpu_value_table* VAR_0 ;
 int FUNC_2 (int ,...) ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,char*,int) ;
 int * FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7 (char * VAR_1, const arm_feature_set **VAR_2)
{
  arm_feature_set *VAR_3 = FUNC_6 (sizeof (arm_feature_set));


  *VAR_3 = **VAR_2;
  *VAR_2 = VAR_3;

  while (VAR_1 != ((void*)0) && *VAR_1 != 0)
    {
      const struct arm_option_cpu_value_table * VAR_4;
      char * VAR_5;
      int VAR_6;

      if (*VAR_1 != '+')
 {
   FUNC_2 (FUNC_1("invalid architectural extension"));
   return 0;
 }

      VAR_1++;
      VAR_5 = FUNC_3 (VAR_1, '+');

      if (VAR_5 != ((void*)0))
 VAR_6 = VAR_5 - VAR_1;
      else
 VAR_6 = FUNC_4 (VAR_1);

      if (VAR_6 == 0)
 {
   FUNC_2 (FUNC_1("missing architectural extension"));
   return 0;
 }

      for (VAR_4 = VAR_0; VAR_4->name != ((void*)0); VAR_4++)
 if (FUNC_5 (VAR_4->name, VAR_1, VAR_6) == 0)
   {
     FUNC_0 (*VAR_3, *VAR_3, VAR_4->value);
     break;
   }

      if (VAR_4->name == ((void*)0))
 {
   FUNC_2 (FUNC_1("unknown architectural extnsion `%s'"), VAR_1);
   return 0;
 }

      VAR_1 = VAR_5;
    };

  return 1;
}
