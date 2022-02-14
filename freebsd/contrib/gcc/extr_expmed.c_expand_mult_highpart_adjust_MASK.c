
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,int ,int ,int ) ;
 int FUNC_3 (int ,int,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int,int ,int ) ;

rtx
FUNC_6 (enum machine_mode VAR_5, rtx VAR_6, rtx VAR_7,
        rtx VAR_8, rtx VAR_9, int VAR_10)
{
  rtx VAR_11;
  enum rtx_code VAR_12 = VAR_10 ? VAR_3 : VAR_0;

  VAR_11 = FUNC_3 (VAR_4, VAR_5, VAR_7,
        FUNC_1 (VAR_2, FUNC_0 (VAR_5) - 1),
        VAR_1, 0);
  VAR_11 = FUNC_2 (VAR_5, VAR_11, VAR_8, VAR_1);
  VAR_6
    = FUNC_4 (FUNC_5 (VAR_12, VAR_5, VAR_6, VAR_11),
       VAR_6);

  VAR_11 = FUNC_3 (VAR_4, VAR_5, VAR_8,
        FUNC_1 (VAR_2, FUNC_0 (VAR_5) - 1),
        VAR_1, 0);
  VAR_11 = FUNC_2 (VAR_5, VAR_11, VAR_7, VAR_1);
  VAR_9 = FUNC_4 (FUNC_5 (VAR_12, VAR_5, VAR_6, VAR_11),
     VAR_9);

  return VAR_9;
}
