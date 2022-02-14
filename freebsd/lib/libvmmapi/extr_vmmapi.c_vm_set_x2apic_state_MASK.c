
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int x2apic ;
struct vmctx {int fd; } ;
struct vm_x2apic {int cpuid; int state; } ;
typedef enum x2apic_state { ____Placeholder_x2apic_state } x2apic_state ;


 int VAR_0 ;
 int FUNC_0 (struct vm_x2apic*,int) ;
 int FUNC_1 (int ,int ,struct vm_x2apic*) ;

int
FUNC_2(struct vmctx *VAR_1, int VAR_2, enum x2apic_state VAR_3)
{
 int VAR_4;
 struct vm_x2apic VAR_5;

 FUNC_0(&VAR_5, sizeof(VAR_5));
 VAR_5.cpuid = VAR_2;
 VAR_5.state = VAR_3;

 VAR_4 = FUNC_1(VAR_1->fd, VAR_0, &VAR_5);

 return (VAR_4);
}
