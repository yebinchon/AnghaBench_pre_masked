
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int FUNC_0 (char*,char*,scalar_t__) ;

int FUNC_1(void *VAR_0, u32 VAR_1, u32 *VAR_2, void *VAR_3,
    u32 VAR_4)
{
 if (VAR_1 - *VAR_2 < VAR_4)
  return 0;

 FUNC_0((char *)VAR_3, (char *)VAR_0 + *VAR_2, VAR_4);
 *VAR_2 = *VAR_2 + VAR_4;
 return VAR_4;
}
