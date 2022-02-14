
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ich_arg; int ich_func; } ;
struct twl_softc {int * sc_clks; int * sc_vreg; TYPE_1__ sc_scan_hook; void* sc_dev; } ;
typedef void* device_t ;


 int VAR_0 ;
 int FUNC_0 (struct twl_softc*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (void*,char*,int) ;
 struct twl_softc* FUNC_4 (void*) ;
 int FUNC_5 (void*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct twl_softc *VAR_3;

 VAR_3 = FUNC_4(VAR_2);
 VAR_3->sc_dev = VAR_2;

 FUNC_0(VAR_3);




 VAR_3->sc_scan_hook.ich_func = VAR_1;
 VAR_3->sc_scan_hook.ich_arg = VAR_2;

 if (FUNC_2(&VAR_3->sc_scan_hook) != 0)
  return (VAR_0);


 if ((VAR_3->sc_vreg = FUNC_3(VAR_2, "twl_vreg", -1)) == ((void*)0))
  FUNC_5(VAR_2, "could not allocate twl_vreg instance\n");
 if ((VAR_3->sc_clks = FUNC_3(VAR_2, "twl_clks", -1)) == ((void*)0))
  FUNC_5(VAR_2, "could not allocate twl_clks instance\n");

 return (FUNC_1(VAR_2));
}
