
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static void FUNC_2(u8 *VAR_0)
{
 u32 VAR_1;

 VAR_1 = FUNC_0(VAR_0 + 12);
 VAR_1 >>= 1;
 if (VAR_0[11] & 0x01)
  VAR_1 |= 0x80000000;
 FUNC_1(VAR_0 + 12, VAR_1);

 VAR_1 = FUNC_0(VAR_0 + 8);
 VAR_1 >>= 1;
 if (VAR_0[7] & 0x01)
  VAR_1 |= 0x80000000;
 FUNC_1(VAR_0 + 8, VAR_1);

 VAR_1 = FUNC_0(VAR_0 + 4);
 VAR_1 >>= 1;
 if (VAR_0[3] & 0x01)
  VAR_1 |= 0x80000000;
 FUNC_1(VAR_0 + 4, VAR_1);

 VAR_1 = FUNC_0(VAR_0);
 VAR_1 >>= 1;
 FUNC_1(VAR_0, VAR_1);
}
