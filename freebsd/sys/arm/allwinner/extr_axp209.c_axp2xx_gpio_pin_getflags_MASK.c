
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
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct axp2xx_softc*) ;
 int FUNC_1 (struct axp2xx_softc*) ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (int ,int ,int*,int) ;
 struct axp2xx_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_7, uint32_t VAR_8, uint32_t *VAR_9)
{
 struct axp2xx_softc *VAR_10;
 uint8_t VAR_11, VAR_12;
 int VAR_13;

 VAR_10 = FUNC_3(VAR_7);

 if (VAR_8 >= VAR_10->npins)
  return (VAR_4);

 FUNC_0(VAR_10);
 VAR_13 = FUNC_2(VAR_7, VAR_10->pins[VAR_8].ctrl_reg, &VAR_11, 1);
 if (VAR_13 == 0) {
  VAR_12 = VAR_11 & VAR_3;
  if (VAR_12 == VAR_2)
   *VAR_9 = VAR_5;
  else if (VAR_12 == VAR_1 ||
      VAR_12 == VAR_0)
   *VAR_9 = VAR_6;
  else
   *VAR_9 = 0;
 }
 FUNC_1(VAR_10);

 return (VAR_13);
}
