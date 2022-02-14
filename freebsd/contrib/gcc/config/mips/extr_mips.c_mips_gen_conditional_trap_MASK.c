
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 int * VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int,int,int ,int ) ;

void
FUNC_7 (rtx *VAR_6)
{
  rtx VAR_7, VAR_8;
  enum rtx_code VAR_9 = FUNC_0 (VAR_6[0]);
  enum machine_mode VAR_10 = FUNC_1 (VAR_5[0]);




  switch (VAR_9)
    {
    case 131: VAR_9 = VAR_2; break;
    case 129: VAR_9 = VAR_0; break;
    case 130: VAR_9 = VAR_3; break;
    case 128: VAR_9 = VAR_1; break;
    default: break;
    }
  if (VAR_9 == FUNC_0 (VAR_6[0]))
    {
      VAR_7 = VAR_5[0];
      VAR_8 = VAR_5[1];
    }
  else
    {
      VAR_7 = VAR_5[1];
      VAR_8 = VAR_5[0];
    }
  VAR_7 = FUNC_4 (VAR_10, VAR_7);
  if (!FUNC_2 (VAR_8, VAR_10))
    VAR_8 = FUNC_4 (VAR_10, VAR_8);

  FUNC_3 (FUNC_5 (VAR_4,
         FUNC_6 (VAR_9, VAR_10, VAR_7, VAR_8),
         VAR_6[1]));
}
