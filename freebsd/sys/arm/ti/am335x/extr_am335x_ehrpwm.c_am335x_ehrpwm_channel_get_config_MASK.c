
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct am335x_ehrpwm_softc {size_t sc_period; TYPE_1__* sc_channels; } ;
typedef int device_t ;
struct TYPE_2__ {size_t duty; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct am335x_ehrpwm_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, u_int VAR_3,
    u_int *VAR_4, u_int *VAR_5)
{
 struct am335x_ehrpwm_softc *VAR_6;

 if (VAR_3 >= VAR_1)
  return (VAR_0);

 VAR_6 = FUNC_0(VAR_2);
 *VAR_4 = VAR_6->sc_period;
 *VAR_5 = VAR_6->sc_channels[VAR_3].duty;
 return (0);
}
