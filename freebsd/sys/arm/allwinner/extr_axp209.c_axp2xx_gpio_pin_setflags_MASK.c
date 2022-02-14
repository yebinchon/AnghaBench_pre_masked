
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
 int VAR_1 ;
 int FUNC_0 (struct axp2xx_softc*) ;
 int FUNC_1 (struct axp2xx_softc*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ,int ) ;
 struct axp2xx_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_5, uint32_t VAR_6, uint32_t VAR_7)
{
 struct axp2xx_softc *VAR_8;
 uint8_t VAR_9;
 int VAR_10;

 VAR_8 = FUNC_4(VAR_5);

 if (VAR_6 >= VAR_8->npins)
  return (VAR_2);

 FUNC_0(VAR_8);
 VAR_10 = FUNC_2(VAR_5, VAR_8->pins[VAR_6].ctrl_reg, &VAR_9, 1);
 if (VAR_10 == 0) {
  VAR_9 &= ~VAR_1;
  if ((VAR_7 & (VAR_3|VAR_4)) != 0) {
   if ((VAR_7 & VAR_4) == 0)
    VAR_9 |= VAR_0;
  }
  VAR_10 = FUNC_3(VAR_5, VAR_8->pins[VAR_6].ctrl_reg, VAR_9);
 }
 FUNC_1(VAR_8);

 return (VAR_10);
}
