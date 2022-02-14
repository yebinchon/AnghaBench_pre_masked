
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __u8 ;


 int FUNC_0 (int*,int *,int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(__u8 VAR_0[16])
{
 int VAR_1;
 u32 VAR_2;

 for (VAR_1 = 0; VAR_1 < 4; VAR_1++) {
  VAR_2 = FUNC_1();
  FUNC_0(VAR_0 + VAR_1 * 4, &VAR_2, 4);
 }

 VAR_0[8] = (VAR_0[8] & 0x3F) | 0x80;
}
