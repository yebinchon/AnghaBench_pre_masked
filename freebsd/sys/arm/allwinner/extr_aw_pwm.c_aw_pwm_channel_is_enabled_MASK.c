
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct aw_pwm_softc {int enabled; } ;
typedef int device_t ;


 struct aw_pwm_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0, u_int VAR_1, bool *VAR_2)
{
 struct aw_pwm_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_0);

 *VAR_2 = VAR_3->enabled;

 return (0);
}
