
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int,int ,int ) ;
 int FUNC_5 (int ,int,int ,int ,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int ) ;
 int VAR_2 ;

__attribute__((used)) static rtx
FUNC_8 (enum machine_mode VAR_3, rtx VAR_4)
{
  enum machine_mode VAR_5;

  if (VAR_3 == VAR_2)
    return FUNC_7 (VAR_3, VAR_4);

  FUNC_6 (!FUNC_2 (VAR_3));

  VAR_5 = FUNC_1 (VAR_3);
  VAR_4 = FUNC_5 (VAR_1, VAR_5, VAR_4,
       FUNC_3 (VAR_0, FUNC_0 (VAR_3)), 0, 1);
  return FUNC_4 (VAR_3, VAR_5, VAR_4, 0);
}
