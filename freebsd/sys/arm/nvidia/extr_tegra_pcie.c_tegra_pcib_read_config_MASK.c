
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct tegra_pcib_softc {int bus_tag; int cfg_handle; TYPE_1__** ports; } ;
typedef int device_t ;
typedef int bus_space_handle_t ;
struct TYPE_2__ {scalar_t__ port_idx; int cfg_handle; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int) ;
 struct tegra_pcib_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct tegra_pcib_softc*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static uint32_t
FUNC_4(device_t VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
    u_int VAR_5, int VAR_6)
{
 struct tegra_pcib_softc *VAR_7;
 bus_space_handle_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 int VAR_11, VAR_12;

 VAR_7 = FUNC_2(VAR_1);
 if (VAR_2 == 0) {
  if (VAR_4 != 0)
   return (0xFFFFFFFF);
  for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
   if ((VAR_7->ports[VAR_12] != ((void*)0)) &&
       (VAR_7->ports[VAR_12]->port_idx == VAR_3)) {
    VAR_8 = VAR_7->ports[VAR_12]->cfg_handle;
    VAR_9 = VAR_5 & 0xFFF;
    break;
   }
  }
  if (VAR_12 >= VAR_0)
   return (0xFFFFFFFF);
 } else {
  VAR_11 = FUNC_3(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_11 != 0)
   return (0xFFFFFFFF);
  VAR_8 = VAR_7->cfg_handle;
  VAR_9 = FUNC_0(VAR_5);
 }

 VAR_10 = FUNC_1(VAR_7->bus_tag, VAR_8, VAR_9 & ~3);
 switch (VAR_6) {
 case 4:
  break;
 case 2:
  if (VAR_9 & 3)
   VAR_10 >>= 16;
  VAR_10 &= 0xffff;
  break;
 case 1:
  VAR_10 >>= ((VAR_9 & 3) << 3);
  VAR_10 &= 0xff;
  break;
 }
 return VAR_10;
}
