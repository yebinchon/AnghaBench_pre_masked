
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct gpioiic_softc {int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 struct gpioiic_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, u_char VAR_2, u_char VAR_3, u_char *VAR_4)
{
 struct gpioiic_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 FUNC_1(VAR_5->sc_dev);

 return (VAR_0);
}
