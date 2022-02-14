
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct link {size_t l_irq; int l_bios_irq; int l_initial_irq; int l_isa_irq; scalar_t__ l_routed; int l_references; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,uintptr_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 struct link* FUNC_4 (int ,int) ;
 int FUNC_5 (uintptr_t,int,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct link*,int) ;
 int FUNC_8 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;

void
FUNC_9(device_t VAR_5, int VAR_6, device_t VAR_7, int VAR_8,
    int VAR_9)
{
 struct link *VAR_10;
 uint8_t VAR_11;
 uintptr_t VAR_12;







 if (FUNC_2(VAR_7, ((void*)0), VAR_1, &VAR_12) != 0) {
  FUNC_6(VAR_7, "Unable to read PCI bus number");
  FUNC_8("PCI bridge without a bus number");
 }


 FUNC_0(VAR_2);
 VAR_10 = FUNC_4(VAR_5, VAR_6);
 if (VAR_10 == ((void*)0)) {
  FUNC_6(VAR_5, "apparently invalid index %d\n", VAR_6);
  FUNC_1(VAR_2);
  return;
 }
 VAR_10->l_references++;
 if (VAR_10->l_routed)
  VAR_4[VAR_10->l_irq]++;
 if (!VAR_10->l_isa_irq) {
  FUNC_1(VAR_2);
  return;
 }


 VAR_11 = FUNC_5(VAR_12, VAR_8, VAR_9);
 if (!FUNC_3(VAR_11)) {
  FUNC_1(VAR_2);
  return;
 }


 if (!FUNC_7(VAR_10, VAR_11)) {
  FUNC_6(VAR_5, "BIOS IRQ %u for %d.%d.INT%c is invalid\n",
      VAR_11, (int)VAR_12, VAR_8, VAR_9 + 'A');
 } else if (!FUNC_3(VAR_10->l_bios_irq)) {
  VAR_10->l_bios_irq = VAR_11;
  if (VAR_11 < VAR_0)
   VAR_3 |= (1 << VAR_11);
  if (VAR_11 != VAR_10->l_initial_irq &&
      FUNC_3(VAR_10->l_initial_irq))
   FUNC_6(VAR_5,
       "BIOS IRQ %u does not match initial IRQ %u\n",
       VAR_11, VAR_10->l_initial_irq);
 } else if (VAR_11 != VAR_10->l_bios_irq)
  FUNC_6(VAR_5,
     "BIOS IRQ %u for %d.%d.INT%c does not match previous BIOS IRQ %u\n",
      VAR_11, (int)VAR_12, VAR_8, VAR_9 + 'A',
      VAR_10->l_bios_irq);
 FUNC_1(VAR_2);
}
