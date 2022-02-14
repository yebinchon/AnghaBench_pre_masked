
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int delivery_mode; int trig_mode; scalar_t__ dest_mode; int vector; int dest_id; int dest; } ;
union kvm_ioapic_redirect_entry {TYPE_1__ fields; } ;
struct kvm_lapic_irq {int delivery_mode; int level; int dest_id; scalar_t__ dest_mode; scalar_t__ shorthand; int trig_mode; int vector; } ;
struct kvm_ioapic {TYPE_3__* kvm; union kvm_ioapic_redirect_entry* redirtbl; } ;
struct TYPE_6__ {TYPE_2__* bsp_vcpu; } ;
struct TYPE_5__ {int vcpu_id; } ;


 int FUNC_0 (char*,int ,scalar_t__,int,int ,int ) ;
 int FUNC_1 (TYPE_3__*,int *,struct kvm_lapic_irq*) ;

__attribute__((used)) static int FUNC_2(struct kvm_ioapic *VAR_0, int VAR_1)
{
 union kvm_ioapic_redirect_entry *VAR_2 = &VAR_0->redirtbl[VAR_1];
 struct kvm_lapic_irq VAR_3;

 FUNC_0("dest=%x dest_mode=%x delivery_mode=%x "
       "vector=%x trig_mode=%x\n",
       VAR_2->fields.dest, VAR_2->fields.dest_mode,
       VAR_2->fields.delivery_mode, VAR_2->fields.vector,
       VAR_2->fields.trig_mode);

 VAR_3.dest_id = VAR_2->fields.dest_id;
 VAR_3.vector = VAR_2->fields.vector;
 VAR_3.dest_mode = VAR_2->fields.dest_mode;
 VAR_3.trig_mode = VAR_2->fields.trig_mode;
 VAR_3.delivery_mode = VAR_2->fields.delivery_mode << 8;
 VAR_3.level = 1;
 VAR_3.shorthand = 0;
 return FUNC_1(VAR_0->kvm, ((void*)0), &VAR_3);
}
