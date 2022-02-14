
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int,int ,int,int*,int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

int
FUNC_5 (tree VAR_8)
{
  int VAR_9, VAR_10, VAR_11;
  enum machine_mode VAR_12 = FUNC_4 (VAR_8);

  if (VAR_2)
    return !FUNC_2 (VAR_12, VAR_8, 1, &VAR_9, &VAR_10);

  if (VAR_12 == VAR_0)
    return 1;

  VAR_11 = FUNC_3 (VAR_8);

  if (VAR_1 && FUNC_0 (VAR_8) && VAR_11 <= 8)
    return 0;

  if (FUNC_1 (VAR_12) || VAR_12 == VAR_6)
    {

      if (VAR_11 < 8)
 return 0;



      if (VAR_11 == 8)
 return (VAR_3 ? 0 : 1);


      if (VAR_11 == 16)
 return (VAR_4 ? 0 : 1);
    }

  if (VAR_12 == VAR_7)
    return 0;

  if (VAR_12 == VAR_5)
    return 1;

  if (VAR_11 > 12)
    return 1;
  return 0;
}
