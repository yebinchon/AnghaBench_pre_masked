
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kvm_ioapic {scalar_t__ id; scalar_t__ irr; scalar_t__ ioregsel; int base_address; TYPE_2__* redirtbl; } ;
struct TYPE_3__ {int mask; } ;
struct TYPE_4__ {TYPE_1__ fields; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct kvm_ioapic*) ;

void FUNC_1(struct kvm_ioapic *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  VAR_2->redirtbl[VAR_3].fields.mask = 1;
 VAR_2->base_address = VAR_0;
 VAR_2->ioregsel = 0;
 VAR_2->irr = 0;
 VAR_2->id = 0;
 FUNC_0(VAR_2);
}
