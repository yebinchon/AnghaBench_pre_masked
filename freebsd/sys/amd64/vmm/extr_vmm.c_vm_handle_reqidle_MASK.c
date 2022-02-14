
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm {struct vcpu* vcpu; } ;
struct vcpu {scalar_t__ reqidle; } ;


 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (struct vcpu*) ;
 int FUNC_2 (struct vcpu*) ;

__attribute__((used)) static int
FUNC_3(struct vm *VAR_0, int VAR_1, bool *VAR_2)
{
 struct vcpu *VAR_3 = &VAR_0->vcpu[VAR_1];

 FUNC_1(VAR_3);
 FUNC_0(VAR_3->reqidle, ("invalid vcpu reqidle %d", VAR_3->reqidle));
 VAR_3->reqidle = 0;
 FUNC_2(VAR_3);
 *VAR_2 = 1;
 return (0);
}
