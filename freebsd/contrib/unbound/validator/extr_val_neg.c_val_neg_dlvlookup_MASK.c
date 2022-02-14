
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ time_t ;
struct val_neg_zone {int dclass; int * name; scalar_t__ nsec3_hash; struct val_neg_zone* parent; int in_use; } ;
struct val_neg_data {int len; int * name; struct val_neg_data* parent; int in_use; } ;
struct val_neg_cache {int lock; } ;
struct TYPE_2__ {int lock; scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct rrset_cache {int dummy; } ;
struct query_info {int * local_alias; int qclass; int qtype; int * qname; } ;
struct packed_rrset_data {scalar_t__ ttl; scalar_t__ security; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int *,int ,int ) ;
 int FUNC_5 (struct val_neg_zone*,int *,size_t,int,struct val_neg_data**) ;
 struct val_neg_zone* FUNC_6 (struct val_neg_cache*,int *,size_t,int,int ) ;
 int FUNC_7 (struct val_neg_cache*,struct val_neg_data*) ;
 int FUNC_8 (struct val_neg_cache*,struct val_neg_data*) ;
 int FUNC_9 (struct ub_packed_rrset_key*,struct query_info*,int **) ;
 scalar_t__ FUNC_10 (int *,int *) ;
 struct ub_packed_rrset_key* FUNC_11 (struct rrset_cache*,int *,int ,int ,int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_12 (struct ub_packed_rrset_key*,int *) ;
 int FUNC_13 (int ,char*) ;

int FUNC_14(struct val_neg_cache* VAR_5, uint8_t* VAR_6, size_t VAR_7,
        uint16_t VAR_8, struct rrset_cache* VAR_9, time_t VAR_10)
{

 struct val_neg_zone* VAR_11;
 struct val_neg_data* VAR_12;
 int VAR_13;
 struct ub_packed_rrset_key* VAR_14;
 struct packed_rrset_data* VAR_15;
 uint32_t VAR_16;
 uint8_t* VAR_17;
 struct query_info VAR_18;
 if(!VAR_5) return 0;

 FUNC_4(VAR_3, "negcache dlvlookup", VAR_6,
  VAR_0, VAR_8);

 VAR_13 = FUNC_0(VAR_6);
 FUNC_1(&VAR_5->lock);
 VAR_11 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_13, VAR_8);
 while(VAR_11 && !VAR_11->in_use)
  VAR_11 = VAR_11->parent;
 if(!VAR_11) {
  FUNC_2(&VAR_5->lock);
  return 0;
 }
 FUNC_4(VAR_3, "negcache zone", VAR_11->name, 0,
  VAR_11->dclass);


 if(VAR_11->nsec3_hash) {
  FUNC_2(&VAR_5->lock);
  return 0;
 }


 (void)FUNC_5(VAR_11, VAR_6, VAR_7, VAR_13, &VAR_12);
 while(VAR_12 && !VAR_12->in_use)
  VAR_12 = VAR_12->parent;
 if(!VAR_12) {
  FUNC_2(&VAR_5->lock);
  return 0;
 }
 FUNC_4(VAR_3, "negcache rr", VAR_12->name,
  VAR_1, VAR_11->dclass);


 VAR_16 = 0;
 if(FUNC_10(VAR_12->name, VAR_11->name) == 0)
  VAR_16 = VAR_2;
 VAR_14 = FUNC_11(VAR_9, VAR_12->name, VAR_12->len,
  VAR_1, VAR_11->dclass, VAR_16, VAR_10, 0);


 if(!VAR_14) {
  FUNC_2(&VAR_5->lock);
  return 0;
 }
 VAR_15 = (struct packed_rrset_data*)VAR_14->entry.data;
 if(!VAR_15 || VAR_10 > VAR_15->ttl) {
  FUNC_3(&VAR_14->entry.lock);

  FUNC_7(VAR_5, VAR_12);
  FUNC_2(&VAR_5->lock);
  return 0;
 }
 if(VAR_15->security != VAR_4) {
  FUNC_3(&VAR_14->entry.lock);
  FUNC_7(VAR_5, VAR_12);
  FUNC_2(&VAR_5->lock);
  return 0;
 }
 FUNC_13(VAR_3, "negcache got secure rrset");




 VAR_18.qname = VAR_6;
 VAR_18.qtype = VAR_0;
 VAR_18.qclass = VAR_8;
 VAR_18.local_alias = ((void*)0);
 if(!FUNC_9(VAR_14, &VAR_18, &VAR_17) &&
  !FUNC_12(VAR_14, VAR_6)) {

  FUNC_3(&VAR_14->entry.lock);
  FUNC_2(&VAR_5->lock);
  FUNC_13(VAR_3, "negcache not proven");
  return 0;
 }





 FUNC_3(&VAR_14->entry.lock);

 FUNC_8(VAR_5, VAR_12);
 FUNC_2(&VAR_5->lock);
 FUNC_13(VAR_3, "negcache DLV denial proven");
 return 1;
}
