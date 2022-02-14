
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef enum expand_modifier { ____Placeholder_expand_modifier } expand_modifier ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,int,int) ;
 int VAR_2 ;

__attribute__((used)) static rtx
FUNC_6 (tree VAR_3, rtx VAR_4, enum machine_mode VAR_5,
         enum expand_modifier VAR_6)
{
  enum machine_mode VAR_7;
  rtx VAR_8;


  if (VAR_5 == VAR_1)
    VAR_5 = FUNC_3 (FUNC_2 (VAR_3));




  if (VAR_5 != VAR_0 && VAR_5 != VAR_2)
    VAR_5 = VAR_0;

  VAR_8 = FUNC_5 (FUNC_1 (VAR_3, 0), VAR_4,
        VAR_5, VAR_6);




  VAR_7 = FUNC_0 (VAR_8);
  if (VAR_7 == VAR_1)
    VAR_7 = VAR_5;
  if (VAR_7 != VAR_5)
    VAR_8 = FUNC_4 (VAR_5, VAR_8);

  return VAR_8;
}
