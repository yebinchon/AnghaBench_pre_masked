
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_2__ {size_t* keycode; } ;
struct ukbd_softc {TYPE_1__ sc_odata; } ;


 size_t VAR_0 ;

__attribute__((used)) static uint8_t
FUNC_0(struct ukbd_softc *VAR_1)
{
 uint8_t VAR_2;
 uint8_t VAR_3;

 for (VAR_3 = VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  VAR_3 |= VAR_1->sc_odata.keycode[VAR_2];

 return (VAR_3 ? 1 : 0);
}
