
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int REAL_VALUE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 unsigned int FUNC_7 (unsigned int,int ) ;






 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,unsigned int,int) ;
 int FUNC_10 (int ,int,unsigned int) ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;

__attribute__((used)) static void
FUNC_13 (enum machine_mode VAR_2, rtx VAR_3, unsigned int VAR_4)
{
  switch (FUNC_4 (VAR_2))
    {
    case 132:
    case 133:
      {
 REAL_VALUE_TYPE VAR_5;

 FUNC_11 (FUNC_2 (VAR_3) == VAR_0);
 FUNC_8 (VAR_5, VAR_3);
 FUNC_10 (VAR_5, VAR_2, VAR_4);
 break;
      }

    case 131:
    case 130:
      FUNC_9 (VAR_3, FUNC_6 (VAR_2), VAR_4, 1);
      break;

    case 129:
    case 128:
      {
 int VAR_6, VAR_7;
        enum machine_mode VAR_8 = FUNC_5 (VAR_2);
 unsigned int VAR_9 = FUNC_7 (VAR_4, FUNC_3 (VAR_8));

 FUNC_11 (FUNC_2 (VAR_3) == VAR_1);
 VAR_7 = FUNC_1 (VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
   {
     rtx VAR_10 = FUNC_0 (VAR_3, VAR_6);
     FUNC_13 (VAR_8, VAR_10, VAR_6 ? VAR_9 : VAR_4);
   }
      }
      break;

    default:
      FUNC_12 ();
    }
}
