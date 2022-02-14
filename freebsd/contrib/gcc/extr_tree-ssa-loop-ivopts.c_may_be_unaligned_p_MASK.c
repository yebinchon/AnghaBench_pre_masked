
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef unsigned int HOST_WIDE_INT ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,unsigned int*,unsigned int*,int *,int*,int*,int*,int) ;

__attribute__((used)) static bool
FUNC_5 (tree VAR_3)
{
  tree VAR_4;
  tree VAR_5;
  HOST_WIDE_INT VAR_6;
  HOST_WIDE_INT VAR_7;
  tree VAR_8;
  enum machine_mode VAR_9;
  int VAR_10, VAR_11;
  unsigned VAR_12;



  if (FUNC_1 (VAR_3) == VAR_2)
    return 0;




  VAR_4 = FUNC_4 (VAR_3, &VAR_6, &VAR_7, &VAR_8, &VAR_9,
         &VAR_10, &VAR_11, 1);
  VAR_5 = FUNC_2 (VAR_4);
  VAR_12 = FUNC_3 (VAR_5);

  if (VAR_9 != VAR_1
      && (VAR_12 < FUNC_0 (VAR_9)
   || VAR_7 % FUNC_0 (VAR_9) != 0
   || VAR_7 % VAR_0 != 0))
    return 1;

  return 0;
}
