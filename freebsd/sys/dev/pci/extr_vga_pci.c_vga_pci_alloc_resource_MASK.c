
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vga_resource {struct resource* vr_res; int vr_refs; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;




 struct resource* FUNC_0 (int ,int,int*,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct vga_resource* FUNC_2 (int ,int) ;

__attribute__((used)) static struct resource *
FUNC_3(device_t VAR_0, device_t VAR_1, int VAR_2, int *VAR_3,
    rman_res_t VAR_4, rman_res_t VAR_5, rman_res_t VAR_6, u_int VAR_7)
{
 struct vga_resource *VAR_8;

 switch (VAR_2) {
 case 128:
 case 129:




  VAR_8 = FUNC_2(FUNC_1(VAR_0), *VAR_3);
  if (VAR_8 == ((void*)0))
   return (((void*)0));
  if (VAR_8->vr_res == ((void*)0))
   VAR_8->vr_res = FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4,
       VAR_5, VAR_6, VAR_7);
  if (VAR_8->vr_res != ((void*)0))
   VAR_8->vr_refs++;
  return (VAR_8->vr_res);
 }
 return (FUNC_0(VAR_0, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7));
}
