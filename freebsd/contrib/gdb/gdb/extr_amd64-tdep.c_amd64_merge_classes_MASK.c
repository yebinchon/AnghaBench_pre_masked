
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum amd64_reg_class { ____Placeholder_amd64_reg_class } amd64_reg_class ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static enum amd64_reg_class
FUNC_0 (enum amd64_reg_class VAR_7, enum amd64_reg_class VAR_8)
{

  if (VAR_7 == VAR_8)
    return VAR_7;



  if (VAR_7 == VAR_3)
    return VAR_8;
  if (VAR_8 == VAR_3)
    return VAR_7;


  if (VAR_7 == VAR_2 || VAR_8 == VAR_2)
    return VAR_2;


  if (VAR_7 == VAR_1 || VAR_8 == VAR_1)
    return VAR_1;



  if (VAR_7 == VAR_5 || VAR_7 == VAR_6
      || VAR_7 == VAR_0 || VAR_8 == VAR_5
      || VAR_8 == VAR_6 || VAR_8 == VAR_0)
    return VAR_2;


  return VAR_4;
}
