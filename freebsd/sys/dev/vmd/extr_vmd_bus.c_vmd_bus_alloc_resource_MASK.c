
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct vmd_softc {struct resource** vmd_regs_resource; } ;
struct resource {int dummy; } ;
typedef int rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct vmd_softc* FUNC_1 (int ) ;
 struct resource* FUNC_2 (int ,int ,int,int*,int ,int ,int ,int ) ;

__attribute__((used)) static struct resource *
FUNC_3(device_t VAR_3, device_t VAR_4, int VAR_5, int *VAR_6,
    rman_res_t VAR_7, rman_res_t VAR_8, rman_res_t VAR_9, u_int VAR_10)
{
 struct vmd_softc *VAR_11;

 VAR_11 = FUNC_1(FUNC_0(VAR_3));

 if (VAR_5 == VAR_2) {

  if (*VAR_6 == VAR_0) {
   return (VAR_11->vmd_regs_resource[1]);
  } else if (*VAR_6 == VAR_1) {
   return (VAR_11->vmd_regs_resource[2]);
  } else {
   return (VAR_11->vmd_regs_resource[2]);
  }
 }
 return (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
    VAR_9, VAR_10));
}
