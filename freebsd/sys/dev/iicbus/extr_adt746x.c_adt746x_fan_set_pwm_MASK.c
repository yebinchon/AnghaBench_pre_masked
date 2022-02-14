
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct adt746x_softc {int sc_addr; int sc_dev; } ;
struct TYPE_2__ {int max_rpm; int min_rpm; } ;
struct adt746x_fan {int pwm_reg; int conf_reg; int setpoint; TYPE_1__ fan; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int*) ;
 int FUNC_1 (int ,int ,int,int*) ;
 struct adt746x_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static int
FUNC_5(struct adt746x_fan *VAR_1, int VAR_2)
{
 uint8_t VAR_3 = 0, VAR_4, VAR_5 = 0;
 struct adt746x_softc *VAR_6;
 uint8_t VAR_7;

 VAR_6 = FUNC_2(VAR_1->dev);


 VAR_2 = FUNC_3(VAR_1->fan.min_rpm, VAR_2);
 VAR_2 = FUNC_4(VAR_1->fan.max_rpm, VAR_2);

 VAR_3 = VAR_1->pwm_reg;
 VAR_5 = VAR_1->conf_reg;





 VAR_7 = (VAR_2 * 100 / 39) - (VAR_2 ? 1 : 0);
 VAR_1->setpoint = VAR_7;


 FUNC_0(VAR_6->sc_dev, VAR_6->sc_addr, VAR_5, &VAR_4);
 VAR_4 |= VAR_0;
 FUNC_1(VAR_6->sc_dev, VAR_6->sc_addr, VAR_5, &VAR_4);


 FUNC_1(VAR_6->sc_dev, VAR_6->sc_addr, VAR_3, &VAR_7);

 return (0);
}
