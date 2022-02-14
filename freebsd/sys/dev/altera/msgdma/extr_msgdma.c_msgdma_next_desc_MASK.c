
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msgdma_channel {int descs_num; } ;



__attribute__((used)) static inline uint32_t
FUNC_0(struct msgdma_channel *VAR_0, uint32_t VAR_1)
{

 return ((VAR_1 + 1) % VAR_0->descs_num);
}
