
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum reg_note { ____Placeholder_reg_note } reg_note ;
typedef enum attr_itanium_class { ____Placeholder_attr_itanium_class } attr_itanium_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (rtx VAR_3, int VAR_4, rtx VAR_5, int VAR_6)
{
  enum reg_note VAR_7 = (enum reg_note) VAR_4;
  enum attr_itanium_class VAR_8;
  enum attr_itanium_class VAR_9;

  if (VAR_7 != VAR_2)
    return VAR_6;

  VAR_9 = FUNC_0 (VAR_3);
  VAR_8 = FUNC_0 (VAR_5);
  if (VAR_8 == VAR_0 || VAR_8 == VAR_1
      || VAR_9 == VAR_0 || VAR_9 == VAR_1)
    return 0;

  return VAR_6;
}
