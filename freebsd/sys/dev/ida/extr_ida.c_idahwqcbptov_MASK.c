
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida_softc {scalar_t__ hwqcb_busaddr; scalar_t__ hwqcbs; } ;
struct ida_qcb {int dummy; } ;
struct ida_hardware_qcb {struct ida_qcb* qcb; } ;
typedef scalar_t__ bus_addr_t ;



__attribute__((used)) static __inline struct ida_qcb *
FUNC_0(struct ida_softc *VAR_0, bus_addr_t VAR_1)
{
 struct ida_hardware_qcb *VAR_2;

 VAR_2 = (struct ida_hardware_qcb *)
     ((bus_addr_t)VAR_0->hwqcbs + (VAR_1 - VAR_0->hwqcb_busaddr));
 return (VAR_2->qcb);
}
