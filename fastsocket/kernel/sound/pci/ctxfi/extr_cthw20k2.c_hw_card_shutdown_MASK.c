
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw {int irq; long mem_base; int pci; scalar_t__ io_base; } ;


 int FUNC_0 (int,struct hw*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct hw *VAR_0)
{
 if (VAR_0->irq >= 0)
  FUNC_0(VAR_0->irq, VAR_0);

 VAR_0->irq = -1;

 if (VAR_0->mem_base)
  FUNC_1((void *)VAR_0->mem_base);

 VAR_0->mem_base = (unsigned long)((void*)0);

 if (VAR_0->io_base)
  FUNC_3(VAR_0->pci);

 VAR_0->io_base = 0;

 FUNC_2(VAR_0->pci);

 return 0;
}
