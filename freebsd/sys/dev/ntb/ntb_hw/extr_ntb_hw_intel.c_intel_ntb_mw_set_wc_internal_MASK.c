
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int vm_memattr_t ;
struct ntb_softc {struct ntb_pci_bar_info* bar_info; } ;
struct ntb_pci_bar_info {int map_mode; int size; scalar_t__ vbase; } ;


 size_t FUNC_0 (struct ntb_softc*,unsigned int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct ntb_softc *VAR_0, unsigned VAR_1, vm_memattr_t VAR_2)
{
 struct ntb_pci_bar_info *VAR_3;
 int VAR_4;

 VAR_3 = &VAR_0->bar_info[FUNC_0(VAR_0, VAR_1)];
 if (VAR_3->map_mode == VAR_2)
  return (0);

 VAR_4 = FUNC_1((vm_offset_t)VAR_3->vbase, VAR_3->size, VAR_2);
 if (VAR_4 == 0)
  VAR_3->map_mode = VAR_2;

 return (VAR_4);
}
