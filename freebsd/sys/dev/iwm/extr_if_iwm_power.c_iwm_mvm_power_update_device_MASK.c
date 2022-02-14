
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {int sc_ps_disabled; } ;
struct iwm_device_power_cmd {int flags; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwm_softc*,int,char*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct iwm_softc*,int ,int ,int,struct iwm_device_power_cmd*) ;
 scalar_t__ VAR_6 ;

int
FUNC_3(struct iwm_softc *VAR_7)
{
 struct iwm_device_power_cmd VAR_8 = {
  .flags = 0,
 };

 if (VAR_6 == VAR_3)
  VAR_7->sc_ps_disabled = VAR_5;

 if (!VAR_7->sc_ps_disabled)
  VAR_8.flags |= FUNC_1(VAR_2);

 FUNC_0(VAR_7, VAR_1 | VAR_0,
     "Sending device power command with flags = 0x%X\n", VAR_8.flags);

 return FUNC_2(VAR_7,
     VAR_4, 0, sizeof(VAR_8), &VAR_8);
}
