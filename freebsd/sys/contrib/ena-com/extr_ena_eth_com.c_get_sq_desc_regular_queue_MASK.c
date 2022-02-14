
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef uintptr_t u32 ;
typedef uintptr_t u16 ;
struct TYPE_2__ {scalar_t__ virt_addr; } ;
struct ena_com_io_sq {int tail; int q_depth; uintptr_t desc_entry_size; TYPE_1__ desc_addr; } ;



__attribute__((used)) static inline void *FUNC_0(struct ena_com_io_sq *VAR_0)
{
 u16 VAR_1;
 u32 VAR_2;

 VAR_1 = VAR_0->tail & (VAR_0->q_depth - 1);

 VAR_2 = VAR_1 * VAR_0->desc_entry_size;

 return (void *)((uintptr_t)VAR_0->desc_addr.virt_addr + VAR_2);
}
