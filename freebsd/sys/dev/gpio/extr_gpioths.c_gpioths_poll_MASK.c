
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpioths_softc {int callout; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (scalar_t__) ;
 struct gpioths_softc* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct gpioths_softc *VAR_3;
 device_t VAR_4;

 VAR_4 = (device_t)VAR_2;
 VAR_3 = FUNC_2(VAR_4);

 FUNC_3(FUNC_1(VAR_4), VAR_4);
 FUNC_0(&VAR_3->callout, VAR_0 * VAR_1);
}
