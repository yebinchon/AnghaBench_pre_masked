
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct vmd_softc {int vmd_bhandle; int vmd_btag; } ;
typedef int device_t ;
typedef int bus_addr_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 struct vmd_softc* FUNC_4 (int ) ;

__attribute__((used)) static uint32_t
FUNC_5(device_t VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4, int VAR_5)
{

 struct vmd_softc *VAR_6;
 bus_addr_t VAR_7;

 VAR_7 = (VAR_1 << 20) + (VAR_2 << 15) + (VAR_3 << 12) + VAR_4;
 VAR_6 = FUNC_4(VAR_0);
 switch(VAR_5) {
 case 4:
  return (FUNC_3(VAR_6->vmd_btag, VAR_6->vmd_bhandle,
      VAR_7));
 case 2:
  return (FUNC_2(VAR_6->vmd_btag, VAR_6->vmd_bhandle,
      VAR_7));
 case 1:
  return (FUNC_1(VAR_6->vmd_btag, VAR_6->vmd_bhandle,
      VAR_7));
 default:
  FUNC_0(1, ("Invalid width requested"));
  return (0xffffffff);
 }
}
