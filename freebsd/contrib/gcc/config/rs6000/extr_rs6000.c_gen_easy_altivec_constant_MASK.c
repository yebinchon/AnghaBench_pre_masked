
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,unsigned int,unsigned int) ;

rtx
FUNC_7 (rtx VAR_6)
{
  enum machine_mode VAR_7 = FUNC_1 (VAR_6);
  int VAR_8 = FUNC_2 (VAR_7);
  rtx VAR_9 = FUNC_0 (VAR_6, VAR_8 - 1);
  unsigned VAR_10 = VAR_8 / 4;
  unsigned VAR_11 = 1;


  if (FUNC_6 (VAR_6, VAR_10, VAR_11))
    return FUNC_5 (VAR_4, FUNC_4 (VAR_2, VAR_9));


  if (VAR_10 == 1)
    VAR_11 <<= 1;
  else
    VAR_10 >>= 1;

  if (FUNC_6 (VAR_6, VAR_10, VAR_11))
    return FUNC_5 (VAR_5, FUNC_4 (VAR_0, VAR_9));


  if (VAR_10 == 1)
    VAR_11 <<= 1;
  else
    VAR_10 >>= 1;

  if (FUNC_6 (VAR_6, VAR_10, VAR_11))
    return FUNC_5 (VAR_3, FUNC_4 (VAR_1, VAR_9));

  FUNC_3 ();
}
