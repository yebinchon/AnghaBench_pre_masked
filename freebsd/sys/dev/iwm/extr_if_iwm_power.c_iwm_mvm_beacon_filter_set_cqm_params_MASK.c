
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwm_vap {int dummy; } ;
struct TYPE_2__ {int ba_enabled; } ;
struct iwm_softc {TYPE_1__ sc_bf; } ;
struct iwm_beacon_filter_cmd {int ba_enable_beacon_abort; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct iwm_softc *VAR_0,
 struct iwm_vap *VAR_1, struct iwm_beacon_filter_cmd *VAR_2)
{
 VAR_2->ba_enable_beacon_abort = FUNC_0(VAR_0->sc_bf.ba_enabled);
}
