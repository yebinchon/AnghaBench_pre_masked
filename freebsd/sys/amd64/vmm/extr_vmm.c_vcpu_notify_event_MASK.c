
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {struct vcpu* vcpu; } ;
struct vcpu {int dummy; } ;


 int FUNC_0 (struct vcpu*) ;
 int FUNC_1 (struct vcpu*,int) ;
 int FUNC_2 (struct vcpu*) ;

void
FUNC_3(struct vm *VAR_0, int VAR_1, bool VAR_2)
{
 struct vcpu *VAR_3 = &VAR_0->vcpu[VAR_1];

 FUNC_0(VAR_3);
 FUNC_1(VAR_3, VAR_2);
 FUNC_2(VAR_3);
}
