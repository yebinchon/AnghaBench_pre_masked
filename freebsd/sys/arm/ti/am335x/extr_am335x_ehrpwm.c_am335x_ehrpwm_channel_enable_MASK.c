
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
 int FUNC_2 (struct am335x_ehrpwm_softc*,int ,int) ;
 struct am335x_ehrpwm_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, u_int VAR_3, bool VAR_4)
{
 struct am335x_ehrpwm_softc *VAR_5;

 if (VAR_3 >= VAR_1)
  return (VAR_0);

 VAR_5 = FUNC_3(VAR_2);

 FUNC_0(VAR_5);
 FUNC_2(VAR_5, VAR_3, VAR_4);
 FUNC_1(VAR_5);

 return (0);
}
