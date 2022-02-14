
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ const VAR_0 ;

size_t FUNC_0(const u8 *VAR_1, size_t VAR_2, size_t VAR_3)
{
 size_t VAR_4 = VAR_3;

 while (VAR_4 < VAR_2 && VAR_1[VAR_4] != VAR_0)
  VAR_4 += 2 + VAR_1[VAR_4 + 1];

 return VAR_4;
}
