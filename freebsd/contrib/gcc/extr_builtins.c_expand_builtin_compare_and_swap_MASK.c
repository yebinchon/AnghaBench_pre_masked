
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int,int,int ,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int *,int,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static rtx
FUNC_10 (enum machine_mode VAR_2, tree VAR_3,
     bool VAR_4, rtx VAR_5)
{
  rtx VAR_6, VAR_7, VAR_8;
  enum machine_mode VAR_9;


  VAR_8 = FUNC_9 (FUNC_3 (VAR_3), VAR_2);

  VAR_3 = FUNC_1 (VAR_3);
  VAR_6 = FUNC_7 (FUNC_3 (VAR_3), ((void*)0), VAR_2, VAR_0);


  VAR_9 = FUNC_0 (VAR_6);
  if (VAR_9 == VAR_1)
    VAR_9 = FUNC_4 (FUNC_2 (FUNC_3 (VAR_3)));
  VAR_6 = FUNC_5 (VAR_2, VAR_9, VAR_6, 1);

  VAR_3 = FUNC_1 (VAR_3);
  VAR_7 = FUNC_7 (FUNC_3 (VAR_3), ((void*)0), VAR_2, VAR_0);


  VAR_9 = FUNC_0 (VAR_7);
  if (VAR_9 == VAR_1)
    VAR_9 = FUNC_4 (FUNC_2 (FUNC_3 (VAR_3)));
  VAR_7 = FUNC_5 (VAR_2, VAR_9, VAR_7, 1);

  if (VAR_4)
    return FUNC_6 (VAR_8, VAR_6, VAR_7, VAR_5);
  else
    return FUNC_8 (VAR_8, VAR_6, VAR_7, VAR_5);
}
