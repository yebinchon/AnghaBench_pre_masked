
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ich_arg; int ich_func; } ;
struct twl_clks_softc {TYPE_1__ sc_init_hook; int sc_clks_list; int sc_pdev; void* sc_dev; } ;
typedef void* device_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct twl_clks_softc*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (void*) ;
 struct twl_clks_softc* FUNC_4 (void*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct twl_clks_softc *VAR_3;

 VAR_3 = FUNC_4(VAR_2);
 VAR_3->sc_dev = VAR_2;
 VAR_3->sc_pdev = FUNC_3(VAR_2);

 FUNC_1(VAR_3);

 FUNC_0(&VAR_3->sc_clks_list);


 VAR_3->sc_init_hook.ich_func = VAR_1;
 VAR_3->sc_init_hook.ich_arg = VAR_2;

 if (FUNC_2(&VAR_3->sc_init_hook) != 0)
  return (VAR_0);

 return (0);
}
