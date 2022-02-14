
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned int u32 ;
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
 int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (int) ;
 unsigned int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,unsigned int,int ) ;
 int FUNC_7 (int *,int ,unsigned int) ;

int FUNC_8(adapter_t *VAR_12, unsigned int VAR_13, int VAR_14,
    u64 VAR_15, unsigned int VAR_16,
    unsigned int VAR_17, int VAR_18, unsigned int VAR_19)
{
 unsigned int VAR_20, VAR_21 = 0;

 if (VAR_15 & 0xfff)
  return -VAR_7;
 if (FUNC_5(VAR_12, VAR_0) & VAR_8)
  return -VAR_6;

 VAR_15 >>= 12;
 FUNC_7(VAR_12, VAR_1, FUNC_2(VAR_16) |
       FUNC_1(VAR_19));
 FUNC_7(VAR_12, VAR_2, (u32)VAR_15);
 VAR_15 >>= 32;
        VAR_20 = FUNC_5(VAR_12, VAR_5);
        if ((VAR_14 > 0) ||
  ((VAR_14 == 0) && !(VAR_20 & VAR_9)))
                 VAR_21 = VAR_11;
        if (VAR_14 >= 0)
                VAR_21 |= FUNC_4(VAR_14);
 FUNC_7(VAR_12, VAR_3,
       FUNC_0((u32)VAR_15) | VAR_21 | FUNC_3(VAR_18));
 FUNC_7(VAR_12, VAR_4, VAR_17);
 return FUNC_6(VAR_12, VAR_13, VAR_10);
}
