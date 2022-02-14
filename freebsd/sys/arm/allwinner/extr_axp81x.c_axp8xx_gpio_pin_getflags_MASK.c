
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
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct axp8xx_softc*) ;
 int FUNC_1 (struct axp8xx_softc*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_2 (int ,int ,int*,int) ;
 struct axp8xx_softc* FUNC_3 (int ) ;
 size_t FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_9, uint32_t VAR_10, uint32_t *VAR_11)
{
 struct axp8xx_softc *VAR_12;
 uint8_t VAR_13, VAR_14;
 int VAR_15;

 if (VAR_10 >= FUNC_4(VAR_8))
  return (VAR_5);

 VAR_12 = FUNC_3(VAR_9);

 FUNC_0(VAR_12);
 VAR_15 = FUNC_2(VAR_9, VAR_8[VAR_10].ctrl_reg, &VAR_13, 1);
 if (VAR_15 == 0) {
  VAR_14 = (VAR_13 & VAR_0) >> VAR_4;
  if (VAR_14 == VAR_3)
   *VAR_11 = VAR_6;
  else if (VAR_14 == VAR_2 ||
      VAR_14 == VAR_1)
   *VAR_11 = VAR_7;
  else
   *VAR_11 = 0;
 }
 FUNC_1(VAR_12);

 return (VAR_15);
}
