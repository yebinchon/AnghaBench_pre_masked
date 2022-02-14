
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum x86_64_reg_class { ____Placeholder_x86_64_reg_class } x86_64_reg_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static enum x86_64_reg_class
FUNC_0 (enum x86_64_reg_class VAR_9, enum x86_64_reg_class VAR_10)
{

  if (VAR_9 == VAR_10)
    return VAR_9;



  if (VAR_9 == VAR_4)
    return VAR_10;
  if (VAR_10 == VAR_4)
    return VAR_9;


  if (VAR_9 == VAR_3 || VAR_10 == VAR_3)
    return VAR_3;


  if ((VAR_9 == VAR_1 && VAR_10 == VAR_5)
      || (VAR_10 == VAR_1 && VAR_9 == VAR_5))
    return VAR_1;
  if (VAR_9 == VAR_2 || VAR_9 == VAR_1
      || VAR_10 == VAR_2 || VAR_10 == VAR_1)
    return VAR_2;



  if (VAR_9 == VAR_8
      || VAR_9 == VAR_7
      || VAR_9 == VAR_0
      || VAR_10 == VAR_8
      || VAR_10 == VAR_7
      || VAR_10 == VAR_0)
    return VAR_3;


  return VAR_6;
}
