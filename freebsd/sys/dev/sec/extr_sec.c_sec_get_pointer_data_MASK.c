
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct sec_desc {TYPE_1__* sd_ptr_dmem; } ;
struct TYPE_2__ {void* dma_vaddr; } ;



__attribute__((used)) static inline void *
FUNC_0(struct sec_desc *VAR_0, u_int VAR_1)
{

 return (VAR_0->sd_ptr_dmem[VAR_1].dma_vaddr);
}
