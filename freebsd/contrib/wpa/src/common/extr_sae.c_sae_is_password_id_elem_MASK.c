
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int const VAR_0 ;
 int const VAR_1 ;

__attribute__((used)) static int FUNC_0(const u8 *VAR_2, const u8 *VAR_3)
{
 return VAR_3 - VAR_2 >= 3 &&
  VAR_2[0] == VAR_0 &&
  VAR_2[1] >= 1 &&
  VAR_3 - VAR_2 - 2 >= VAR_2[1] &&
  VAR_2[2] == VAR_1;
}
