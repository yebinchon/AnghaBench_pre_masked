
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef enum sge_context_type { ____Placeholder_sge_context_type } sge_context_type ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (unsigned int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,unsigned int,int ) ;
 int FUNC_12 (int *,int ,int) ;

int FUNC_13(adapter_t *VAR_12, unsigned int VAR_13, int VAR_14,
         enum sge_context_type VAR_15, int VAR_16, u64 VAR_17,
         unsigned int VAR_18, unsigned int VAR_19, int VAR_20,
         unsigned int VAR_21)
{
 unsigned int VAR_22 = VAR_15 == VAR_11 ? 0 : VAR_7;

 if (VAR_17 & 0xfff)
  return -VAR_6;
 if (FUNC_10(VAR_12, VAR_0) & VAR_8)
  return -VAR_5;

 VAR_17 >>= 12;
 FUNC_12(VAR_12, VAR_1, FUNC_5(VAR_21) |
       FUNC_2(VAR_22) | FUNC_4(VAR_14));
 FUNC_12(VAR_12, VAR_2, FUNC_7(VAR_18) |
       FUNC_1((u32)VAR_17 & 0xffff));
 VAR_17 >>= 16;
 FUNC_12(VAR_12, VAR_3, (u32)VAR_17);
 VAR_17 >>= 32;
 FUNC_12(VAR_12, VAR_4,
       FUNC_0((u32)VAR_17 & 0xf) | FUNC_6(VAR_16) |
       FUNC_8(VAR_15) | FUNC_3(VAR_20) | FUNC_9(VAR_19) |
       VAR_9);
 return FUNC_11(VAR_12, VAR_13, VAR_10);
}
