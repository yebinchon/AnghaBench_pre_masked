
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct vmd_softc {int vmd_bhandle; int vmd_btag; } ;
typedef int device_t ;
typedef int bus_addr_t ;


 void FUNC_0 (int ,int ,int,int ) ;
 void FUNC_1 (int ,int ,int,int ) ;
 void FUNC_2 (int ,int ,int,int ) ;
 struct vmd_softc* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_0, u_int VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
    uint32_t VAR_5, int VAR_6)
{

 struct vmd_softc *VAR_7;
 bus_addr_t VAR_8;

 VAR_8 = (VAR_1 << 20) + (VAR_2 << 15) + (VAR_3 << 12) + VAR_4;
 VAR_7 = FUNC_3(VAR_0);

 switch(VAR_6) {
 case 4:
  return (FUNC_2(VAR_7->vmd_btag, VAR_7->vmd_bhandle,
      VAR_8, VAR_5));
 case 2:
  return (FUNC_1(VAR_7->vmd_btag, VAR_7->vmd_bhandle,
      VAR_8, VAR_5));
 case 1:
  return (FUNC_0(VAR_7->vmd_btag, VAR_7->vmd_bhandle,
      VAR_8, VAR_5));
 default:
  FUNC_4("Failed to specific width");
 }
}
