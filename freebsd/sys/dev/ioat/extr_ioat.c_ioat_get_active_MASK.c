
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ioat_softc {int head; int tail; int ring_size_order; } ;



__attribute__((used)) static inline uint32_t
FUNC_0(struct ioat_softc *VAR_0)
{

 return ((VAR_0->head - VAR_0->tail) & ((1 << VAR_0->ring_size_order) - 1));
}
