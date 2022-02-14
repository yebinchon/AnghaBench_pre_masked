
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (int const*,size_t,int *) ;
 scalar_t__ FUNC_1 (int *,int *,int *) ;

int FUNC_2(
 const u8 *VAR_0, size_t VAR_1,
 const u8 *VAR_2, size_t VAR_3,
 u8 *VAR_4)
{
 u8 VAR_5[16], VAR_6[16];

 if (FUNC_0(VAR_2, VAR_3,
        VAR_5) ||
     FUNC_0(VAR_0, VAR_1,
        VAR_6) ||
     FUNC_1(VAR_5,
        VAR_6,
        VAR_4))
  return -1;
 return 0;
}
