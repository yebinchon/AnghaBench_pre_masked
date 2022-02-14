
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mv_gpio_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5, void *VAR_6)
{
 uint32_t VAR_7, VAR_8;
 struct mv_gpio_softc *VAR_9;
 VAR_9 = (struct mv_gpio_softc *)FUNC_2(VAR_5);

 FUNC_0();





 VAR_7 = FUNC_4(VAR_5, VAR_2);
 VAR_7 &= FUNC_4(VAR_5, VAR_3);





 VAR_8 = FUNC_4(VAR_5, VAR_1);
 VAR_8 &= FUNC_4(VAR_5, VAR_4);

 FUNC_3(VAR_5, VAR_7 | VAR_8, 0);

 FUNC_1();

 return (VAR_0);
}
