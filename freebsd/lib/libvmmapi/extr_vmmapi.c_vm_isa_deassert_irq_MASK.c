
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmctx {int fd; } ;
struct vm_isa_irq {int atpic_irq; int ioapic_irq; } ;


 int VAR_0 ;
 int FUNC_0 (struct vm_isa_irq*,int) ;
 int FUNC_1 (int ,int ,struct vm_isa_irq*) ;

int
FUNC_2(struct vmctx *VAR_1, int VAR_2, int VAR_3)
{
 struct vm_isa_irq VAR_4;

 FUNC_0(&VAR_4, sizeof(struct vm_isa_irq));
 VAR_4.atpic_irq = VAR_2;
 VAR_4.ioapic_irq = VAR_3;

 return (FUNC_1(VAR_1->fd, VAR_0, &VAR_4));
}
