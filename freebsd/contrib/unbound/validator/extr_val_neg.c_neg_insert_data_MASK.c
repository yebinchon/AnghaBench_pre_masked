
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct val_neg_zone {int nsec3_hash; size_t nsec3_iter; size_t nsec3_saltlen; int * nsec3_salt; int tree; } ;
struct val_neg_data {scalar_t__ count; int in_use; struct val_neg_data* parent; int node; struct val_neg_zone* zone; scalar_t__ len; int name; } ;
struct val_neg_cache {size_t nsec3_max_iter; int use; } ;
struct TYPE_4__ {size_t dname_len; int type; int rrset_class; int * dname; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct packed_rrset_data {scalar_t__ security; scalar_t__ rrsig_count; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int *,int *,size_t) ;
 int * FUNC_6 (int *,size_t) ;
 struct val_neg_data* FUNC_7 (struct val_neg_zone*,int *,size_t,int) ;
 struct val_neg_data* FUNC_8 (int *,size_t,int,struct val_neg_data*) ;
 int FUNC_9 (struct val_neg_cache*,struct val_neg_data*) ;
 int FUNC_10 (struct val_neg_cache*,struct val_neg_data*) ;
 scalar_t__ FUNC_11 (struct ub_packed_rrset_key*,int ,int*,size_t*,int **,size_t*) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,int *) ;
 int FUNC_14 (int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_15 (struct val_neg_cache*,struct val_neg_zone*,struct val_neg_data*,struct ub_packed_rrset_key*) ;

void FUNC_16(struct val_neg_cache* VAR_4,
 struct val_neg_zone* VAR_5, struct ub_packed_rrset_key* VAR_6)
{
 struct packed_rrset_data* VAR_7;
 struct val_neg_data* VAR_8;
 struct val_neg_data* VAR_9;
 uint8_t* VAR_10 = VAR_6->rk.dname;
 size_t VAR_11 = VAR_6->rk.dname_len;
 int VAR_12 = FUNC_0(VAR_6->rk.dname);

 VAR_7 = (struct packed_rrset_data*)VAR_6->entry.data;
 if( !(VAR_7->security == VAR_2 ||
  (VAR_7->security == VAR_3 && VAR_7->rrsig_count > 0)))
  return;
 FUNC_4(VAR_1, "negcache rr",
  VAR_6->rk.dname, FUNC_12(VAR_6->rk.type),
  FUNC_12(VAR_6->rk.rrset_class));


 VAR_8 = FUNC_7(VAR_5, VAR_10, VAR_11, VAR_12);
 if(VAR_8 && FUNC_13(VAR_8->name, VAR_10) == 0) {

  FUNC_2(VAR_8->count > 0);
  VAR_9 = VAR_8;
 } else {
  struct val_neg_data* VAR_13, *VAR_14;



  FUNC_2(!VAR_8 || VAR_8->count > 0);

  VAR_9 = FUNC_8(VAR_10, VAR_11, VAR_12, VAR_8);
  if(!VAR_9) {
   FUNC_3("out of memory inserting NSEC negative cache");
   return;
  }
  VAR_9->in_use = 0;


  VAR_13 = VAR_9;
  while(VAR_13) {
   VAR_14 = VAR_13->parent;

   VAR_4->use += sizeof(struct val_neg_data) + VAR_13->len;

   VAR_13->zone = VAR_5;
   (void)FUNC_14(&VAR_5->tree, &VAR_13->node);

   if(VAR_14 == ((void*)0))
    VAR_13->parent = VAR_8;
   VAR_13 = VAR_14;
  }
 }

 if(!VAR_9->in_use) {
  struct val_neg_data* VAR_15;

  VAR_9->in_use = 1;

  for(VAR_15=VAR_9; VAR_15; VAR_15 = VAR_15->parent) {
   VAR_15->count++;
  }

  FUNC_9(VAR_4, VAR_9);
 } else {

  FUNC_10(VAR_4, VAR_9);
 }


 if(FUNC_12(VAR_6->rk.type) == VAR_0) {
  int VAR_16;
  uint8_t* VAR_17;
  size_t VAR_18, VAR_19;
  if(FUNC_11(VAR_6, 0, &VAR_16, &VAR_19, &VAR_17, &VAR_18) &&
   VAR_19 <= VAR_4->nsec3_max_iter &&
   (VAR_16 != VAR_5->nsec3_hash || VAR_19 != VAR_5->nsec3_iter ||
   VAR_18 != VAR_5->nsec3_saltlen ||
   FUNC_5(VAR_5->nsec3_salt, VAR_17, VAR_18) != 0)) {

   if(VAR_18 > 0) {
    uint8_t* VAR_20 = FUNC_6(VAR_17, VAR_18);
    if(VAR_20) {
     FUNC_1(VAR_5->nsec3_salt);
     VAR_5->nsec3_salt = VAR_20;
     VAR_5->nsec3_saltlen = VAR_18;
     VAR_5->nsec3_iter = VAR_19;
     VAR_5->nsec3_hash = VAR_16;
    }
   } else {
    FUNC_1(VAR_5->nsec3_salt);
    VAR_5->nsec3_salt = ((void*)0);
    VAR_5->nsec3_saltlen = 0;
    VAR_5->nsec3_iter = VAR_19;
    VAR_5->nsec3_hash = VAR_16;
   }
  }
 }


 FUNC_15(VAR_4, VAR_5, VAR_9, VAR_6);
}
