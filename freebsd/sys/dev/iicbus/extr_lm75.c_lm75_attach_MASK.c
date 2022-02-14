
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ich_arg; int ich_func; } ;
struct lm75_softc {TYPE_1__ enum_hook; int sc_addr; void* sc_dev; } ;
typedef void* device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 struct lm75_softc* FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct lm75_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 VAR_3->sc_dev = VAR_2;
 VAR_3->sc_addr = FUNC_2(VAR_2);

 VAR_3->enum_hook.ich_func = VAR_1;
 VAR_3->enum_hook.ich_arg = VAR_2;





 if (FUNC_0(&VAR_3->enum_hook) != 0)
  return (VAR_0);

 return (0);
}
