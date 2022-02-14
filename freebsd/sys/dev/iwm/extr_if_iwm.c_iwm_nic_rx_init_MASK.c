
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwm_softc {TYPE_1__* cfg; } ;
struct TYPE_2__ {scalar_t__ mqrx_supported; } ;


 int FUNC_0 (struct iwm_softc*) ;
 int FUNC_1 (struct iwm_softc*) ;

__attribute__((used)) static int
FUNC_2(struct iwm_softc *VAR_0)
{
 if (VAR_0->cfg->mqrx_supported)
  return FUNC_1(VAR_0);
 else
  return FUNC_0(VAR_0);
}
