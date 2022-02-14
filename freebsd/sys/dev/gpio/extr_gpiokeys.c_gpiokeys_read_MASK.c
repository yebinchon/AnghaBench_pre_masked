
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct gpiokeys_softc {int dummy; } ;
struct TYPE_4__ {int kb_count; struct gpiokeys_softc* kb_data; } ;
typedef TYPE_1__ keyboard_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct gpiokeys_softc*,int) ;

__attribute__((used)) static int
FUNC_2(keyboard_t *VAR_1, int VAR_2)
{
 struct gpiokeys_softc *VAR_3 = VAR_1->kb_data;
 int32_t VAR_4;

 if (!FUNC_0(VAR_1))
  return (-1);


 VAR_4 = FUNC_1(VAR_3, (VAR_2 == VAR_0) ? 0 : 1);
 if (!FUNC_0(VAR_1) || (VAR_4 == -1))
  return (-1);

 ++(VAR_1->kb_count);

 return (VAR_4);
}
