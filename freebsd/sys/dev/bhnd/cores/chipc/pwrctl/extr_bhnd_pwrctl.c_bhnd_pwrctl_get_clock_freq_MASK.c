
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bhnd_pwrctl_softc {int dummy; } ;
typedef int device_t ;
typedef int bhnd_clock ;






 int FUNC_0 (struct bhnd_pwrctl_softc*) ;
 int FUNC_1 (struct bhnd_pwrctl_softc*) ;
 int VAR_0 ;
 int FUNC_2 (struct bhnd_pwrctl_softc*) ;
 struct bhnd_pwrctl_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, bhnd_clock VAR_2, u_int *VAR_3)
{
 struct bhnd_pwrctl_softc *VAR_4 = FUNC_3(VAR_1);

 switch (VAR_2) {
 case 131:
  FUNC_0(VAR_4);
  *VAR_3 = FUNC_2(VAR_4);
  FUNC_1(VAR_4);

  return (0);

 case 129:
 case 128:
 case 130:
 default:
  return (VAR_0);
 }
}
