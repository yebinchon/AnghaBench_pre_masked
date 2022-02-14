
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct e6060sw_softc {int numports; scalar_t__ vlan_mode; scalar_t__ smi_offset; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct e6060sw_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_3)
{
 struct e6060sw_softc *VAR_4;
 uint32_t VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_4 = FUNC_2(VAR_3);

 for (VAR_6 = 0; VAR_6 <= VAR_4->numports; VAR_6++) {
  VAR_5 = (1 << (VAR_4->numports + 1)) - 1;
  VAR_5 &= ~(1 << VAR_6);
  if (VAR_4->vlan_mode == VAR_1) {
   VAR_7 = VAR_6 << 12;
  } else if (VAR_4->vlan_mode == 0) {
   VAR_7 = 1 << 8;
  } else {
   VAR_7 = 0;
  }
  VAR_7 |= VAR_5;
  FUNC_0(FUNC_1(VAR_3),
      VAR_0 + VAR_4->smi_offset + VAR_6, VAR_2, VAR_7);
 }
}
