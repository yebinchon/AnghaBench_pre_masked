
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct axp8xx_softc {int dummy; } ;
typedef int device_t ;
struct TYPE_3__ {int ctrl_reg; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct axp8xx_softc*) ;
 int FUNC_1 (struct axp8xx_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int ,int) ;
 struct axp8xx_softc* FUNC_4 (int ) ;
 size_t FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_5, uint32_t VAR_6)
{
 struct axp8xx_softc *VAR_7;
 uint8_t VAR_8, VAR_9;
 int VAR_10;

 if (VAR_6 >= FUNC_5(VAR_4))
  return (VAR_2);

 VAR_7 = FUNC_4(VAR_5);

 FUNC_0(VAR_7);
 VAR_10 = FUNC_2(VAR_5, VAR_4[VAR_6].ctrl_reg, &VAR_8, 1);
 if (VAR_10 == 0) {
  VAR_9 = (VAR_8 & VAR_0) >> VAR_1;
  switch (VAR_9) {
  case 128:
   VAR_8 &= ~VAR_0;
   VAR_8 |= (129 << VAR_1);
   break;
  case 129:
   VAR_8 &= ~VAR_0;
   VAR_8 |= (128 << VAR_1);
   break;
  default:
   VAR_10 = VAR_3;
   break;
  }
 }
 if (VAR_10 == 0)
  VAR_10 = FUNC_3(VAR_5, VAR_4[VAR_6].ctrl_reg, VAR_8);
 FUNC_1(VAR_7);

 return (VAR_10);
}
