
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct chipc_gpio_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct chipc_gpio_softc*) ;



 int FUNC_1 (struct chipc_gpio_softc*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct chipc_gpio_softc*,int,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_4 (struct chipc_gpio_softc*,int) ;
 struct chipc_gpio_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, uint32_t VAR_4, uint32_t VAR_5)
{
 struct chipc_gpio_softc *VAR_6;
 bool VAR_7;
 int VAR_8;

 VAR_6 = FUNC_5(VAR_3);
 VAR_8 = 0;

 if (!FUNC_2(VAR_4))
  return (VAR_0);

 switch (VAR_5) {
 case 129:
  VAR_7 = 1;
  break;
 case 128:
  VAR_7 = 0;
  break;
 default:
  return (VAR_0);
 }

 FUNC_0(VAR_6);

 switch (FUNC_4(VAR_6, VAR_4)) {
 case 132:
 case 130:
  VAR_8 = VAR_1;
  break;

 case 131:
  FUNC_3(VAR_6, VAR_4, VAR_2, VAR_7);
  break;
 }

 FUNC_1(VAR_6);

 return (VAR_8);
}
