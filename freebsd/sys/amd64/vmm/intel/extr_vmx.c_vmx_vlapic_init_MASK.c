
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmx {int * pir_desc; int * apic_page; int vm; } ;
struct vlapic_vtx {struct vmx* vmx; int * pir_desc; } ;
struct TYPE_2__ {int post_intr; int enable_x2apic_mode; int set_tmr; int intr_accepted; int pending_intr; int set_intr_ready; } ;
struct vlapic {int vcpuid; TYPE_1__ ops; struct LAPIC* apic_page; int vm; } ;
struct LAPIC {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vlapic* FUNC_0 (int,int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct vlapic*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static struct vlapic *
FUNC_2(void *VAR_11, int VAR_12)
{
 struct vmx *VAR_13;
 struct vlapic *VAR_14;
 struct vlapic_vtx *VAR_15;

 VAR_13 = VAR_11;

 VAR_14 = FUNC_0(sizeof(struct vlapic_vtx), VAR_0, VAR_1 | VAR_2);
 VAR_14->vm = VAR_13->vm;
 VAR_14->vcpuid = VAR_12;
 VAR_14->apic_page = (struct LAPIC *)&VAR_13->apic_page[VAR_12];

 VAR_15 = (struct vlapic_vtx *)VAR_14;
 VAR_15->pir_desc = &VAR_13->pir_desc[VAR_12];
 VAR_15->vmx = VAR_13;

 if (VAR_4) {
  VAR_14->ops.set_intr_ready = VAR_9;
  VAR_14->ops.pending_intr = VAR_7;
  VAR_14->ops.intr_accepted = VAR_6;
  VAR_14->ops.set_tmr = VAR_10;
  VAR_14->ops.enable_x2apic_mode = VAR_5;
 }

 if (VAR_3)
  VAR_14->ops.post_intr = VAR_8;

 FUNC_1(VAR_14);

 return (VAR_14);
}
