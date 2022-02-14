
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpioiic_softc {int scl_pin; int sda_pin; int sc_busdev; int sc_dev; } ;
struct gpiobus_ivar {int * pins; } ;
typedef int pin ;
typedef int phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 struct gpiobus_ivar* FUNC_0 (int ) ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_1 (int,char*,scalar_t__*,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct gpioiic_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_3)
{
 device_t VAR_4;




 struct gpiobus_ivar *VAR_5;
 struct gpioiic_softc *VAR_6;

 VAR_6 = FUNC_5(VAR_3);
 VAR_6->sc_dev = VAR_3;
 VAR_6->sc_busdev = FUNC_4(VAR_3);
 if (FUNC_10(FUNC_3(VAR_3),
  FUNC_6(VAR_3), "scl", &VAR_6->scl_pin))
  VAR_6->scl_pin = VAR_1;
 if (FUNC_10(FUNC_3(VAR_3),
  FUNC_6(VAR_3), "sda", &VAR_6->sda_pin))
  VAR_6->sda_pin = VAR_2;
 if (VAR_6->scl_pin < 0 || VAR_6->scl_pin > 1)
  VAR_6->scl_pin = VAR_1;
 if (VAR_6->sda_pin < 0 || VAR_6->sda_pin > 1)
  VAR_6->sda_pin = VAR_2;

 VAR_5 = FUNC_0(VAR_3);
 FUNC_7(VAR_3, "SCL pin: %d, SDA pin: %d\n",
     VAR_5->pins[VAR_6->scl_pin], VAR_5->pins[VAR_6->sda_pin]);


 VAR_4 = FUNC_2(VAR_3, "iicbb", -1);
 FUNC_8(VAR_4);

 return (0);
}
