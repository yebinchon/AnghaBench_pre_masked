
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int sc_ltr_enabled; } ;
struct iwm_ltr_config_cmd {int flags; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct iwm_softc*,int ,int ,int,struct iwm_ltr_config_cmd*) ;

__attribute__((used)) static int
FUNC_2(struct iwm_softc *VAR_2)
{
 struct iwm_ltr_config_cmd VAR_3 = {
  .flags = FUNC_0(VAR_0),
 };

 if (!VAR_2->sc_ltr_enabled)
  return 0;

 return FUNC_1(VAR_2, VAR_1, 0, sizeof(VAR_3), &VAR_3);
}
