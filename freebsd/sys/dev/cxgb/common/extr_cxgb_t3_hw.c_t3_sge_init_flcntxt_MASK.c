
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,unsigned int,int ) ;
 int FUNC_11 (int *,int ,int) ;

int FUNC_12(adapter_t *VAR_12, unsigned int VAR_13, int VAR_14,
   u64 VAR_15, unsigned int VAR_16, unsigned int VAR_17,
   unsigned int VAR_18, int VAR_19, unsigned int VAR_20)
{
 if (VAR_15 & 0xfff)
  return -VAR_6;
 if (FUNC_9(VAR_12, VAR_0) & VAR_7)
  return -VAR_5;

 VAR_15 >>= 12;
 FUNC_11(VAR_12, VAR_1, (u32)VAR_15);
 VAR_15 >>= 32;
 FUNC_11(VAR_12, VAR_2,
       FUNC_0((u32)VAR_15) |
       FUNC_7(VAR_20 & VAR_10));
 FUNC_11(VAR_12, VAR_3, FUNC_8(VAR_16) |
       FUNC_4(VAR_19) | FUNC_6(VAR_20 >> 12) |
       FUNC_3(VAR_17 & VAR_9));
 FUNC_11(VAR_12, VAR_4,
       FUNC_2(VAR_17 >> (32 - VAR_11)) |
       FUNC_1(VAR_18) | FUNC_5(VAR_14));
 return FUNC_10(VAR_12, VAR_13, VAR_8);
}
