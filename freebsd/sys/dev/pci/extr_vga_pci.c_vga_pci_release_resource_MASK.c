
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vga_resource {int vr_refs; struct resource* vr_res; } ;
struct resource {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;


 int FUNC_1 (int ,int,int,struct resource*) ;
 int FUNC_2 (int ) ;
 struct vga_resource* FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, device_t VAR_2, int VAR_3, int VAR_4,
    struct resource *VAR_5)
{
 struct vga_resource *VAR_6;
 int VAR_7;

 switch (VAR_3) {
 case 128:
 case 129:




  VAR_6 = FUNC_3(FUNC_2(VAR_1), VAR_4);
  if (VAR_6 == ((void*)0))
   return (VAR_0);
  if (VAR_6->vr_res == ((void*)0))
   return (VAR_0);
  FUNC_0(VAR_6->vr_res == VAR_5, ("vga_pci resource mismatch"));
  if (VAR_6->vr_refs > 1) {
   VAR_6->vr_refs--;
   return (0);
  }
  FUNC_0(VAR_6->vr_refs > 0,
      ("vga_pci resource reference count underflow"));
  VAR_7 = FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5);
  if (VAR_7 == 0) {
   VAR_6->vr_res = ((void*)0);
   VAR_6->vr_refs = 0;
  }
  return (VAR_7);
 }

 return (FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5));
}
