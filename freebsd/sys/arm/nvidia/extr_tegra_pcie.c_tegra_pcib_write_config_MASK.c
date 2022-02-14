
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
 int FUNC_2 (int ,int ,int,int) ;
 struct tegra_pcib_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct tegra_pcib_softc*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1, u_int VAR_2, u_int VAR_3, u_int VAR_4,
    u_int VAR_5, uint32_t VAR_6, int VAR_7)
{
 struct tegra_pcib_softc *VAR_8;
 bus_space_handle_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 int VAR_12, VAR_13;

 VAR_8 = FUNC_3(VAR_1);
 if (VAR_2 == 0) {
  if (VAR_4 != 0)
   return;
  for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
   if ((VAR_8->ports[VAR_13] != ((void*)0)) &&
       (VAR_8->ports[VAR_13]->port_idx == VAR_3)) {
    VAR_9 = VAR_8->ports[VAR_13]->cfg_handle;
    VAR_10 = VAR_5 & 0xFFF;
    break;
   }
  }
  if (VAR_13 >= VAR_0)
   return;
 } else {
  VAR_12 = FUNC_4(VAR_8, VAR_2, VAR_3, VAR_4, VAR_5);
  if (VAR_12 != 0)
   return;
  VAR_9 = VAR_8->cfg_handle;
  VAR_10 = FUNC_0(VAR_5);
 }

 switch (VAR_7) {
 case 4:
  FUNC_2(VAR_8->bus_tag, VAR_9, VAR_10, VAR_6);
  break;
 case 2:
  VAR_11 = FUNC_1(VAR_8->bus_tag, VAR_9, VAR_10 & ~3);
  VAR_11 &= ~(0xffff << ((VAR_10 & 3) << 3));
  VAR_11 |= ((VAR_6 & 0xffff) << ((VAR_10 & 3) << 3));
  FUNC_2(VAR_8->bus_tag, VAR_9, VAR_10 & ~3, VAR_11);
  break;
 case 1:
  VAR_11 = FUNC_1(VAR_8->bus_tag, VAR_9, VAR_10 & ~3);
  VAR_11 &= ~(0xff << ((VAR_10 & 3) << 3));
  VAR_11 |= ((VAR_6 & 0xff) << ((VAR_10 & 3) << 3));
  FUNC_2(VAR_8->bus_tag, VAR_9, VAR_10 & ~3, VAR_11);
  break;
 }
}
