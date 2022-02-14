
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 scalar_t__ FUNC_0 (int const*,int*,int*) ;
 int VAR_0 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int ,int) ;

int FUNC_3(const u8 *VAR_1, u8 *VAR_2, u8 *VAR_3)
{
 FUNC_2(VAR_2, 0, VAR_0);
 if (FUNC_0(VAR_1, VAR_2, VAR_2))
  return -1;
 FUNC_1(VAR_3, VAR_2, VAR_0);
 VAR_2[VAR_0 - 1] ^= 0x01;
 VAR_3[VAR_0 - 1] ^= 0x02;
 if (FUNC_0(VAR_1, VAR_2, VAR_2) ||
     FUNC_0(VAR_1, VAR_3, VAR_3))
  return -1;
 return 0;
}
