
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ dma_b; } ;
struct TYPE_8__ {TYPE_1__ minidump; } ;
struct TYPE_9__ {int mdump_capture_mask; TYPE_2__ dma_buf; } ;
struct TYPE_10__ {TYPE_3__ hw; } ;
typedef TYPE_4__ qla_host_t ;
struct TYPE_11__ {scalar_t__* capture_size_array; } ;
typedef TYPE_5__ ql_minidump_template_hdr_t ;


 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_0(qla_host_t *VAR_1)
{
 uint32_t VAR_2, VAR_3;
 uint32_t VAR_4 = 0;
 ql_minidump_template_hdr_t *VAR_5;

 VAR_5 = (ql_minidump_template_hdr_t *)VAR_1->hw.dma_buf.minidump.dma_b;

 VAR_2 = 0x2;

 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2 & VAR_1->hw.mdump_capture_mask)
   VAR_4 += VAR_5->capture_size_array[VAR_3];
  VAR_2 = VAR_2 << 1;
 }
 return (VAR_4);
}
