
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int dma_addr_t ;



__attribute__((used)) static inline void FUNC_0(dma_addr_t VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 *VAR_1 = (u32)(VAR_0 & 0xffffffff);



 *VAR_2 = (u32)((u64)VAR_0>>32);

}
