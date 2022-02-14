
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct eth_multicast_rules_ramrod_data {int dummy; } ;
struct ecore_raw_obj {int rdata_mapping; int cid; int (* clear_pending ) (struct ecore_raw_obj*) ;scalar_t__ rdata; } ;
struct ecore_mcast_ramrod_params {scalar_t__ mcast_list_len; int ramrod_flags; struct ecore_mcast_obj* mcast_obj; } ;
struct ecore_mcast_obj {scalar_t__ total_pending_num; int max_cmd_len; int (* clear_sched ) (struct ecore_mcast_obj*) ;int pending_cmds_head; struct ecore_raw_obj raw; } ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_mcast_cmd { ____Placeholder_ecore_mcast_cmd } ecore_mcast_cmd ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct eth_multicast_rules_ramrod_data*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct bxe_softc*,struct ecore_mcast_ramrod_params*,int,int) ;
 int FUNC_5 (struct bxe_softc*,struct ecore_mcast_ramrod_params*) ;
 int FUNC_6 (struct bxe_softc*,struct ecore_mcast_obj*) ;
 int FUNC_7 (struct bxe_softc*,struct ecore_mcast_ramrod_params*,int ) ;
 int FUNC_8 (struct bxe_softc*,int ,int ,int ,int ) ;
 int FUNC_9 (struct ecore_mcast_obj*) ;
 int FUNC_10 (struct ecore_raw_obj*) ;

__attribute__((used)) static int FUNC_11(struct bxe_softc *VAR_5,
    struct ecore_mcast_ramrod_params *VAR_6,
    enum ecore_mcast_cmd VAR_7)
{
 struct ecore_raw_obj *VAR_8 = &VAR_6->mcast_obj->raw;
 struct ecore_mcast_obj *VAR_9 = VAR_6->mcast_obj;
 struct eth_multicast_rules_ramrod_data *VAR_10 =
  (struct eth_multicast_rules_ramrod_data *)(VAR_8->rdata);
 int VAR_11 = 0, VAR_12;


 FUNC_2(VAR_10, 0, sizeof(*VAR_10));

 VAR_11 = FUNC_5(VAR_5, VAR_6);


 if (FUNC_1(&VAR_9->pending_cmds_head))
  VAR_9->clear_sched(VAR_9);







 if (VAR_6->mcast_list_len > 0)
  VAR_11 = FUNC_4(VAR_5, VAR_6, VAR_7, VAR_11);




 VAR_9->total_pending_num -= VAR_11;


 FUNC_0(VAR_9->total_pending_num < 0);
 FUNC_0(VAR_11 > VAR_9->max_cmd_len);

 FUNC_7(VAR_5, VAR_6, (uint8_t)VAR_11);
 if (!VAR_9->total_pending_num)
  FUNC_6(VAR_5, VAR_9);




 if (FUNC_3(VAR_4, &VAR_6->ramrod_flags)) {
  VAR_8->clear_pending(VAR_8);
  return VAR_1;
 } else {
  VAR_12 = FUNC_8( VAR_5,
        VAR_3,
        VAR_8->cid,
        VAR_8->rdata_mapping,
        VAR_2);
  if (VAR_12)
   return VAR_12;


  return VAR_0;
 }
}
