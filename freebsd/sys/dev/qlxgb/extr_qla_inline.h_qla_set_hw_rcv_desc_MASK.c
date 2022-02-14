
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_8__ {TYPE_1__* rds_ring; } ;
struct TYPE_9__ {TYPE_2__ dma_buf; } ;
struct TYPE_10__ {TYPE_3__ hw; } ;
typedef TYPE_4__ qla_host_t ;
struct TYPE_11__ {size_t buf_size; int buf_addr; scalar_t__ handle; } ;
typedef TYPE_5__ q80_recv_desc_t ;
typedef int bus_addr_t ;
struct TYPE_7__ {scalar_t__ dma_b; } ;



__attribute__((used)) static __inline void
FUNC_0(qla_host_t *VAR_0, uint32_t VAR_1, uint32_t VAR_2,
 uint32_t VAR_3, bus_addr_t VAR_4, uint32_t VAR_5)
{
 q80_recv_desc_t *VAR_6;

 VAR_6 = (q80_recv_desc_t *)VAR_0->hw.dma_buf.rds_ring[VAR_1].dma_b;

 VAR_6 += VAR_2;

 VAR_6->handle = (uint16_t)VAR_3;
 VAR_6->buf_size = VAR_5;
 VAR_6->buf_addr = VAR_4;

 return;
}
