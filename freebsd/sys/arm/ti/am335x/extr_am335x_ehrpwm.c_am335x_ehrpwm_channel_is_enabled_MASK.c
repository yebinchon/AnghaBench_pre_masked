
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct am335x_ehrpwm_softc {TYPE_1__* sc_channels; } ;
typedef int device_t ;
struct TYPE_2__ {int enabled; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct am335x_ehrpwm_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, u_int VAR_3, bool *VAR_4)
{
 struct am335x_ehrpwm_softc *VAR_5;

 if (VAR_3 >= VAR_1)
  return (VAR_0);

 VAR_5 = FUNC_0(VAR_2);

 *VAR_4 = VAR_5->sc_channels[VAR_3].enabled;

 return (0);
}
