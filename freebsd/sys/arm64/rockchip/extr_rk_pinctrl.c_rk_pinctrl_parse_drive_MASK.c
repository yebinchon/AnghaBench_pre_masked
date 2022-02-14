
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int value ;
typedef scalar_t__ uint32_t ;
struct rk_pinctrl_softc {TYPE_2__* conf; } ;
typedef int phandle_t ;
struct TYPE_4__ {int npin_drive; TYPE_1__* pin_drive; } ;
struct TYPE_3__ {scalar_t__ bank; scalar_t__ subbank; scalar_t__ ma; scalar_t__ value; } ;


 scalar_t__ FUNC_0 (int ,char*,scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_1(struct rk_pinctrl_softc *VAR_0, phandle_t VAR_1,
  uint32_t VAR_2, uint32_t VAR_3, uint32_t *VAR_4, uint32_t *VAR_5)
{
 uint32_t VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_1, "drive-strength", &VAR_6,
     sizeof(VAR_6)) != 0)
  return (-1);


 for (VAR_7 = 0; VAR_7 < VAR_0->conf->npin_drive; VAR_7++) {
  if (VAR_0->conf->pin_drive[VAR_7].bank != VAR_2 &&
      VAR_0->conf->pin_drive[VAR_7].subbank != VAR_3)
   continue;
  if (VAR_0->conf->pin_drive[VAR_7].ma == VAR_6) {
   *VAR_4 = VAR_0->conf->pin_drive[VAR_7].value;
   return (0);
  }
 }

 return (-1);
}
