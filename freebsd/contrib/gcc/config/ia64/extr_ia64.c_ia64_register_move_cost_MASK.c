
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (int,int,int ) ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;

int
FUNC_2 (enum machine_mode VAR_3, enum reg_class VAR_4,
    enum reg_class VAR_5)
{

  if (VAR_5 == VAR_0)
    VAR_5 = 129;
  if (VAR_4 == VAR_0)
    VAR_4 = 129;



  if (VAR_4 < VAR_5)
    {
      enum reg_class VAR_6 = VAR_5;
      VAR_5 = VAR_4, VAR_4 = VAR_6;
    }





  if (VAR_3 == VAR_2 || VAR_3 == VAR_1)
    {
      if (VAR_5 != 129 || VAR_4 != 129)
        return FUNC_0 (VAR_3, VAR_5, 0);
      else
 return 3;
    }

  switch (VAR_5)
    {
    case 128:

      if (VAR_4 == 128)
 return 3;

      if (VAR_4 != 129)
 return FUNC_0 (VAR_3, VAR_5, 0);
      break;

    case 134:

      if (VAR_4 != 129 && VAR_4 != 131)
 return FUNC_0 (VAR_3, VAR_5, 0);
      break;

    case 136:
    case 135:

      if (VAR_4 != 129)
 return FUNC_0 (VAR_3, VAR_5, 0);
      break;

    case 129:
    case 132:
    case 133:
    case 130:
    case 131:
    case 137:
      break;

    default:
      FUNC_1 ();
    }

  return 2;
}
