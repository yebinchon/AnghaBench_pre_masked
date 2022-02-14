
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {int size; int* dma_b; } ;
struct TYPE_7__ {TYPE_1__ minidump; } ;
struct TYPE_8__ {TYPE_2__ dma_buf; } ;
struct TYPE_9__ {TYPE_3__ hw; } ;
typedef TYPE_4__ qla_host_t ;



__attribute__((used)) static uint32_t
FUNC_0(qla_host_t *VAR_0)
{
        uint64_t VAR_1 = 0;
 int VAR_2;
 uint32_t *VAR_3;

 VAR_2 = VAR_0->hw.dma_buf.minidump.size / sizeof (uint32_t);
 VAR_3 = VAR_0->hw.dma_buf.minidump.dma_b;

 while (VAR_2-- > 0) {
  VAR_1 += *VAR_3++;
 }

 while (VAR_1 >> 32) {
  VAR_1 = (VAR_1 & 0xFFFFFFFF) + (VAR_1 >> 32);
 }

 return (~VAR_1);
}
