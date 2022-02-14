
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vga_pci_softc {scalar_t__ vga_msi_child; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 struct vga_pci_softc* FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int,int const*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2, int VAR_3,
    const u_int *VAR_4)
{
 struct vga_pci_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 if (VAR_5->vga_msi_child != VAR_2)
  return (VAR_0);
 return (FUNC_1(VAR_1, VAR_3, VAR_4));
}
