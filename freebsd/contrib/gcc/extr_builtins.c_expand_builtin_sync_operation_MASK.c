
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int,int,int ,int) ;
 int FUNC_6 (int ,int *,int,int ) ;
 int FUNC_7 (int ,int ,int,int,int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static rtx
FUNC_10 (enum machine_mode VAR_2, tree VAR_3,
          enum rtx_code VAR_4, bool VAR_5,
          rtx VAR_6, bool VAR_7)
{
  rtx VAR_8, VAR_9;
  enum machine_mode VAR_10;


  VAR_9 = FUNC_9 (FUNC_3 (VAR_3), VAR_2);

  VAR_3 = FUNC_1 (VAR_3);
  VAR_8 = FUNC_6 (FUNC_3 (VAR_3), ((void*)0), VAR_2, VAR_0);


  VAR_10 = FUNC_0 (VAR_8);
  if (VAR_10 == VAR_1)
    VAR_10 = FUNC_4 (FUNC_2 (FUNC_3 (VAR_3)));
  VAR_8 = FUNC_5 (VAR_2, VAR_10, VAR_8, 1);

  if (VAR_7)
    return FUNC_8 (VAR_9, VAR_8, VAR_4);
  else
    return FUNC_7 (VAR_9, VAR_8, VAR_4, VAR_5, VAR_6);
}
