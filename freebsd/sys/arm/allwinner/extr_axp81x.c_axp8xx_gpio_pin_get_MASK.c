
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
 int VAR_2 ;
 int FUNC_0 (struct axp8xx_softc*) ;
 int FUNC_1 (struct axp8xx_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int ,int ,int*,int) ;
 struct axp8xx_softc* FUNC_3 (int ) ;
 size_t FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_6, uint32_t VAR_7, unsigned int *VAR_8)
{
 struct axp8xx_softc *VAR_9;
 uint8_t VAR_10, VAR_11;
 int VAR_12;

 if (VAR_7 >= FUNC_4(VAR_5))
  return (VAR_3);

 VAR_9 = FUNC_3(VAR_6);

 FUNC_0(VAR_9);
 VAR_12 = FUNC_2(VAR_6, VAR_5[VAR_7].ctrl_reg, &VAR_10, 1);
 if (VAR_12 == 0) {
  VAR_11 = (VAR_10 & VAR_0) >> VAR_1;
  switch (VAR_11) {
  case 129:
   *VAR_8 = 0;
   break;
  case 130:
   *VAR_8 = 1;
   break;
  case 128:
   VAR_12 = FUNC_2(VAR_6, VAR_2, &VAR_10, 1);
   if (VAR_12 == 0)
    *VAR_8 = (VAR_10 & (1 << VAR_7)) ? 1 : 0;
   break;
  default:
   VAR_12 = VAR_4;
   break;
  }
 }
 FUNC_1(VAR_9);

 return (VAR_12);
}
