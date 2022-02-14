
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;


 scalar_t__ FUNC_0 (scalar_t__ const*,int,scalar_t__ const) ;

size_t FUNC_1(const u8 *VAR_0, size_t VAR_1,
     const u8 *VAR_2, int VAR_3, size_t VAR_4)
{
 size_t VAR_5 = VAR_4;

 while (VAR_5 < VAR_1 && FUNC_0(VAR_2, VAR_3, VAR_0[VAR_5]))
  VAR_5 += 2 + VAR_0[VAR_5 + 1];

 return VAR_5;
}
