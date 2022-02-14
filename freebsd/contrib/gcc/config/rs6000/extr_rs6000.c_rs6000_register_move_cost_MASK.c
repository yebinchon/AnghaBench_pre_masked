
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int** VAR_5 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int ) ;

int
FUNC_2 (enum machine_mode VAR_6,
      enum reg_class VAR_7, enum reg_class VAR_8)
{

  if (FUNC_0 (VAR_8, VAR_3)
      || FUNC_0 (VAR_7, VAR_3))
    {
      if (! FUNC_0 (VAR_8, VAR_3))
 VAR_7 = VAR_8;

      if (VAR_7 == VAR_2 || VAR_7 == VAR_0)
 return (FUNC_1 (VAR_6, VAR_7, 0)
  + FUNC_1 (VAR_6, VAR_3, 0));



      else if (VAR_7 == VAR_1)
 return 4;

      else

 return 2 * VAR_5[0][VAR_6];
    }


  else if (FUNC_0 (VAR_8, VAR_7))
    return VAR_6 == VAR_4 ? 4 : 2;


  else
    return (FUNC_2 (VAR_6, VAR_3, VAR_8)
     + FUNC_2 (VAR_6, VAR_7, VAR_3));
}
