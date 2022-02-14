
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bytgpio_softc {scalar_t__* sc_pad_funcs; TYPE_1__* sc_pinpad_map; } ;
struct TYPE_2__ {scalar_t__ pad_func; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool
FUNC_0(struct bytgpio_softc *VAR_1, int VAR_2)
{
 if ((VAR_1->sc_pinpad_map[VAR_2].pad_func == VAR_0) ||
     (VAR_1->sc_pad_funcs[VAR_2] == VAR_1->sc_pinpad_map[VAR_2].pad_func))
  return (1);
 else
  return (0);
}
