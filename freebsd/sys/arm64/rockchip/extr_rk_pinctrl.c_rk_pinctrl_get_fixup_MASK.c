
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rk_pinctrl_softc {TYPE_2__* conf; } ;
struct TYPE_4__ {int npin_fixup; TYPE_1__* pin_fixup; } ;
struct TYPE_3__ {scalar_t__ bank; scalar_t__ pin; scalar_t__ reg; scalar_t__ mask; scalar_t__ bit; } ;



__attribute__((used)) static void
FUNC_0(struct rk_pinctrl_softc *VAR_0, uint32_t VAR_1, uint32_t VAR_2,
    uint32_t *VAR_3, uint32_t *VAR_4, uint32_t *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0->conf->npin_fixup; VAR_6++)
  if (VAR_0->conf->pin_fixup[VAR_6].bank == VAR_1 &&
      VAR_0->conf->pin_fixup[VAR_6].pin == VAR_2) {
   *VAR_3 = VAR_0->conf->pin_fixup[VAR_6].reg;
   *VAR_4 = VAR_0->conf->pin_fixup[VAR_6].mask;
   *VAR_5 = VAR_0->conf->pin_fixup[VAR_6].bit;

   return;
  }
}
