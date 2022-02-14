
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int time_t ;
struct val_neg_zone {size_t len; int dclass; int * name; } ;
struct TYPE_2__ {int lock; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct rrset_cache {int dummy; } ;
struct regional {int dummy; } ;
struct dns_msg {int rep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dns_msg*,struct regional*,struct ub_packed_rrset_key*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,size_t*,int *) ;
 struct ub_packed_rrset_key* FUNC_3 (struct rrset_cache*,int *,size_t,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct rrset_cache* VAR_2, time_t VAR_3,
 struct regional* VAR_4, struct dns_msg* VAR_5, struct val_neg_zone* VAR_6)
{
 struct ub_packed_rrset_key* VAR_7;
 uint8_t* VAR_8;
 size_t VAR_9;
 uint16_t VAR_10;
 if(VAR_6) {
  VAR_8 = VAR_6->name;
  VAR_9 = VAR_6->len;
  VAR_10 = VAR_6->dclass;
 } else {

  VAR_8 = FUNC_2(VAR_5->rep, &VAR_9, &VAR_10);
  if(!VAR_8)
   return 0;
 }
 VAR_7 = FUNC_3(VAR_2, VAR_8, VAR_9, VAR_0,
  VAR_10, VAR_1, VAR_3, 0);
 if(!VAR_7)
  return 0;
 if(!FUNC_0(VAR_5, VAR_4, VAR_7, VAR_3)) {
  FUNC_1(&VAR_7->entry.lock);
  return 0;
 }
 FUNC_1(&VAR_7->entry.lock);
 return 1;
}
