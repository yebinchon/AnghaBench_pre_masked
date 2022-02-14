
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mode_class { ____Placeholder_mode_class } mode_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;

enum machine_mode
FUNC_3 (unsigned int VAR_3, enum mode_class VAR_4, int VAR_5)
{
  enum machine_mode VAR_6;

  if (VAR_5 && VAR_3 > VAR_1)
    return VAR_0;


  for (VAR_6 = FUNC_0 (VAR_4); VAR_6 != VAR_2;
       VAR_6 = FUNC_2 (VAR_6))
    if (FUNC_1 (VAR_6) == VAR_3)
      return VAR_6;

  return VAR_0;
}
