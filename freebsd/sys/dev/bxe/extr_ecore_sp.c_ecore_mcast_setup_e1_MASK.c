
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct mac_configuration_cmd {TYPE_1__* config_table; } ;
struct ecore_raw_obj {int rdata_mapping; int cid; int (* clear_pending ) (struct ecore_raw_obj*) ;scalar_t__ rdata; } ;
struct ecore_mcast_ramrod_params {int ramrod_flags; struct ecore_mcast_obj* mcast_obj; } ;
struct ecore_mcast_obj {int max_cmd_len; int total_pending_num; int (* clear_sched ) (struct ecore_mcast_obj*) ;int pending_cmds_head; struct ecore_raw_obj raw; } ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_mcast_cmd { ____Placeholder_ecore_mcast_cmd } ecore_mcast_cmd ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct mac_configuration_cmd*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (struct bxe_softc*,struct ecore_mcast_ramrod_params*,int,int ) ;
 int FUNC_6 (struct bxe_softc*,struct ecore_mcast_ramrod_params*) ;
 int FUNC_7 (struct bxe_softc*,struct ecore_mcast_obj*) ;
 int FUNC_8 (struct bxe_softc*,struct ecore_mcast_ramrod_params*,int ) ;
 int FUNC_9 (struct bxe_softc*,int ,int ,int ,int ) ;
 int FUNC_10 (struct ecore_mcast_obj*) ;
 int FUNC_11 (struct ecore_raw_obj*) ;

__attribute__((used)) static int FUNC_12(struct bxe_softc *VAR_7,
    struct ecore_mcast_ramrod_params *VAR_8,
    enum ecore_mcast_cmd VAR_9)
{
 struct ecore_mcast_obj *VAR_10 = VAR_8->mcast_obj;
 struct ecore_raw_obj *VAR_11 = &VAR_10->raw;
 struct mac_configuration_cmd *VAR_12 =
  (struct mac_configuration_cmd *)(VAR_11->rdata);
 int VAR_13 = 0, VAR_14, VAR_15;


 FUNC_2(VAR_12, 0, sizeof(*VAR_12));


 for (VAR_14 = 0; VAR_14 < VAR_10->max_cmd_len ; VAR_14++)
  FUNC_3(VAR_12->config_table[VAR_14].flags,
   VAR_3,
   VAR_6);


 VAR_13 = FUNC_6(VAR_7, VAR_8);


 if (FUNC_1(&VAR_10->pending_cmds_head))
  VAR_10->clear_sched(VAR_10);


 if (!VAR_13)
  VAR_13 = FUNC_5(VAR_7, VAR_8, VAR_9, 0);




 VAR_10->total_pending_num -= VAR_10->max_cmd_len;



 FUNC_0(VAR_13 > VAR_10->max_cmd_len);


 FUNC_8(VAR_7, VAR_8, (uint8_t)VAR_13);







 VAR_15 = FUNC_7(VAR_7, VAR_10);
 if (VAR_15)
  return VAR_15;




 if (FUNC_4(VAR_5, &VAR_8->ramrod_flags)) {
  VAR_11->clear_pending(VAR_11);
  return VAR_1;
 } else {
  VAR_15 = FUNC_9( VAR_7,
        VAR_4,
        VAR_11->cid,
        VAR_11->rdata_mapping,
        VAR_2);
  if (VAR_15)
   return VAR_15;


  return VAR_0;
 }
}
