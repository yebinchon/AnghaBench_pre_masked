
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint64_t ;
struct vmx {struct vmcs* vmcs; } ;
struct vmcs {int dummy; } ;
struct vlapic_vtx {struct vmx* vmx; } ;
struct vlapic {size_t vcpuid; int vm; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vmcs*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct vmcs*) ;
 int FUNC_4 (int ,size_t,int *) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct vlapic *VAR_0, int VAR_1, bool VAR_2)
{
 struct vlapic_vtx *VAR_3;
 struct vmx *VAR_4;
 struct vmcs *VAR_5;
 uint64_t VAR_6, VAR_7;

 FUNC_0(VAR_1 >= 0 && VAR_1 <= 255, ("invalid vector %d", VAR_1));
 FUNC_0(!FUNC_4(VAR_0->vm, VAR_0->vcpuid, ((void*)0)),
     ("vmx_set_tmr: vcpu cannot be running"));

 VAR_3 = (struct vlapic_vtx *)VAR_0;
 VAR_4 = VAR_3->vmx;
 VAR_5 = &VAR_4->vmcs[VAR_0->vcpuid];
 VAR_6 = 1UL << (VAR_1 % 64);

 FUNC_3(VAR_5);
 VAR_7 = FUNC_5(FUNC_2(VAR_1));
 if (VAR_2)
  VAR_7 |= VAR_6;
 else
  VAR_7 &= ~VAR_6;
 FUNC_6(FUNC_2(VAR_1), VAR_7);
 FUNC_1(VAR_5);
}
