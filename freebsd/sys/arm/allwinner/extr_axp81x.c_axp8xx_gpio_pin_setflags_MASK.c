
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
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (int ,int ,int ) ;
 struct axp8xx_softc* FUNC_4 (int ) ;
 size_t FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_6, uint32_t VAR_7, uint32_t VAR_8)
{
 struct axp8xx_softc *VAR_9;
 uint8_t VAR_10;
 int VAR_11;

 if (VAR_7 >= FUNC_5(VAR_5))
  return (VAR_2);

 VAR_9 = FUNC_4(VAR_6);

 FUNC_0(VAR_9);
 VAR_11 = FUNC_2(VAR_6, VAR_5[VAR_7].ctrl_reg, &VAR_10, 1);
 if (VAR_11 == 0) {
  VAR_10 &= ~VAR_0;
  if ((VAR_8 & (VAR_3|VAR_4)) != 0) {
   if ((VAR_8 & VAR_4) == 0)
    VAR_10 |= VAR_1;
  }
  VAR_11 = FUNC_3(VAR_6, VAR_5[VAR_7].ctrl_reg, VAR_10);
 }
 FUNC_1(VAR_9);

 return (VAR_11);
}
