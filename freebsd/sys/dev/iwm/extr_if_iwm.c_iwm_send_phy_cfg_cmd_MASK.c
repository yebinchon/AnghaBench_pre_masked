
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwm_softc {int cur_ucode; TYPE_1__* sc_default_calib; } ;
struct TYPE_4__ {int flow_trigger; int event_trigger; } ;
struct iwm_phy_cfg_cmd {int phy_cfg; TYPE_2__ calib_control; } ;
typedef int phy_cfg_cmd ;
typedef enum iwm_ucode_type { ____Placeholder_iwm_ucode_type } iwm_ucode_type ;
struct TYPE_3__ {int flow_trigger; int event_trigger; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwm_softc*,int,char*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwm_softc*) ;
 int FUNC_3 (struct iwm_softc*,int ,int ,int,struct iwm_phy_cfg_cmd*) ;

__attribute__((used)) static int
FUNC_4(struct iwm_softc *VAR_4)
{
 struct iwm_phy_cfg_cmd VAR_5;
 enum iwm_ucode_type VAR_6 = VAR_4->cur_ucode;


 VAR_5.phy_cfg = FUNC_1(FUNC_2(VAR_4));
 VAR_5.calib_control.event_trigger =
     VAR_4->sc_default_calib[VAR_6].event_trigger;
 VAR_5.calib_control.flow_trigger =
     VAR_4->sc_default_calib[VAR_6].flow_trigger;

 FUNC_0(VAR_4, VAR_1 | VAR_2,
     "Sending Phy CFG command: 0x%x\n", VAR_5.phy_cfg);
 return FUNC_3(VAR_4, VAR_3, VAR_0,
     sizeof(VAR_5), &VAR_5);
}
