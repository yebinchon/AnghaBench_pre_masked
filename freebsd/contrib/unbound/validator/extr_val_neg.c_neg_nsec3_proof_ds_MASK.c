
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int time_t ;
struct val_neg_zone {int dclass; int name; int nsec3_hash; } ;
struct val_neg_data {int len; int name; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct rrset_cache {int dummy; } ;
struct regional {int dummy; } ;
struct nsec3_cached_hash {size_t hash_len; size_t b32_len; scalar_t__* b32; scalar_t__* hash; } ;
struct dns_msg {int dummy; } ;
typedef int sldns_buffer ;
typedef int nc_b32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dns_msg*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 struct dns_msg* FUNC_1 (scalar_t__*,size_t,int ,int ,struct regional*,int) ;
 struct ub_packed_rrset_key* FUNC_2 (struct rrset_cache*,int ,int ,int ,int ,int ,struct regional*,int,int ,int ) ;
 struct val_neg_data* FUNC_3 (struct val_neg_zone*,scalar_t__*,size_t,int,int *,scalar_t__*,size_t*) ;
 struct ub_packed_rrset_key* FUNC_4 (struct val_neg_zone*,scalar_t__*,size_t,struct rrset_cache*,struct regional*,int ,scalar_t__*,int) ;
 int FUNC_5 (struct val_neg_zone*,struct ub_packed_rrset_key*) ;
 scalar_t__ FUNC_6 (int ,struct nsec3_cached_hash*,struct ub_packed_rrset_key*,int ,int *) ;
 int FUNC_7 (struct ub_packed_rrset_key*,int ) ;
 scalar_t__ FUNC_8 (struct ub_packed_rrset_key*,int ,int ) ;

__attribute__((used)) static struct dns_msg*
FUNC_9(struct val_neg_zone* VAR_5, uint8_t* VAR_6, size_t VAR_7,
  int VAR_8, sldns_buffer* VAR_9, struct rrset_cache* VAR_10,
  struct regional* VAR_11, time_t VAR_12, uint8_t* VAR_13)
{
 struct dns_msg* VAR_14;
 struct val_neg_data* VAR_15;
 uint8_t VAR_16[VAR_4];
 size_t VAR_17;
 struct ub_packed_rrset_key* VAR_18, *VAR_19;
 struct nsec3_cached_hash VAR_20;
 uint8_t VAR_21[257];
 if(!VAR_5->nsec3_hash)
  return ((void*)0);

 if(!(VAR_15=FUNC_3(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
  VAR_16, &VAR_17))) {
  return ((void*)0);
 }


 VAR_18 = FUNC_2(VAR_10, VAR_15->name, VAR_15->len,
  VAR_2, VAR_5->dclass, 0, VAR_11, 1,
  VAR_0, VAR_12);
 if(!VAR_18)
  return ((void*)0);
 if(!FUNC_5(VAR_5, VAR_18))
  return ((void*)0);

 if(VAR_17 == 0) {


  if(FUNC_8(VAR_18, 0, VAR_3) ||
   FUNC_8(VAR_18, 0, VAR_0) ||
   !FUNC_8(VAR_18, 0, VAR_1))
   return ((void*)0);
  if(!(VAR_14 = FUNC_1(VAR_6, VAR_7,
   VAR_0, VAR_5->dclass, VAR_11, 1)))
   return ((void*)0);

  if(!FUNC_0(VAR_14, VAR_11, VAR_18, 0))
   return ((void*)0);
  return VAR_14;
 }



 if(!VAR_13)
  return ((void*)0);



 VAR_19 = FUNC_4(VAR_5, VAR_16, VAR_17, VAR_10,
  VAR_11, VAR_12, VAR_21, sizeof(VAR_21));
 if(!VAR_19)
  return ((void*)0);
 if(!FUNC_5(VAR_5, VAR_19))
  return ((void*)0);
 if(!FUNC_7(VAR_19, 0))
  return ((void*)0);
 VAR_20.hash = VAR_16;
 VAR_20.hash_len = VAR_17;
 VAR_20.b32 = VAR_21+1;
 VAR_20.b32_len = (size_t)VAR_21[0];
 if(FUNC_6(VAR_5->name, &VAR_20, VAR_19, 0, VAR_9)) {





  if(!(VAR_14 = FUNC_1(VAR_6, VAR_7,
   VAR_0, VAR_5->dclass, VAR_11, 3)))
   return ((void*)0);

  if(!FUNC_0(VAR_14, VAR_11, VAR_18, 0))
   return ((void*)0);
  if(!FUNC_0(VAR_14, VAR_11, VAR_19, 0))
   return ((void*)0);
  return VAR_14;
 }
 return ((void*)0);
}
