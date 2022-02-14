
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {scalar_t__ cmd_hold_nic_awake; } ;


 int FUNC_0 (struct iwm_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(struct iwm_softc *VAR_2)
{
 if (VAR_2->cmd_hold_nic_awake)
  return;

 FUNC_0(VAR_2, VAR_0,
     VAR_1);
}
