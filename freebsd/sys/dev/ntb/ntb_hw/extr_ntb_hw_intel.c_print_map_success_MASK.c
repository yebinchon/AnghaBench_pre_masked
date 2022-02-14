
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct ntb_softc {int device; } ;
struct ntb_pci_bar_info {int size; int pbase; scalar_t__ vbase; int pci_resource_id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ,scalar_t__,char*,void*,void*,int ,char const*) ;

__attribute__((used)) static void
FUNC_2(struct ntb_softc *VAR_0, struct ntb_pci_bar_info *VAR_1,
    const char *VAR_2)
{

 FUNC_1(VAR_0->device,
     "Mapped BAR%d v:[%p-%p] p:[%p-%p] (0x%jx bytes) (%s)\n",
     FUNC_0(VAR_1->pci_resource_id), VAR_1->vbase,
     (char *)VAR_1->vbase + VAR_1->size - 1,
     (void *)VAR_1->pbase, (void *)(VAR_1->pbase + VAR_1->size - 1),
     (uintmax_t)VAR_1->size, VAR_2);
}
