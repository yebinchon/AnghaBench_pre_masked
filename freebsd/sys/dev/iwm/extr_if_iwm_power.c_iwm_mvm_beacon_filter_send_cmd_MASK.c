
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int dummy; } ;
struct iwm_beacon_filter_cmd {int bf_temp_slow_filter; int bf_temp_fast_filter; int bf_temp_threshold; int bf_roaming_state; int bf_roaming_energy_delta; int bf_escape_timer; int bf_energy_delta; int bf_enable_beacon_filter; int bf_debug_flag; int ba_escape_timer; int ba_enable_beacon_abort; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwm_softc*,int,char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct iwm_softc*,int ,int ,int,struct iwm_beacon_filter_cmd*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct iwm_softc *VAR_3,
 struct iwm_beacon_filter_cmd *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_2,
     0, sizeof(struct iwm_beacon_filter_cmd), VAR_4);

 if (!VAR_5) {
  FUNC_0(VAR_3, VAR_1 | VAR_0,
      "ba_enable_beacon_abort is: %d\n",
      FUNC_2(VAR_4->ba_enable_beacon_abort));
  FUNC_0(VAR_3, VAR_1 | VAR_0,
      "ba_escape_timer is: %d\n",
      FUNC_2(VAR_4->ba_escape_timer));
  FUNC_0(VAR_3, VAR_1 | VAR_0,
      "bf_debug_flag is: %d\n",
      FUNC_2(VAR_4->bf_debug_flag));
  FUNC_0(VAR_3, VAR_1 | VAR_0,
      "bf_enable_beacon_filter is: %d\n",
      FUNC_2(VAR_4->bf_enable_beacon_filter));
  FUNC_0(VAR_3, VAR_1 | VAR_0,
      "bf_energy_delta is: %d\n",
      FUNC_2(VAR_4->bf_energy_delta));
  FUNC_0(VAR_3, VAR_1 | VAR_0,
      "bf_escape_timer is: %d\n",
      FUNC_2(VAR_4->bf_escape_timer));
  FUNC_0(VAR_3, VAR_1 | VAR_0,
      "bf_roaming_energy_delta is: %d\n",
      FUNC_2(VAR_4->bf_roaming_energy_delta));
  FUNC_0(VAR_3, VAR_1 | VAR_0,
      "bf_roaming_state is: %d\n",
      FUNC_2(VAR_4->bf_roaming_state));
  FUNC_0(VAR_3, VAR_1 | VAR_0,
      "bf_temp_threshold is: %d\n",
      FUNC_2(VAR_4->bf_temp_threshold));
  FUNC_0(VAR_3, VAR_1 | VAR_0,
      "bf_temp_fast_filter is: %d\n",
      FUNC_2(VAR_4->bf_temp_fast_filter));
  FUNC_0(VAR_3, VAR_1 | VAR_0,
      "bf_temp_slow_filter is: %d\n",
      FUNC_2(VAR_4->bf_temp_slow_filter));
 }
 return VAR_5;
}
