
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int tx_ant_cmd ;
struct iwm_tx_ant_cfg_cmd {int valid; } ;
struct iwm_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwm_softc*,int ,int ,int,struct iwm_tx_ant_cfg_cmd*) ;

__attribute__((used)) static int
FUNC_2(struct iwm_softc *VAR_2, uint8_t VAR_3)
{
 struct iwm_tx_ant_cfg_cmd VAR_4 = {
  .valid = FUNC_0(VAR_3),
 };

 return FUNC_1(VAR_2, VAR_1,
     VAR_0, sizeof(VAR_4), &VAR_4);
}
