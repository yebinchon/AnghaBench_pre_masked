
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vector; int trig_mode; int mask; scalar_t__ remote_irr; } ;
union kvm_ioapic_redirect_entry {TYPE_1__ fields; } ;
struct kvm_ioapic {int irr; int lock; int kvm; union kvm_ioapic_redirect_entry* redirtbl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct kvm_ioapic*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct kvm_ioapic *VAR_3, int VAR_4,
         int VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  union kvm_ioapic_redirect_entry *VAR_7 = &VAR_3->redirtbl[VAR_6];

  if (VAR_7->fields.vector != VAR_4)
   continue;
  FUNC_4(&VAR_3->lock);
  FUNC_2(VAR_3->kvm, VAR_2, VAR_6);
  FUNC_3(&VAR_3->lock);

  if (VAR_5 != VAR_0)
   continue;

  FUNC_0(VAR_7->fields.trig_mode == VAR_0);
  VAR_7->fields.remote_irr = 0;
  if (!VAR_7->fields.mask && (VAR_3->irr & (1 << VAR_6)))
   FUNC_1(VAR_3, VAR_6);
 }
}
