
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida_softc {scalar_t__ hwqcbs; scalar_t__ hwqcb_busaddr; } ;
struct ida_hardware_qcb {int dummy; } ;
typedef scalar_t__ bus_addr_t ;



__attribute__((used)) static __inline bus_addr_t
FUNC_0(struct ida_softc *VAR_0, struct ida_hardware_qcb *VAR_1)
{
 return (VAR_0->hwqcb_busaddr +
     ((bus_addr_t)VAR_1 - (bus_addr_t)VAR_0->hwqcbs));
}
