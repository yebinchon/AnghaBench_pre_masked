
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ioat_hw_descriptor {int dummy; } ioat_hw_descriptor ;
typedef int uint32_t ;
struct ioat_softc {int ring_size_order; union ioat_hw_descriptor* hw_desc_ring; } ;



__attribute__((used)) static union ioat_hw_descriptor *
FUNC_0(struct ioat_softc *VAR_0, uint32_t VAR_1)
{

 return (&VAR_0->hw_desc_ring[VAR_1 % (1 << VAR_0->ring_size_order)]);
}
