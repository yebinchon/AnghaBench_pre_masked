
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_irq_busid {int busnum; scalar_t__ devnum; scalar_t__ funcnum; int irq; } ;
struct drm_device {int pci_bus; scalar_t__ pci_slot; scalar_t__ pci_func; int irq; } ;


 int FUNC_0 (char*,int,scalar_t__,scalar_t__,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_device*) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_1, struct drm_irq_busid *VAR_2)
{
 if ((VAR_2->busnum >> 8) != FUNC_1(VAR_1) ||
     (VAR_2->busnum & 0xff) != VAR_1->pci_bus ||
     VAR_2->devnum != VAR_1->pci_slot || VAR_2->funcnum != VAR_1->pci_func)
  return -VAR_0;

 VAR_2->irq = VAR_1->irq;

 FUNC_0("%d:%d:%d => IRQ %d\n", VAR_2->busnum, VAR_2->devnum, VAR_2->funcnum,
    VAR_2->irq);
 return 0;
}
