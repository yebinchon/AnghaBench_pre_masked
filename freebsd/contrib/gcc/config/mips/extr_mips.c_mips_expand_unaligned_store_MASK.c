
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *,unsigned int,int,int *,int *) ;
 int FUNC_8 (unsigned int,int ,int ) ;

bool
FUNC_9 (rtx VAR_2, rtx VAR_3, unsigned int VAR_4, int VAR_5)
{
  rtx VAR_6, VAR_7;
  enum machine_mode VAR_8;

  if (!FUNC_7 (&VAR_2, VAR_4, VAR_5, &VAR_6, &VAR_7))
    return 0;

  VAR_8 = FUNC_8 (VAR_4, VAR_1, 0);
  VAR_3 = FUNC_2 (VAR_8, VAR_3);

  if (VAR_8 == VAR_0)
    {
      FUNC_1 (FUNC_3 (VAR_2, VAR_3, VAR_6));
      FUNC_1 (FUNC_4 (FUNC_0 (VAR_2), FUNC_0 (VAR_3), VAR_7));
    }
  else
    {
      FUNC_1 (FUNC_5 (VAR_2, VAR_3, VAR_6));
      FUNC_1 (FUNC_6 (FUNC_0 (VAR_2), FUNC_0 (VAR_3), VAR_7));
    }
  return 1;
}
