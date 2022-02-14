
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_entry {int number; int type; } ;
typedef enum arm_reg_type { ____Placeholder_arm_reg_type } arm_reg_type ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;




 unsigned long FUNC_0 (char*,char**,int) ;

__attribute__((used)) static int
FUNC_1 (char **VAR_3, char *VAR_4, struct reg_entry *VAR_5,
                    enum arm_reg_type VAR_6)
{

  switch (VAR_6)
    {
    case 129:
    case 131:
    case 128:
    case 130:

      if (VAR_5 && VAR_5->type == VAR_1)
 return VAR_5->number;
      break;

    case 133:

      {
 unsigned long VAR_7 = FUNC_0 (VAR_4, VAR_3, 10);
 if (*VAR_3 != VAR_4 && VAR_7 <= 15)
   return VAR_7;
      }

    case 132:


      if (VAR_5 && VAR_5->type == VAR_2)
 return VAR_5->number;
      break;

    default:
      break;
    }

  return VAR_0;
}
