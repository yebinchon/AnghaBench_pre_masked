
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bf_enabled; } ;
struct iwm_softc {TYPE_1__ sc_bf; } ;
struct iwm_beacon_filter_cmd {int dummy; } ;


 int FUNC_0 (struct iwm_softc*,struct iwm_beacon_filter_cmd*) ;

int
FUNC_1(struct iwm_softc *VAR_0)
{
 struct iwm_beacon_filter_cmd VAR_1 = {};
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, &VAR_1);
 if (VAR_2 == 0)
  VAR_0->sc_bf.bf_enabled = 0;

 return VAR_2;
}
