
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int fd; } ;
struct vm_isa_irq_trigger {int atpic_irq; int trigger; } ;
typedef enum vm_intr_trigger { ____Placeholder_vm_intr_trigger } vm_intr_trigger ;


 int VAR_0 ;
 int FUNC_0 (struct vm_isa_irq_trigger*,int) ;
 int FUNC_1 (int ,int ,struct vm_isa_irq_trigger*) ;

int
FUNC_2(struct vmctx *VAR_1, int VAR_2,
    enum vm_intr_trigger VAR_3)
{
 struct vm_isa_irq_trigger VAR_4;

 FUNC_0(&VAR_4, sizeof(struct vm_isa_irq_trigger));
 VAR_4.atpic_irq = VAR_2;
 VAR_4.trigger = VAR_3;

 return (FUNC_1(VAR_1->fd, VAR_0, &VAR_4));
}
