
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct vhpet {int isr; int vm; TYPE_1__* timer; } ;
struct TYPE_2__ {int cap_config; scalar_t__ comprate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (int ,char*,int,int,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int*,int,int) ;
 int FUNC_6 (struct vhpet*,int) ;
 scalar_t__ FUNC_7 (struct vhpet*,int) ;
 int FUNC_8 (struct vhpet*,int) ;
 int FUNC_9 (struct vhpet*,int) ;
 scalar_t__ FUNC_10 (struct vhpet*,int) ;
 int FUNC_11 (int ,int) ;

__attribute__((used)) static void
FUNC_12(struct vhpet *VAR_3, int VAR_4, uint64_t VAR_5,
    uint64_t VAR_6)
{
 bool VAR_7;
 int VAR_8, VAR_9;
 uint32_t VAR_10;
 uint64_t VAR_11, VAR_12;

 if (FUNC_10(VAR_3, VAR_4) ||
     FUNC_7(VAR_3, VAR_4)) {
  if (VAR_3->isr & (1 << VAR_4))
   FUNC_4("vhpet timer %d isr should not be asserted", VAR_4);
 }
 VAR_8 = FUNC_9(VAR_3, VAR_4);
 VAR_11 = VAR_3->timer[VAR_4].cap_config;

 VAR_12 = VAR_11;
 FUNC_5(&VAR_12, VAR_5, VAR_6);
 VAR_12 &= ~(VAR_0 | VAR_1);
 VAR_12 |= VAR_11 & VAR_0;

 if (VAR_12 == VAR_11)
  return;

 VAR_3->timer[VAR_4].cap_config = VAR_12;
 FUNC_2(VAR_3->vm, "hpet t%d cap_config set to 0x%016x", VAR_4, VAR_12);






 VAR_10 = VAR_3->timer[VAR_4].cap_config >> 32;
 VAR_9 = FUNC_9(VAR_3, VAR_4);
 if (VAR_9 != 0 && (VAR_10 & (1 << VAR_9)) == 0) {
  FUNC_3(VAR_3->vm, "hpet t%d configured invalid irq %d, "
      "allowed_irqs 0x%08x", VAR_4, VAR_9, VAR_10);
  VAR_9 = 0;
  VAR_3->timer[VAR_4].cap_config &= ~VAR_2;
 }

 if (!FUNC_6(VAR_3, VAR_4))
  VAR_3->timer[VAR_4].comprate = 0;
 if (VAR_3->isr & (1 << VAR_4)) {
  FUNC_0(VAR_8 != 0, ("timer %d isr asserted to ioapic pin %d",
      VAR_4, VAR_8));
  if (!FUNC_8(VAR_3, VAR_4))
   VAR_7 = 1;
  else if (FUNC_10(VAR_3, VAR_4))
   VAR_7 = 1;
  else if (FUNC_7(VAR_3, VAR_4))
   VAR_7 = 1;
  else if (FUNC_9(VAR_3, VAR_4) != VAR_8)
   VAR_7 = 1;
  else
   VAR_7 = 0;

  if (VAR_7) {
   FUNC_1(VAR_3->vm, "hpet t%d isr cleared due to "
       "configuration change", VAR_4);
   FUNC_11(VAR_3->vm, VAR_8);
   VAR_3->isr &= ~(1 << VAR_4);
  }
 }
}
