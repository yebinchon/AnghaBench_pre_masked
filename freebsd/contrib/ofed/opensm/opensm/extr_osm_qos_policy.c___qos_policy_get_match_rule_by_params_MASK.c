
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_10__ {int qos_match_rules; TYPE_2__* p_subn; } ;
typedef TYPE_3__ osm_qos_policy_t ;
struct TYPE_11__ {char* use; scalar_t__ pkey_range_len; int pkey_range_arr; scalar_t__ service_id_range_len; int service_id_range_arr; scalar_t__ qos_class_range_len; int qos_class_range_arr; int destination_group_list; int source_group_list; } ;
typedef TYPE_4__ osm_qos_match_rule_t ;
typedef int osm_physp_t ;
typedef int osm_log_t ;
typedef int ib_net64_t ;
typedef scalar_t__ cl_list_iterator_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_9__ {TYPE_1__* p_osm; } ;
struct TYPE_8__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_4 (TYPE_3__ const*,int const*,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static osm_qos_match_rule_t *FUNC_10(
    const osm_qos_policy_t * VAR_7,
    uint64_t VAR_8,
    uint16_t VAR_9,
    uint16_t VAR_10,
    const osm_physp_t * VAR_11,
    const osm_physp_t * VAR_12,
    ib_net64_t VAR_13)
{
 osm_qos_match_rule_t *VAR_14 = ((void*)0);
 cl_list_iterator_t VAR_15;
 osm_log_t * VAR_16 = &VAR_7->p_subn->p_osm->log;

 boolean_t VAR_17 = VAR_0,
    VAR_18 = VAR_0,
    VAR_19 = VAR_0,
    VAR_20 = VAR_0,
    VAR_21 = VAR_0,
    VAR_22 = VAR_0;

 if (!FUNC_5(&VAR_7->qos_match_rules))
  return ((void*)0);

 FUNC_1(VAR_16);



 VAR_15 = FUNC_7(&VAR_7->qos_match_rules);
 while (VAR_15 != FUNC_6(&VAR_7->qos_match_rules)) {
  VAR_14 =
      (osm_qos_match_rule_t *) FUNC_9(VAR_15);
  if (!VAR_14) {
   VAR_15 = FUNC_8(VAR_15);
   continue;
  }




  if (FUNC_5(&VAR_14->source_group_list)
      && !FUNC_5(&VAR_14->destination_group_list)) {
   if (!FUNC_4(VAR_7,
        VAR_11,
        &VAR_14->
        source_group_list))
   {
    VAR_15 = FUNC_8(VAR_15);
    continue;
   }
   VAR_17 = VAR_6;
  }




  if (FUNC_5(&VAR_14->destination_group_list)
      && !FUNC_5(&VAR_14->source_group_list)) {
   if (!FUNC_4(VAR_7,
        VAR_12,
        &VAR_14->
        destination_group_list))
   {
    VAR_15 = FUNC_8(VAR_15);
    continue;
   }
   VAR_18 = VAR_6;
  }




  if (FUNC_5(&VAR_14->source_group_list)
      && FUNC_5(&VAR_14->destination_group_list)) {
   if (FUNC_4(VAR_7,
              VAR_11,
              &VAR_14->
              source_group_list)
       && FUNC_4(VAR_7,
          VAR_12,
          &VAR_14->
          destination_group_list))
    VAR_19 = VAR_6;
   else {
    VAR_15 = FUNC_8(VAR_15);
    continue;
   }
  }




  if (VAR_14->qos_class_range_len) {
   if (!(VAR_13 & VAR_2)) {
    VAR_15 = FUNC_8(VAR_15);
    continue;
   }

   if (!FUNC_3
       (VAR_14->qos_class_range_arr,
        VAR_14->qos_class_range_len,
        VAR_9)) {
    VAR_15 = FUNC_8(VAR_15);
    continue;
   }
   VAR_20 = VAR_6;
  }




  if (VAR_14->service_id_range_len) {
   if (!(VAR_13 & VAR_4) ||
       !(VAR_13 & VAR_3)) {
    VAR_15 = FUNC_8(VAR_15);
    continue;
   }

   if (!FUNC_3
       (VAR_14->service_id_range_arr,
        VAR_14->service_id_range_len,
        VAR_8)) {
    VAR_15 = FUNC_8(VAR_15);
    continue;
   }
   VAR_21 = VAR_6;
  }




  if (VAR_14->pkey_range_len) {
   if (!(VAR_13 & VAR_1)) {
    VAR_15 = FUNC_8(VAR_15);
    continue;
   }

   if (!FUNC_3
       (VAR_14->pkey_range_arr,
        VAR_14->pkey_range_len,
        VAR_10 & 0x7FFF)) {
    VAR_15 = FUNC_8(VAR_15);
    continue;
   }
   VAR_22 = VAR_6;
  }


  break;
 }

 if (VAR_15 == FUNC_6(&VAR_7->qos_match_rules))
  VAR_14 = ((void*)0);

 if (VAR_14)
  FUNC_0(VAR_16, VAR_5,
   "request matched rule (%s) by:%s%s%s%s%s%s\n",
   (VAR_14->use) ?
    VAR_14->use : "no description",
   (VAR_17) ? " SGUID" : "",
   (VAR_18) ? " DGUID" : "",
   (VAR_19) ? "SorDGUID" : "",
   (VAR_20) ? " QoS_Class" : "",
   (VAR_21) ? " ServiceID" : "",
   (VAR_22) ? " PKey" : "");
 else
  FUNC_0(VAR_16, VAR_5,
   "request not matched any rule\n");

 FUNC_2(VAR_16);
 return VAR_14;
}
