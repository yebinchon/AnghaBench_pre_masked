
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;




 int FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static rtx
FUNC_10 (enum machine_mode VAR_0, rtx VAR_1, rtx VAR_2)
{
  switch (FUNC_3 (VAR_0))
    {
    case 130:
      {
 rtx VAR_3 = FUNC_2 (FUNC_5 (VAR_0));
 return FUNC_6 (FUNC_9 (VAR_1, VAR_3), VAR_2);
      }

    case 131:
      return FUNC_6 (FUNC_8 (VAR_1), VAR_2);

    case 129:
    case 128:
      {
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < FUNC_1 (VAR_1); VAR_4++)
   VAR_2 = FUNC_10 (FUNC_4 (VAR_0),
       FUNC_0 (VAR_1, VAR_4), VAR_2);
 return VAR_2;
      }

    default:
      FUNC_7 ();
    }
}
