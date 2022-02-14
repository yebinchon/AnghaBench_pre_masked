
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct vlapic {scalar_t__ msr_apicbase; } ;


 int FUNC_0 (struct vlapic*,char*,scalar_t__,scalar_t__) ;

int
FUNC_1(struct vlapic *VAR_0, uint64_t VAR_1)
{

 if (VAR_0->msr_apicbase != VAR_1) {
  FUNC_0(VAR_0, "Changing APIC_BASE MSR from %#lx to %#lx "
      "not supported", VAR_0->msr_apicbase, VAR_1);
  return (-1);
 }

 return (0);
}
