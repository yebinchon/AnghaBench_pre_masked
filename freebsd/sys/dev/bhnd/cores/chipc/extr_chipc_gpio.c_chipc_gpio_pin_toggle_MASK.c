
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct chipc_gpio_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct chipc_gpio_softc*) ;



 int FUNC_1 (struct chipc_gpio_softc*,int ,int ) ;
 int FUNC_2 (struct chipc_gpio_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct chipc_gpio_softc*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct chipc_gpio_softc*,int ) ;
 struct chipc_gpio_softc* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3, uint32_t VAR_4)
{
 struct chipc_gpio_softc *VAR_5;
 bool VAR_6;
 int VAR_7;

 if (!FUNC_3(VAR_4))
  return (VAR_0);

 VAR_5 = FUNC_6(VAR_3);
 VAR_7 = 0;

 FUNC_0(VAR_5);

 switch (FUNC_5(VAR_5, VAR_4)) {
 case 130:
 case 128:
  VAR_7 = VAR_1;
  break;

 case 129:
  VAR_6 = FUNC_1(VAR_5, VAR_4, VAR_2);
  FUNC_4(VAR_5, VAR_4, VAR_2, !VAR_6);
  break;
 }

 FUNC_2(VAR_5);

 return (VAR_7);
}
