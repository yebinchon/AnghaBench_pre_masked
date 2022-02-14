
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ version; scalar_t__ ha_mode; scalar_t__ ha_id; scalar_t__ max_luns; scalar_t__ max_ports; scalar_t__ max_init_per_port; } ;
union ctl_ha_msg {TYPE_1__ login; } ;
struct ctl_softc {scalar_t__ ha_mode; scalar_t__ ha_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct ctl_softc *VAR_5, union ctl_ha_msg *VAR_6, int VAR_7)
{

 if (VAR_6->login.version != VAR_1) {
  FUNC_1("CTL HA peers have different versions %d != %d\n",
      VAR_6->login.version, VAR_1);
  FUNC_0(VAR_0);
  return;
 }
 if (VAR_6->login.ha_mode != VAR_5->ha_mode) {
  FUNC_1("CTL HA peers have different ha_mode %d != %d\n",
      VAR_6->login.ha_mode, VAR_5->ha_mode);
  FUNC_0(VAR_0);
  return;
 }
 if (VAR_6->login.ha_id == VAR_5->ha_id) {
  FUNC_1("CTL HA peers have same ha_id %d\n", VAR_6->login.ha_id);
  FUNC_0(VAR_0);
  return;
 }
 if (VAR_6->login.max_luns != VAR_3 ||
     VAR_6->login.max_ports != VAR_4 ||
     VAR_6->login.max_init_per_port != VAR_2) {
  FUNC_1("CTL HA peers have different limits\n");
  FUNC_0(VAR_0);
  return;
 }
}
