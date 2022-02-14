
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct vga_resource {int * vr_res; } ;
typedef int device_t ;


 int FUNC_0 (int,char*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 struct vga_resource* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 void* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int ,int,int *) ;

void
FUNC_8(device_t VAR_5, void *VAR_6)
{
 struct vga_resource *VAR_7;
 int VAR_8;

 if (VAR_6 == ((void*)0)) {
  return;
 }


 if (FUNC_6(VAR_5)) {

  FUNC_4((vm_offset_t)VAR_6, VAR_4);

  return;
 }

 switch(FUNC_3(VAR_5, VAR_2, 1)) {
 case 129:
  VAR_8 = VAR_1;
  break;
 case 128:
  VAR_8 = 0;
  break;
 default:
  VAR_8 = VAR_0;
  break;
 }
 if (VAR_8 == 0)
  return;




 VAR_7 = FUNC_2(FUNC_1(VAR_5), VAR_8);
 FUNC_0(VAR_7->vr_res != ((void*)0), ("vga_pci_unmap_bios: bios not mapped"));
 FUNC_0(FUNC_5(VAR_7->vr_res) == VAR_6,
     ("vga_pci_unmap_bios: mismatch"));
 FUNC_7(VAR_5, ((void*)0), VAR_3, VAR_8,
     VAR_7->vr_res);
}
