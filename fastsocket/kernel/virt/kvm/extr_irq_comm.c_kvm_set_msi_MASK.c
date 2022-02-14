
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_lapic_irq {int dest_id; int vector; int dest_mode; int trig_mode; int delivery_mode; int level; scalar_t__ shorthand; } ;
struct TYPE_2__ {int address_lo; int data; } ;
struct kvm_kernel_irq_routing_entry {TYPE_1__ msi; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct kvm*,int *,struct kvm_lapic_irq*) ;
 int FUNC_1 (int,int) ;

int FUNC_2(struct kvm_kernel_irq_routing_entry *VAR_6,
  struct kvm *VAR_7, int VAR_8, int VAR_9)
{
 struct kvm_lapic_irq VAR_10;

 if (!VAR_9)
  return -1;

 FUNC_1(VAR_6->msi.address_lo, VAR_6->msi.data);

 VAR_10.dest_id = (VAR_6->msi.address_lo &
   VAR_0) >> VAR_1;
 VAR_10.vector = (VAR_6->msi.data &
   VAR_4) >> VAR_5;
 VAR_10.dest_mode = (1 << VAR_2) & VAR_6->msi.address_lo;
 VAR_10.trig_mode = (1 << VAR_3) & VAR_6->msi.data;
 VAR_10.delivery_mode = VAR_6->msi.data & 0x700;
 VAR_10.level = 1;
 VAR_10.shorthand = 0;


 return FUNC_0(VAR_7, ((void*)0), &VAR_10);
}
