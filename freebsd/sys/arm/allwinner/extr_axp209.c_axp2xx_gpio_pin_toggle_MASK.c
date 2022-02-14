
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct axp2xx_softc {size_t npins; TYPE_1__* pins; } ;
typedef int device_t ;
struct TYPE_2__ {int ctrl_reg; } ;




 int VAR_0 ;
 int FUNC_0 (struct axp2xx_softc*) ;
 int FUNC_1 (struct axp2xx_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int) ;
 struct axp2xx_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, uint32_t VAR_4)
{
 struct axp2xx_softc *VAR_5;
 uint8_t VAR_6, VAR_7;
 int VAR_8;

 VAR_5 = FUNC_4(VAR_3);

 if (VAR_4 >= VAR_5->npins)
  return (VAR_1);

 FUNC_0(VAR_5);
 VAR_8 = FUNC_2(VAR_3, VAR_5->pins[VAR_4].ctrl_reg, &VAR_6, 1);
 if (VAR_8 == 0) {
  VAR_7 = VAR_6 & VAR_0;
  switch (VAR_7) {
  case 128:

   if (VAR_4 == 2) {
    VAR_8 = VAR_1;
    break;
   }
   VAR_6 &= ~VAR_0;
   VAR_6 |= 129;
   break;
  case 129:
   VAR_6 &= ~VAR_0;
   VAR_6 |= 128;
   break;
  default:
   VAR_8 = VAR_2;
   break;
  }
 }
 if (VAR_8 == 0)
  VAR_8 = FUNC_3(VAR_3, VAR_5->pins[VAR_4].ctrl_reg, VAR_6);
 FUNC_1(VAR_5);

 return (VAR_8);
}
