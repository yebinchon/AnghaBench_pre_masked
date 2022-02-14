
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int,int,int ,int ) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static rtx
FUNC_8 (rtx VAR_2, enum rtx_code VAR_3, rtx VAR_4, rtx VAR_5,
       rtx VAR_6, rtx VAR_7)
{
  enum machine_mode VAR_8 = FUNC_0 (VAR_2);
  rtx VAR_9;

  VAR_4 = FUNC_2 (VAR_8, VAR_4);
  if (!FUNC_6 (VAR_5, VAR_8))
    VAR_5 = FUNC_2 (VAR_8, VAR_5);

  if (VAR_1
      || FUNC_7 (VAR_2, VAR_6)
      || FUNC_7 (VAR_2, VAR_7))
    VAR_2 = FUNC_3 (VAR_8);

  VAR_9 = FUNC_5 (VAR_3, VAR_8, VAR_4, VAR_5);
  FUNC_1 (FUNC_4 (VAR_0, VAR_2, VAR_9));

  return VAR_2;
}
