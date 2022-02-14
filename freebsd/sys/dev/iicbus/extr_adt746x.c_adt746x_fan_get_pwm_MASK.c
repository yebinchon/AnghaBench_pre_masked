
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct adt746x_softc {int sc_addr; int sc_dev; } ;
struct adt746x_fan {int pwm_reg; int dev; } ;


 int FUNC_0 (int ,int ,int,int*) ;
 struct adt746x_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct adt746x_fan *VAR_0)
{
 uint8_t VAR_1, VAR_2;
 uint16_t VAR_3;
 struct adt746x_softc *VAR_4;

 VAR_4 = FUNC_1(VAR_0->dev);

 VAR_2 = VAR_0->pwm_reg;

 FUNC_0(VAR_4->sc_dev, VAR_4->sc_addr, VAR_2, &VAR_1);

 VAR_3 = (VAR_1 * 39 / 100) + (VAR_1 ? 1 : 0);
 return (VAR_3);
}
