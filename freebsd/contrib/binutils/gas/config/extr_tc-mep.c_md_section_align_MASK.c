
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int valueT ;
typedef int segT ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

valueT
FUNC_1 (segT VAR_1, valueT VAR_2)
{
  int VAR_3 = FUNC_0 (VAR_0, VAR_1);
  return ((VAR_2 + (1 << VAR_3) - 1) & (-1 << VAR_3));
}
