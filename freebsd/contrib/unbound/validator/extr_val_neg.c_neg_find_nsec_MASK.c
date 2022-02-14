
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
typedef int time_t ;
struct val_neg_zone {int dclass; int name; scalar_t__ nsec3_hash; struct val_neg_zone* parent; int in_use; } ;
struct val_neg_data {int len; int name; int in_use; } ;
struct val_neg_cache {int lock; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct rrset_cache {int dummy; } ;
struct regional {int dummy; } ;
typedef int rbnode_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *) ;
 struct ub_packed_rrset_key* FUNC_1 (struct rrset_cache*,int ,int ,int ,int ,scalar_t__,struct regional*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct val_neg_zone*,int *,size_t,int,struct val_neg_data**) ;
 struct val_neg_zone* FUNC_5 (struct val_neg_cache*,int *,size_t,int,int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static struct ub_packed_rrset_key*
FUNC_8(struct val_neg_cache* VAR_3, uint8_t* VAR_4, size_t VAR_5,
 uint16_t VAR_6, struct rrset_cache* VAR_7, time_t VAR_8,
 struct regional* VAR_9)
{
 int VAR_10;
 uint32_t VAR_11;
 struct val_neg_zone* VAR_12;
 struct val_neg_data* VAR_13;
 struct ub_packed_rrset_key* VAR_14;

 VAR_10 = FUNC_0(VAR_4);
 FUNC_2(&VAR_3->lock);
 VAR_12 = FUNC_5(VAR_3, VAR_4, VAR_5, VAR_10,
  VAR_6);
 while(VAR_12 && !VAR_12->in_use)
  VAR_12 = VAR_12->parent;
 if(!VAR_12) {
  FUNC_3(&VAR_3->lock);
  return ((void*)0);
 }


 if(VAR_12->nsec3_hash) {
  FUNC_3(&VAR_3->lock);
  return ((void*)0);
 }


 (void)FUNC_4(VAR_12, VAR_4, VAR_5, VAR_10, &VAR_13);
 if(!VAR_13) {
  FUNC_3(&VAR_3->lock);
  return ((void*)0);
 }



 if(!VAR_13->in_use) {
  VAR_13 = (struct val_neg_data*)FUNC_7((rbnode_type*)VAR_13);
  if((rbnode_type*)VAR_13 == VAR_2 || !VAR_13->in_use) {
   FUNC_3(&VAR_3->lock);
   return ((void*)0);
  }
 }

 VAR_11 = 0;
 if(FUNC_6(VAR_13->name, VAR_12->name) == 0)
  VAR_11 = VAR_1;

 VAR_14 = FUNC_1(VAR_7, VAR_13->name, VAR_13->len, VAR_0,
  VAR_12->dclass, VAR_11, VAR_9, 0, 0, VAR_8);
 FUNC_3(&VAR_3->lock);
 return VAR_14;
}
