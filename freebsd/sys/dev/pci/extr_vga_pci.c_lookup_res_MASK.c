
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vga_resource {int dummy; } ;
struct vga_pci_softc {struct vga_resource* vga_bars; struct vga_resource vga_bios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static struct vga_resource *
FUNC_1(struct vga_pci_softc *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3 == VAR_0)
  return (&VAR_2->vga_bios);
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 >= 0 && VAR_4 <= VAR_1)
  return (&VAR_2->vga_bars[VAR_4]);
 return (((void*)0));
}
