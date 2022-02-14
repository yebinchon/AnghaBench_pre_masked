
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct axp2xx_softc {size_t npins; TYPE_1__* pins; } ;
typedef int device_t ;
struct TYPE_2__ {int status_mask; unsigned int status_shift; int status_reg; int ctrl_reg; } ;





 int VAR_0 ;
 int FUNC_0 (struct axp2xx_softc*) ;
 int FUNC_1 (struct axp2xx_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int*,int) ;
 struct axp2xx_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, uint32_t VAR_4, unsigned int *VAR_5)
{
 struct axp2xx_softc *VAR_6;
 uint8_t VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = FUNC_3(VAR_3);

 if (VAR_4 >= VAR_6->npins)
  return (VAR_1);

 FUNC_0(VAR_6);
 VAR_9 = FUNC_2(VAR_3, VAR_6->pins[VAR_4].ctrl_reg, &VAR_7, 1);
 if (VAR_9 == 0) {
  VAR_8 = VAR_7 & VAR_0;
  switch (VAR_8) {
  case 129:
   *VAR_5 = 0;
   break;
  case 130:
   *VAR_5 = 1;
   break;
  case 128:
   VAR_9 = FUNC_2(VAR_3, VAR_6->pins[VAR_4].status_reg,
       &VAR_7, 1);
   if (VAR_9 == 0) {
    *VAR_5 = (VAR_7 & VAR_6->pins[VAR_4].status_mask);
    *VAR_5 >>= VAR_6->pins[VAR_4].status_shift;
   }
   break;
  default:
   VAR_9 = VAR_2;
   break;
  }
 }
 FUNC_1(VAR_6);

 return (VAR_9);
}
