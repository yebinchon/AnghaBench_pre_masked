
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mv_gpio_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int ) ;
 scalar_t__ FUNC_3 (int ,int,int) ;

__attribute__((used)) static void
FUNC_4(device_t VAR_0, int VAR_1)
{
 uint8_t VAR_2;
 struct mv_gpio_softc *VAR_3;
 VAR_3 = (struct mv_gpio_softc *)FUNC_1(VAR_0);

 FUNC_0();

 VAR_2 = (FUNC_3(VAR_0, VAR_1, 1) ? 1 : 0);

 if (VAR_2)
  FUNC_2(VAR_0, VAR_1, 1, 0);
 else
  FUNC_2(VAR_0, VAR_1, 0, 0);
}
