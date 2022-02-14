
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct amdgpio_softc {TYPE_1__* sc_gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {char* gp_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpio_softc*,size_t) ;
 struct amdgpio_softc* FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,...) ;
 int FUNC_3 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, uint32_t VAR_3, char *VAR_4)
{
 struct amdgpio_softc *VAR_5;

 FUNC_2("pin %d\n", VAR_3);
 VAR_5 = FUNC_1(VAR_2);

 if (!FUNC_0(VAR_5, VAR_3))
  return (VAR_0);


 FUNC_3(VAR_4, VAR_1, "%s", VAR_5->sc_gpio_pins[VAR_3].gp_name);
 VAR_4[VAR_1 - 1] = '\0';

 FUNC_2("pin %d name %s\n", VAR_3, VAR_4);

 return (0);
}
