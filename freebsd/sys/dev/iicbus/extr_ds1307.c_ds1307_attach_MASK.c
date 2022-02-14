
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ich_arg; int ich_func; } ;
struct ds1307_softc {int sc_mcp7941x; TYPE_1__ enum_hook; void* sc_dev; } ;
typedef void* device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 struct ds1307_softc* FUNC_1 (void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (void*,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct ds1307_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 VAR_3->sc_dev = VAR_2;
 VAR_3->enum_hook.ich_func = VAR_1;
 VAR_3->enum_hook.ich_arg = VAR_2;
 if (FUNC_0(&VAR_3->enum_hook) != 0)
  return (VAR_0);

 return (0);
}
