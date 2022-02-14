
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vga_pci_softc {int * vga_msi_child; } ;
typedef int * device_t ;


 int VAR_0 ;
 struct vga_pci_softc* FUNC_0 (int *) ;
 int FUNC_1 (int *,int*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2, int *VAR_3)
{
 struct vga_pci_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4->vga_msi_child != ((void*)0))
  return (VAR_0);
 VAR_5 = FUNC_1(VAR_1, VAR_3);
 if (VAR_5 == 0)
  VAR_4->vga_msi_child = VAR_2;
 return (VAR_5);
}
