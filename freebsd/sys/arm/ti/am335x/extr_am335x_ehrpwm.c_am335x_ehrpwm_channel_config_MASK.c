
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct am335x_ehrpwm_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct am335x_ehrpwm_softc*) ;
 int FUNC_1 (struct am335x_ehrpwm_softc*) ;
 int FUNC_2 (struct am335x_ehrpwm_softc*,int ,int ) ;
 int FUNC_3 (struct am335x_ehrpwm_softc*,int ) ;
 struct am335x_ehrpwm_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, u_int VAR_3, u_int VAR_4, u_int VAR_5)
{
 struct am335x_ehrpwm_softc *VAR_6;
 bool VAR_7;

 if (VAR_3 >= VAR_1)
  return (VAR_0);

 VAR_6 = FUNC_4(VAR_2);

 FUNC_0(VAR_6);
 VAR_7 = FUNC_3(VAR_6, VAR_4);
 if (VAR_7)
  FUNC_2(VAR_6, VAR_3, VAR_5);
 FUNC_1(VAR_6);

 return (VAR_7 ? 0 : VAR_0);
}
