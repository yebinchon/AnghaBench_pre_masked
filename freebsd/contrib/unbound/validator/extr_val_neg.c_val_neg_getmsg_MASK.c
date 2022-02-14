
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int time_t ;
struct val_neg_zone {int* name; struct val_neg_zone* parent; int in_use; } ;
struct val_neg_cache {int lock; int num_neg_cache_nxdomain; int num_neg_cache_noerror; } ;
struct TYPE_6__ {int* dname; size_t dname_len; } ;
struct TYPE_5__ {int lock; scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_3__ rk; TYPE_2__ entry; } ;
struct rrset_cache {int dummy; } ;
struct regional {int dummy; } ;
struct query_info {scalar_t__ qtype; int* qname; size_t qname_len; int qclass; } ;
struct packed_rrset_data {scalar_t__ security; scalar_t__ rrsig_count; } ;
struct dns_msg {TYPE_1__* rep; } ;
struct config_file {int aggressive_nsec; } ;
typedef int sldns_buffer ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct rrset_cache*,int ,struct regional*,struct dns_msg*,struct val_neg_zone*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,size_t*) ;
 int FUNC_4 (int**,size_t*) ;
 scalar_t__ FUNC_5 (int*,int*) ;
 int FUNC_6 (struct dns_msg*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 int FUNC_7 (struct dns_msg*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 struct dns_msg* FUNC_8 (int*,size_t,scalar_t__,int ,struct regional*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int*,int*,size_t) ;
 struct val_neg_zone* FUNC_14 (struct val_neg_cache*,int*,size_t,int,int ) ;
 struct ub_packed_rrset_key* FUNC_15 (struct val_neg_cache*,int*,size_t,int ,struct rrset_cache*,int ,struct regional*) ;
 struct dns_msg* FUNC_16 (struct val_neg_zone*,int*,size_t,int,int *,struct rrset_cache*,struct regional*,int ,int*) ;
 int* FUNC_17 (int*,struct ub_packed_rrset_key*) ;
 scalar_t__ FUNC_18 (struct ub_packed_rrset_key*,struct query_info*,int**) ;
 struct ub_packed_rrset_key* FUNC_19 (struct ub_packed_rrset_key*,struct regional*,int ) ;
 scalar_t__ FUNC_20 (int*,int*) ;
 struct ub_packed_rrset_key* FUNC_21 (struct rrset_cache*,int*,size_t,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_22 (struct ub_packed_rrset_key*,int*) ;

struct dns_msg*
FUNC_23(struct val_neg_cache* VAR_6, struct query_info* VAR_7,
 struct regional* VAR_8, struct rrset_cache* VAR_9,
 sldns_buffer* VAR_10, time_t VAR_11, int VAR_12, uint8_t* VAR_13,
 struct config_file* VAR_14)
{
 struct dns_msg* VAR_15;
 struct ub_packed_rrset_key* VAR_16;
 struct ub_packed_rrset_key* VAR_17;
 uint8_t* VAR_18 = ((void*)0);
 uint8_t* VAR_19 = ((void*)0);
 size_t VAR_20;
 uint8_t VAR_21[VAR_0+3];
 struct query_info VAR_22;
 struct ub_packed_rrset_key* VAR_23;
 struct packed_rrset_data* VAR_24;
 int VAR_25 = VAR_1;
 uint8_t* VAR_26;
 size_t VAR_27;
 int VAR_28;
 struct val_neg_zone* VAR_29;


 if(VAR_7->qtype != VAR_3 && !VAR_14->aggressive_nsec)
  return ((void*)0);
 FUNC_12(!VAR_13 || FUNC_5(VAR_7->qname, VAR_13));


 VAR_16 = FUNC_15(VAR_6, VAR_7->qname, VAR_7->qname_len, VAR_7->qclass,
  VAR_9, VAR_11, VAR_8);



 if(VAR_16 && FUNC_18(VAR_16, VAR_7, &VAR_18) && !VAR_18) {
  if(!(VAR_15 = FUNC_8(VAR_7->qname, VAR_7->qname_len,
   VAR_7->qtype, VAR_7->qclass, VAR_8, 2)))
   return ((void*)0);
  if(!FUNC_7(VAR_15, VAR_8, VAR_16, 0))
   return ((void*)0);
  if(VAR_12 && !FUNC_1(VAR_9, VAR_11, VAR_8, VAR_15, ((void*)0)))
   return ((void*)0);

  FUNC_9(&VAR_6->lock);
  VAR_6->num_neg_cache_noerror++;
  FUNC_10(&VAR_6->lock);
  return VAR_15;
 } else if(VAR_16 && FUNC_22(VAR_16, VAR_7->qname)) {
  if(!(VAR_15 = FUNC_8(VAR_7->qname, VAR_7->qname_len,
   VAR_7->qtype, VAR_7->qclass, VAR_8, 3)))
   return ((void*)0);
  if(!(VAR_19 = FUNC_17(VAR_7->qname, VAR_16)))
   return ((void*)0);
  FUNC_3(VAR_19, &VAR_20);



  if(!VAR_18 || FUNC_20(VAR_18, VAR_19) != 0) {






   VAR_21[0] = 1;
   VAR_21[1] = (uint8_t)'*';
   FUNC_13(VAR_21+2, VAR_19, VAR_20);
   VAR_22.qname = VAR_21;
   VAR_22.qname_len = VAR_20 + 2;
   VAR_22.qtype = VAR_7->qtype;


   if((VAR_23 = FUNC_21(VAR_9, VAR_22.qname,
    VAR_22.qname_len, VAR_22.qtype,
    VAR_7->qclass, 0 , VAR_11, 0 ))) {

    VAR_24 = (struct packed_rrset_data*)VAR_23->entry.data;
    if(!(VAR_24->security == VAR_4 ||
     (VAR_24->security == VAR_5 &&
     VAR_24->rrsig_count > 0))) {
     FUNC_11(&VAR_23->entry.lock);
     return ((void*)0);
    }
    if(!(VAR_17 = FUNC_19(VAR_23,
     VAR_8, VAR_11))) {
     FUNC_11(&VAR_23->entry.lock);
     return ((void*)0);
    };
    FUNC_11(&VAR_23->entry.lock);
    VAR_17->rk.dname = VAR_7->qname;
    VAR_17->rk.dname_len = VAR_7->qname_len;
    if(!FUNC_6(VAR_15, VAR_8, VAR_17, 0))
     return ((void*)0);


    VAR_12 = 0;
   } else {


    if(!(VAR_17 = FUNC_15(VAR_6, VAR_22.qname,
     VAR_22.qname_len, VAR_7->qclass,
     VAR_9, VAR_11, VAR_8)))
     return ((void*)0);

    VAR_18 = ((void*)0);
    if(FUNC_22(VAR_17, VAR_21))
     VAR_25 = VAR_2;
    else if(!FUNC_18(VAR_17, &VAR_22,
     &VAR_18) || VAR_18)




     return ((void*)0);
    if(FUNC_20(VAR_17->rk.dname,
     VAR_16->rk.dname) != 0)
     if(!FUNC_7(VAR_15, VAR_8, VAR_17, 0))
      return ((void*)0);
   }
  }

  if(!FUNC_7(VAR_15, VAR_8, VAR_16, 0))
   return ((void*)0);
  if(VAR_12 && !FUNC_1(VAR_9, VAR_11, VAR_8, VAR_15, ((void*)0)))
   return ((void*)0);


  FUNC_9(&VAR_6->lock);
  if(VAR_25 == VAR_1)
   VAR_6->num_neg_cache_noerror++;
  else if(VAR_25 == VAR_2)
   VAR_6->num_neg_cache_nxdomain++;
  FUNC_10(&VAR_6->lock);

  FUNC_0(VAR_15->rep->flags, VAR_25);
  return VAR_15;
 }


 if(VAR_7->qtype != VAR_3){
  return ((void*)0);
 }


 VAR_26 = VAR_7->qname;
 VAR_27 = VAR_7->qname_len;
 FUNC_4(&VAR_26, &VAR_27);
 VAR_28 = FUNC_2(VAR_26);


 FUNC_9(&VAR_6->lock);
 VAR_29 = FUNC_14(VAR_6, VAR_26, VAR_27, VAR_28,
  VAR_7->qclass);
 while(VAR_29 && !VAR_29->in_use)
  VAR_29 = VAR_29->parent;


 if(VAR_29 && VAR_13) {
  if(!FUNC_5(VAR_29->name, VAR_13))
   VAR_29 = ((void*)0);
 }
 if(!VAR_29) {
  FUNC_10(&VAR_6->lock);
  return ((void*)0);
 }

 VAR_15 = FUNC_16(VAR_29, VAR_7->qname, VAR_7->qname_len,
  VAR_28+1, VAR_10, VAR_9, VAR_8, VAR_11, VAR_13);
 if(VAR_15 && VAR_12 && !FUNC_1(VAR_9, VAR_11, VAR_8, VAR_15, VAR_29)) {
  FUNC_10(&VAR_6->lock);
  return ((void*)0);
 }
 FUNC_10(&VAR_6->lock);
 return VAR_15;
}
