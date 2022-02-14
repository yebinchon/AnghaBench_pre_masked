
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int dev; } ;
struct fman_softc {TYPE_1__ sc_base; } ;
typedef int phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int fman_clock ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,char*,scalar_t__*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

uint32_t
FUNC_3(struct fman_softc *VAR_0)
{
 device_t VAR_1;
 phandle_t VAR_2;
 pcell_t VAR_3;

 VAR_1 = VAR_0->sc_base.dev;
 VAR_2 = FUNC_2(VAR_1);

 if ((FUNC_0(VAR_2, "clock-frequency", &VAR_3,
     sizeof(VAR_3)) <= 0) || (VAR_3 == 0)) {
  FUNC_1(VAR_1, "could not acquire correct frequency "
      "from DTS\n");

  return (0);
 }

 return ((uint32_t)VAR_3);
}
