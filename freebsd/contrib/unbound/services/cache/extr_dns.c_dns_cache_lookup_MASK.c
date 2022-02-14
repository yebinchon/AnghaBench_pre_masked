
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int time_t ;
struct TYPE_11__ {int lock; scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_5__ entry; } ;
struct reply_info {int security; scalar_t__ an_numrrsets; TYPE_2__** rrsets; int flags; } ;
struct regional {int dummy; } ;
struct query_info {size_t qname_len; scalar_t__ qtype; int * qname; int * local_alias; scalar_t__ qclass; } ;
struct packed_rrset_data {scalar_t__ trust; } ;
struct msgreply_entry {struct query_info key; } ;
struct module_env {int msg_cache; TYPE_6__* cfg; int rrset_cache; int * now; } ;
struct lruhash_entry {int lock; scalar_t__ data; scalar_t__ key; } ;
struct TYPE_9__ {size_t qname_len; int * qname; } ;
struct dns_msg {TYPE_4__* rep; TYPE_3__ qinfo; } ;
typedef int hashvalue_type ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;
struct TYPE_12__ {scalar_t__ qname_minimisation; scalar_t__ harden_below_nxdomain; } ;
struct TYPE_10__ {void* security; } ;
struct TYPE_7__ {int type; } ;
struct TYPE_8__ {TYPE_1__ rk; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,size_t*) ;
 struct dns_msg* FUNC_3 (struct module_env*,int *,size_t,scalar_t__,scalar_t__,struct regional*) ;
 struct ub_packed_rrset_key* FUNC_4 (struct module_env*,int *,size_t,scalar_t__,int ,int ,int) ;
 int FUNC_5 (struct dns_msg*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct query_info*,scalar_t__) ;
 struct ub_packed_rrset_key* FUNC_9 (int ,int *,size_t,scalar_t__,scalar_t__,int ,int ,int ) ;
 struct dns_msg* FUNC_10 (struct ub_packed_rrset_key*,struct regional*,int ,struct query_info*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 struct lruhash_entry* FUNC_11 (int ,int ,struct query_info*,int ) ;
 struct dns_msg* FUNC_12 (struct ub_packed_rrset_key*,struct regional*,int ,struct query_info*,int*) ;
 struct dns_msg* FUNC_13 (struct module_env*,struct query_info*,struct reply_info*,struct regional*,int ,struct regional*) ;
 scalar_t__ FUNC_14 (struct ub_packed_rrset_key*,int **,size_t*) ;

struct dns_msg*
FUNC_15(struct module_env* VAR_14,
 uint8_t* VAR_15, size_t VAR_16, uint16_t VAR_17, uint16_t VAR_18,
 uint16_t VAR_19, struct regional* VAR_20, struct regional* VAR_21,
 int VAR_22)
{
 struct lruhash_entry* VAR_23;
 struct query_info VAR_24;
 hashvalue_type VAR_25;
 time_t VAR_26 = *VAR_14->now;
 struct ub_packed_rrset_key* VAR_27;


 VAR_24.qname = VAR_15;
 VAR_24.qname_len = VAR_16;
 VAR_24.qtype = VAR_17;
 VAR_24.qclass = VAR_18;
 VAR_24.local_alias = ((void*)0);
 VAR_25 = FUNC_8(&VAR_24, VAR_19);
 VAR_23 = FUNC_11(VAR_14->msg_cache, VAR_25, &VAR_24, 0);
 if(VAR_23) {
  struct msgreply_entry* VAR_28 = (struct msgreply_entry*)VAR_23->key;
  struct reply_info* VAR_29 = (struct reply_info*)VAR_23->data;
  struct dns_msg* VAR_30 = FUNC_13(VAR_14, &VAR_28->key, VAR_29, VAR_20, VAR_26,
   VAR_21);
  if(VAR_30) {
   FUNC_6(&VAR_23->lock);
   return VAR_30;
  }

  FUNC_6(&VAR_23->lock);
 }




 if(!VAR_22 &&
  (VAR_27=FUNC_4(VAR_14, VAR_15, VAR_16, VAR_18, VAR_26,
  VAR_5, 1))) {

  enum sec_status VAR_31 = VAR_13;
  struct dns_msg* VAR_32 = FUNC_12(VAR_27, VAR_20, VAR_26, &VAR_24,
   &VAR_31);
  if(VAR_32) {
   struct ub_packed_rrset_key* VAR_33;
   FUNC_6(&VAR_27->entry.lock);





   if(VAR_31 == VAR_12)
    return VAR_32;





   VAR_33 = FUNC_9(
    VAR_14->rrset_cache, VAR_15, VAR_16,
    VAR_3, VAR_18, 0, VAR_26, 0);
   if(VAR_33) {



    FUNC_6(&VAR_33->entry.lock);
    return VAR_32;
   }
  } else {
   FUNC_6(&VAR_27->entry.lock);
  }
 }



 if(!VAR_22 && VAR_17 != VAR_7 &&
    (VAR_27=FUNC_9(VAR_14->rrset_cache, VAR_15, VAR_16,
  VAR_3, VAR_18, 0, VAR_26, 0))) {
  uint8_t* VAR_34 = ((void*)0);
  size_t VAR_35;



  if(!(FUNC_14(VAR_27, &VAR_34, &VAR_35) && VAR_34 != ((void*)0))) {
   struct dns_msg* VAR_36 = FUNC_10(VAR_27, VAR_20, VAR_26, &VAR_24);
   if(VAR_36) {
    FUNC_6(&VAR_27->entry.lock);
    return VAR_36;
   }
  }
  FUNC_6(&VAR_27->entry.lock);
 }


 if((VAR_17 == VAR_7 || VAR_17 == VAR_6 ||
  VAR_17 == VAR_4) &&
  (VAR_27=FUNC_9(VAR_14->rrset_cache, VAR_15, VAR_16,
  VAR_17, VAR_18, 0, VAR_26, 0))) {







  struct packed_rrset_data *VAR_37 = (struct packed_rrset_data*)
   VAR_27->entry.data;
  if(VAR_37->trust != VAR_9 &&
   VAR_37->trust != VAR_8 &&
   (VAR_17 == VAR_7 ||
    (VAR_37->trust != VAR_11
    && VAR_37->trust != VAR_10) )) {
   struct dns_msg* VAR_38 = FUNC_10(VAR_27, VAR_20, VAR_26, &VAR_24);
   if(VAR_38) {
    FUNC_6(&VAR_27->entry.lock);
    return VAR_38;
   }
  }
  FUNC_6(&VAR_27->entry.lock);
 }





 if(VAR_14->cfg->harden_below_nxdomain)
     while(!FUNC_1(VAR_24.qname)) {
  FUNC_2(&VAR_24.qname, &VAR_24.qname_len);
  VAR_25 = FUNC_8(&VAR_24, VAR_19);
  VAR_23 = FUNC_11(VAR_14->msg_cache, VAR_25, &VAR_24, 0);
  if(!VAR_23 && VAR_24.qtype != VAR_1 &&
   VAR_14->cfg->qname_minimisation) {
   VAR_24.qtype = VAR_1;
   VAR_25 = FUNC_8(&VAR_24, VAR_19);
   VAR_23 = FUNC_11(VAR_14->msg_cache, VAR_25, &VAR_24, 0);
  }
  if(VAR_23) {
   struct reply_info* VAR_39 = (struct reply_info*)VAR_23->data;
   struct dns_msg* VAR_40;
   if(FUNC_0(VAR_39->flags) == VAR_0
     && VAR_39->security == VAR_12
     && (VAR_39->an_numrrsets == 0 ||
    FUNC_7(VAR_39->rrsets[0]->rk.type) != VAR_3)
     && (VAR_40=FUNC_13(VAR_14, &VAR_24, VAR_39, VAR_20, VAR_26, VAR_21))){
    FUNC_6(&VAR_23->lock);
    VAR_40->qinfo.qname=VAR_15;
    VAR_40->qinfo.qname_len=VAR_16;

    VAR_40->rep->security = VAR_13;
    FUNC_5(VAR_40);
    return VAR_40;
   }
   FUNC_6(&VAR_23->lock);
  }
  VAR_24.qtype = VAR_17;
     }


 if(VAR_17 == VAR_2) {
  return FUNC_3(VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_20);
 }

 return ((void*)0);
}
