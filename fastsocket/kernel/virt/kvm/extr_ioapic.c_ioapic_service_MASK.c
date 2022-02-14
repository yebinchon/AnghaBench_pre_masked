
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ trig_mode; int remote_irr; int mask; } ;
union kvm_ioapic_redirect_entry {TYPE_1__ fields; } ;
struct kvm_ioapic {union kvm_ioapic_redirect_entry* redirtbl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct kvm_ioapic*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct kvm_ioapic *VAR_1, unsigned int VAR_2)
{
 union kvm_ioapic_redirect_entry *VAR_3;
 int VAR_4 = -1;

 VAR_3 = &VAR_1->redirtbl[VAR_2];

 if (!VAR_3->fields.mask) {
  VAR_4 = FUNC_0(VAR_1, VAR_2);
  if (VAR_4 && VAR_3->fields.trig_mode == VAR_0)
   VAR_3->fields.remote_irr = 1;
 }

 return VAR_4;
}
