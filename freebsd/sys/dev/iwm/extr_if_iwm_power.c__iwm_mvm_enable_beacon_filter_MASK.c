
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwm_vap {int dummy; } ;
struct TYPE_2__ {int bf_enabled; } ;
struct iwm_softc {TYPE_1__ sc_bf; } ;
struct iwm_beacon_filter_cmd {int dummy; } ;


 int FUNC_0 (struct iwm_softc*,struct iwm_beacon_filter_cmd*) ;
 int FUNC_1 (struct iwm_softc*,struct iwm_vap*,struct iwm_beacon_filter_cmd*) ;

__attribute__((used)) static int
FUNC_2(struct iwm_softc *VAR_0, struct iwm_vap *VAR_1,
 struct iwm_beacon_filter_cmd *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_0, VAR_1, VAR_2);
 VAR_3 = FUNC_0(VAR_0, VAR_2);

 if (!VAR_3)
  VAR_0->sc_bf.bf_enabled = 1;

 return VAR_3;
}
