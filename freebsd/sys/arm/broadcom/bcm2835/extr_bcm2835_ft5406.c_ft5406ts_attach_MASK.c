
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ft5406ts_softc* ich_arg; int ich_func; } ;
struct ft5406ts_softc {TYPE_1__ sc_init_hook; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct ft5406ts_softc*) ;
 int FUNC_1 (struct ft5406ts_softc*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 struct ft5406ts_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct ft5406ts_softc *VAR_3;


 VAR_3 = FUNC_3(VAR_2);
 VAR_3->sc_dev = VAR_2;


 VAR_3->sc_init_hook.ich_func = VAR_1;
 VAR_3->sc_init_hook.ich_arg = VAR_3;

 FUNC_1(VAR_3);

 if (FUNC_2(&VAR_3->sc_init_hook) != 0) {
  FUNC_4(VAR_2, "config_intrhook_establish failed\n");
  FUNC_0(VAR_3);
  return (VAR_0);
 }

 return (0);
}
