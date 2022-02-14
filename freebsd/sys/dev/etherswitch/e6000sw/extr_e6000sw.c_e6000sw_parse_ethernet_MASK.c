
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int switch_eth_handle ;
typedef scalar_t__ phandle_t ;
struct TYPE_4__ {int cpuports_mask; int dev; } ;
typedef TYPE_1__ e6000sw_softc_t ;


 scalar_t__ FUNC_0 (scalar_t__,char*,void*,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int) ;

__attribute__((used)) static int
FUNC_4(e6000sw_softc_t *VAR_0, phandle_t VAR_1, uint32_t VAR_2) {
 phandle_t VAR_3, VAR_4;

 if (FUNC_0(VAR_1, "ethernet", (void*)&VAR_4,
     sizeof(VAR_4)) > 0) {
  if (VAR_4 > 0) {
   VAR_3 = FUNC_1(VAR_4);

   FUNC_2(VAR_0->dev, "CPU port at %d\n", VAR_2);
   VAR_0->cpuports_mask |= (1 << VAR_2);

   return (FUNC_3(VAR_0, VAR_3, VAR_2));
  } else
   FUNC_2(VAR_0->dev,
    "Port %d has ethernet property but it points "
    "to an invalid location\n", VAR_2);
 }

 return (0);
}
