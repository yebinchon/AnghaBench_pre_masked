
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union ecore_mcast_config_data {int bin; int mac; } ;
typedef int uint8_t ;
struct eth_multicast_rules_ramrod_data {TYPE_3__* rules; } ;
struct ecore_raw_obj {int func_id; scalar_t__ rdata; } ;
struct TYPE_4__ {int vec; } ;
struct TYPE_5__ {TYPE_1__ aprox_match; } ;
struct ecore_mcast_obj {int engine_id; TYPE_2__ registry; struct ecore_raw_obj raw; } ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_mcast_cmd { ____Placeholder_ecore_mcast_cmd } ecore_mcast_cmd ;
struct TYPE_6__ {int cmd_general_data; int bin_id; int func_id; int engine_id; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int) ;



 int FUNC_2 (struct bxe_softc*,char*,char*,int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ecore_mcast_obj*) ;
 int FUNC_5 (struct ecore_mcast_obj*) ;

__attribute__((used)) static void FUNC_6(struct bxe_softc *VAR_1,
     struct ecore_mcast_obj *VAR_2, int VAR_3,
     union ecore_mcast_config_data *VAR_4,
     enum ecore_mcast_cmd VAR_5)
{
 struct ecore_raw_obj *VAR_6 = &VAR_2->raw;
 struct eth_multicast_rules_ramrod_data *VAR_7 =
  (struct eth_multicast_rules_ramrod_data *)(VAR_6->rdata);
 uint8_t VAR_8 = VAR_6->func_id;
 uint8_t VAR_9 = FUNC_5(VAR_2);
 int VAR_10;

 if ((VAR_5 == 130) || (VAR_5 == 128))
  VAR_9 |= VAR_0;

 VAR_7->rules[VAR_3].cmd_general_data |= VAR_9;


 switch (VAR_5) {
 case 130:
  VAR_10 = FUNC_3(VAR_4->mac);
  FUNC_0(VAR_2->registry.aprox_match.vec, VAR_10);
  break;

 case 129:






  VAR_10 = FUNC_4(VAR_2);
  break;

 case 128:
  VAR_10 = VAR_4->bin;
  break;

 default:
  FUNC_1("Unknown command: %d\n", VAR_5);
  return;
 }

 FUNC_2(VAR_1, "%s bin %d\n",
    ((VAR_9 & VAR_0) ?
     "Setting" : "Clearing"), VAR_10);

 VAR_7->rules[VAR_3].bin_id = (uint8_t)VAR_10;
 VAR_7->rules[VAR_3].func_id = VAR_8;
 VAR_7->rules[VAR_3].engine_id = VAR_2->engine_id;
}
