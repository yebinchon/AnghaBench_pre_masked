
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
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct chipc_gpio_softc*,int ) ;
 struct chipc_gpio_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_5, uint32_t VAR_6, uint32_t *VAR_7)
{
 struct chipc_gpio_softc *VAR_8;
 bool VAR_9;

 if (!FUNC_3(VAR_6))
  return (VAR_0);

 VAR_8 = FUNC_5(VAR_5);
 VAR_9 = 0;

 FUNC_0(VAR_8);

 switch (FUNC_4(VAR_8, VAR_6)) {
 case 130:
  VAR_9 = FUNC_1(VAR_8, VAR_6, VAR_1);
  break;

 case 129:
  VAR_9 = FUNC_1(VAR_8, VAR_6, VAR_2);
  break;

 case 128:
  VAR_9 = 0;
  break;
 }

 FUNC_2(VAR_8);

 *VAR_7 = VAR_9 ? VAR_3 : VAR_4;

 return (0);
}
