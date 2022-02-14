
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum x86_64_reg_class { ____Placeholder_x86_64_reg_class } x86_64_reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int*,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2 (enum machine_mode VAR_1, tree VAR_2, int VAR_3,
    int *VAR_4, int *VAR_5)
{
  enum x86_64_reg_class VAR_6[VAR_0];
  int VAR_7 = FUNC_0 (VAR_1, VAR_2, VAR_6, 0);

  *VAR_4 = 0;
  *VAR_5 = 0;
  if (!VAR_7)
    return 0;
  for (VAR_7--; VAR_7 >= 0; VAR_7--)
    switch (VAR_6[VAR_7])
      {
      case 136:
      case 137:
 (*VAR_4)++;
 break;
      case 130:
      case 132:
      case 133:
 (*VAR_5)++;
 break;
      case 134:
      case 131:
 break;
      case 128:
      case 129:
 if (!VAR_3)
   return 0;
 break;
      case 138:
 return VAR_3 ? 2 : 0;
      case 135:
 FUNC_1 ();
      }
  return 1;
}
