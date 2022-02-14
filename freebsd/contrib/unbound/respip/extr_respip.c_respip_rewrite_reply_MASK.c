
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct view {int lock; int isfirst; TYPE_1__* respip_set; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; } ;
struct respip_set {int num_tags; int tagname; int ip_tree; } ;
struct respip_client_info {size_t taglen; size_t tag_actions_size; size_t tag_datas_size; struct respip_set* respip_set; struct view* view; struct config_strlist** tag_datas; int * tag_actions; int * taglist; } ;
struct respip_action_info {int dummy; } ;
struct resp_addr {int action; int taglen; int taglist; } ;
struct reply_info {int dummy; } ;
struct regional {int dummy; } ;
struct query_info {int qtype; } ;
struct config_strlist {int dummy; } ;
typedef enum respip_action { ____Placeholder_respip_action } respip_action ;
typedef enum localzone_type { ____Placeholder_localzone_type } localzone_type ;
struct TYPE_3__ {int ip_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int const*,size_t,int const*,size_t,int,int*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct respip_action_info*,int,struct resp_addr const*,struct ub_packed_rrset_key*,int,struct respip_set*,int,struct regional*) ;
 struct resp_addr* FUNC_5 (struct reply_info const*,int *,size_t*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct resp_addr const*,int,int ,struct reply_info const*,size_t,struct reply_info**,int,struct config_strlist**,size_t,int ,int ,struct ub_packed_rrset_key**,struct regional*) ;
 int FUNC_7 (int ,int,struct reply_info const*,size_t,struct reply_info**,struct regional*) ;
 int VAR_5 ;

int
FUNC_8(const struct query_info* VAR_6,
 const struct respip_client_info* VAR_7, const struct reply_info* VAR_8,
 struct reply_info** VAR_9, struct respip_action_info* VAR_10,
 struct ub_packed_rrset_key** VAR_11, int VAR_12,
 struct regional* VAR_13)
{
 const uint8_t* VAR_14;
 size_t VAR_15;
 const uint8_t* VAR_16;
 size_t VAR_17;
 struct config_strlist** VAR_18;
 size_t VAR_19;
 struct view* VAR_20 = ((void*)0);
 struct respip_set* VAR_21 = ((void*)0);
 size_t VAR_22 = 0;
 enum respip_action VAR_23 = VAR_5;
 int VAR_24 = -1;
 const struct resp_addr* VAR_25 = ((void*)0);
 int VAR_26 = 1;
 struct ub_packed_rrset_key* VAR_27 = ((void*)0);

 if(!VAR_7)
  goto done;
 VAR_14 = VAR_7->taglist;
 VAR_15 = VAR_7->taglen;
 VAR_16 = VAR_7->tag_actions;
 VAR_17 = VAR_7->tag_actions_size;
 VAR_18 = VAR_7->tag_datas;
 VAR_19 = VAR_7->tag_datas_size;
 VAR_20 = VAR_7->view;
 VAR_21 = VAR_7->respip_set;
 if(VAR_20) {
  FUNC_1(&VAR_20->lock);
  if(VAR_20->respip_set) {
   if((VAR_25 = FUNC_5(VAR_8,
    &VAR_20->respip_set->ip_tree, &VAR_22))) {


    VAR_23 = VAR_25->action;
   }
  }
  if(!VAR_25 && !VAR_20->isfirst)
   goto done;
 }
 if(!VAR_25 && VAR_21 && (VAR_25 = FUNC_5(VAR_8, &VAR_21->ip_tree,
  &VAR_22))) {
  VAR_23 = (enum respip_action)FUNC_0(
   VAR_25->taglist, VAR_25->taglen, VAR_14, VAR_15,
   VAR_16, VAR_17,
   (enum localzone_type)VAR_25->action, &VAR_24,
   VAR_21->tagname, VAR_21->num_tags);
 }
 if(VAR_25 && !VAR_12) {
  int VAR_28 = 0;



  if(VAR_23 != VAR_3
   && VAR_23 != VAR_4
   && VAR_23 != VAR_2
   && (VAR_28 = FUNC_6(VAR_25, VAR_23,
   VAR_6->qtype, VAR_8, VAR_22, VAR_9, VAR_24, VAR_18,
   VAR_19, VAR_21->tagname, VAR_21->num_tags,
   &VAR_27, VAR_13)) < 0) {
   VAR_26 = 0;
   goto done;
  }



  if(!VAR_28 && !FUNC_7(VAR_6->qtype, VAR_23, VAR_8,
   VAR_22, VAR_9, VAR_13)) {
   VAR_26 = 0;
   goto done;
  }
 }
  done:
 if(VAR_20) {
  FUNC_2(&VAR_20->lock);
 }
 if(VAR_26) {







  if(VAR_27 &&
   VAR_27->rk.type == FUNC_3(VAR_1) &&
   VAR_6->qtype != VAR_0)
   *VAR_11 = VAR_27;

  VAR_26 = FUNC_4(VAR_10, VAR_23, VAR_25,
   VAR_27, VAR_24, VAR_21, VAR_12, VAR_13);
 }
 return VAR_26;
}
