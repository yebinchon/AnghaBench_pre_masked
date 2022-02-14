
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mode_class { ____Placeholder_mode_class } mode_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 () ;

enum machine_mode
FUNC_4 (unsigned int VAR_1, enum mode_class VAR_2)
{
  enum machine_mode VAR_3;



  for (VAR_3 = FUNC_0 (VAR_2); VAR_3 != VAR_0;
       VAR_3 = FUNC_2 (VAR_3))
    if (FUNC_1 (VAR_3) >= VAR_1)
      return VAR_3;

  FUNC_3 ();
}
