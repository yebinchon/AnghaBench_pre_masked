
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;




 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static rtx
FUNC_10 (enum machine_mode VAR_0, rtx VAR_1, rtx VAR_2)
{
  enum machine_mode VAR_3 = FUNC_1 (VAR_0);
  bool VAR_4;
  switch (FUNC_0 (FUNC_4 (VAR_1, 0)))
    {
    case 129:
    case 131:
      VAR_4 = 1;
      break;
    case 128:
    case 130:
      VAR_4 = 0;
      break;
    default:
      FUNC_7 ();
    }

  FUNC_5 (FUNC_8 (VAR_3, FUNC_4 (VAR_1, 0)),
    FUNC_9 (VAR_2, VAR_4));
  return FUNC_5 (FUNC_8 (VAR_3, FUNC_4 (VAR_1, 0)),
    FUNC_9 (VAR_2, !VAR_4));
}
