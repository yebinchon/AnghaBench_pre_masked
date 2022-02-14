
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mmc_softc* ich_arg; int ich_func; } ;
struct mmc_softc {TYPE_1__ config_intrhook; int dev; } ;
typedef int device_t ;


 int FUNC_0 (struct mmc_softc*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 struct mmc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct mmc_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 VAR_2->dev = VAR_1;
 FUNC_0(VAR_2);


 VAR_2->config_intrhook.ich_func = VAR_0;
 VAR_2->config_intrhook.ich_arg = VAR_2;
 if (FUNC_1(&VAR_2->config_intrhook) != 0)
  FUNC_3(VAR_1, "config_intrhook_establish failed\n");
 return (0);
}
