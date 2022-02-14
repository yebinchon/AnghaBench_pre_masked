
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct e6060sw_softc {scalar_t__ sw_model; scalar_t__ vlan_mode; } ;
struct TYPE_3__ {int cmd; scalar_t__ vlan_mode; } ;
typedef TYPE_1__ etherswitch_conf_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct e6060sw_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_7, etherswitch_conf_t *VAR_8)
{
 struct e6060sw_softc *VAR_9;

 VAR_9 = FUNC_0(VAR_7);


 if (VAR_8->cmd & VAR_4) {
  if (VAR_8->vlan_mode == VAR_6) {
   VAR_9->vlan_mode = VAR_6;
   FUNC_1(VAR_7, VAR_0);
   FUNC_3(VAR_7);
  } else if ((VAR_9->sw_model == VAR_2 || VAR_9->sw_model == VAR_3) &&
      VAR_8->vlan_mode == VAR_5) {
   VAR_9->vlan_mode = VAR_5;
   FUNC_1(VAR_7, VAR_1);
   FUNC_2(VAR_7);
  } else {
   VAR_9->vlan_mode = 0;

   FUNC_1(VAR_7, VAR_0);
   FUNC_3(VAR_7);
  }
 }

 return (0);
}
