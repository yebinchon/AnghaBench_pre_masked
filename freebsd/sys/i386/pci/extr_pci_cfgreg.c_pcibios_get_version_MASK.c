
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int16_t ;
struct bios_regs {int edx; int ebx; int eax; } ;
struct TYPE_2__ {scalar_t__ ventry; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct bios_regs*,scalar_t__,int ) ;

__attribute__((used)) static u_int16_t
FUNC_3(void)
{
 struct bios_regs VAR_4;

 if (VAR_2.ventry == 0) {
  FUNC_1(("pcibios: No call entry point\n"));
  return (0);
 }
 VAR_4.eax = VAR_1;
 if (FUNC_2(&VAR_4, VAR_2.ventry, FUNC_0(VAR_0, VAR_3))) {
  FUNC_1(("pcibios: BIOS_PRESENT call failed\n"));
  return (0);
 }
 if (VAR_4.edx != 0x20494350) {
  FUNC_1(("pcibios: BIOS_PRESENT didn't return 'PCI ' in edx\n"));
  return (0);
 }
 return (VAR_4.ebx & 0xffff);
}
