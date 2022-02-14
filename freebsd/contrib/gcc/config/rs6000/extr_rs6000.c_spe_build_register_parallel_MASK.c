
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;




 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int,int ,...) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static rtx
FUNC_6 (enum machine_mode VAR_3, int VAR_4)
{
  rtx VAR_5, VAR_6;

  switch (VAR_3)
    {
    case 128:
      VAR_5 = FUNC_5 (VAR_0, VAR_4);
      VAR_5 = FUNC_3 (VAR_1, VAR_5, VAR_2);
      return FUNC_4 (VAR_3, FUNC_2 (1, VAR_5));

    case 129:
      VAR_5 = FUNC_5 (VAR_0, VAR_4);
      VAR_5 = FUNC_3 (VAR_1, VAR_5, VAR_2);
      VAR_6 = FUNC_5 (VAR_0, VAR_4 + 2);
      VAR_6 = FUNC_3 (VAR_1, VAR_6, FUNC_0 (8));
      return FUNC_4 (VAR_3, FUNC_2 (2, VAR_5, VAR_6));

    default:
      FUNC_1 ();
    }
}
