
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum attr_i387_cw { ____Placeholder_attr_i387_cw } attr_i387_cw ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

int
FUNC_8 (int VAR_7, rtx VAR_8)
{
  enum attr_i387_cw VAR_9;






  if (FUNC_0 (VAR_8)
      || (FUNC_2 (VAR_8)
   && (FUNC_4 (FUNC_3 (VAR_8)) >= 0
       || FUNC_1 (FUNC_3 (VAR_8)) == VAR_0)))
    return VAR_6;

  if (FUNC_7 (VAR_8) < 0)
    return VAR_1;

  VAR_9 = FUNC_6 (VAR_8);

  switch (VAR_7)
    {
    case 128:
      if (VAR_9 == VAR_5)
 return VAR_9;
      break;

    case 130:
      if (VAR_9 == VAR_3)
 return VAR_9;
      break;

    case 131:
      if (VAR_9 == VAR_2)
 return VAR_9;
      break;

    case 129:
      if (VAR_9 == VAR_4)
 return VAR_9;
      break;

    default:
      FUNC_5 ();
    }

  return VAR_1;
}
