
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t vm_paddr_t ;
typedef scalar_t__ off_t ;
struct TYPE_3__ {scalar_t__ ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 size_t FUNC_0 (scalar_t__,size_t) ;
 int FUNC_1 (void*,size_t,size_t) ;

int
FUNC_2(bus_dma_segment_t *VAR_0, off_t VAR_1, vm_paddr_t VAR_2,
    size_t VAR_3)
{
 size_t VAR_4;
 int VAR_5;

 VAR_5 = 0;
 while (VAR_1 >= VAR_0->ds_len) {
  VAR_1 -= VAR_0->ds_len;
  VAR_0++;
 }

 while (VAR_3 > 0 && VAR_5 == 0) {
  VAR_4 = FUNC_0(VAR_0->ds_len - VAR_1, VAR_3);
  VAR_5 = FUNC_1((void *)(uintptr_t)(VAR_0->ds_addr + VAR_1),
      VAR_2, VAR_4);
  VAR_1 = 0;
  VAR_0++;
  VAR_3 -= VAR_4;
  VAR_2 += VAR_4;
 }

 return (VAR_5);
}
