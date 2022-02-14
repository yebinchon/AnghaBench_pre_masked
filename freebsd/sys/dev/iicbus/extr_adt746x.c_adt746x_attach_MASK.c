
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ich_arg; int ich_func; } ;
struct adt746x_softc {TYPE_1__ enum_hook; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 struct adt746x_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2)
{
 struct adt746x_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);

 VAR_3->enum_hook.ich_func = VAR_1;
 VAR_3->enum_hook.ich_arg = VAR_2;
 if (FUNC_0(&VAR_3->enum_hook) != 0)
  return (VAR_0);

 return (0);
}
