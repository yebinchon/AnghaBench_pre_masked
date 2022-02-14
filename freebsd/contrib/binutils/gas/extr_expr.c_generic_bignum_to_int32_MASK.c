
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueT ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static valueT
FUNC_0 (void)
{
  valueT VAR_3 =
    ((VAR_2[1] & VAR_0) << VAR_1)
    | (VAR_2[0] & VAR_0);
  VAR_3 &= 0xffffffff;
  return VAR_3;
}
