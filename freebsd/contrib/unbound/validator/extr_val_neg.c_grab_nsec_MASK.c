
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int time_t ;
struct TYPE_2__ {int lock; scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct rrset_cache {int dummy; } ;
struct regional {int dummy; } ;
struct packed_rrset_data {scalar_t__ security; scalar_t__ rrsig_count; int ttl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ub_packed_rrset_key*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct ub_packed_rrset_key*,scalar_t__) ;
 struct ub_packed_rrset_key* FUNC_3 (struct ub_packed_rrset_key*,struct regional*,int ) ;
 struct ub_packed_rrset_key* FUNC_4 (struct rrset_cache*,int *,size_t,scalar_t__,scalar_t__,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static struct ub_packed_rrset_key*
FUNC_5(struct rrset_cache* VAR_4, uint8_t* VAR_5, size_t VAR_6,
 uint16_t VAR_7, uint16_t VAR_8, uint32_t VAR_9,
 struct regional* VAR_10, int VAR_11, uint16_t VAR_12,
 time_t VAR_13)
{
 struct ub_packed_rrset_key* VAR_14, *VAR_15 = FUNC_4(VAR_4,
  VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_13, 0);
 struct packed_rrset_data* VAR_16;
 if(!VAR_15) return ((void*)0);
 VAR_16 = (struct packed_rrset_data*)VAR_15->entry.data;
 if(VAR_16->ttl < VAR_13) {
  FUNC_0(&VAR_15->entry.lock);
  return ((void*)0);
 }

 if( ! ( VAR_16->security == VAR_2 ||
  (VAR_16->security == VAR_3 &&
  VAR_16->rrsig_count > 0) ) ) {
  FUNC_0(&VAR_15->entry.lock);
  return ((void*)0);
 }

 if(VAR_11 && (
  (VAR_7 == VAR_0 && FUNC_2(VAR_15, VAR_12)) ||
  (VAR_7 == VAR_1 && !FUNC_1(VAR_15, VAR_12))
  )) {
  FUNC_0(&VAR_15->entry.lock);
  return ((void*)0);
 }

 VAR_14 = FUNC_3(VAR_15, VAR_10, VAR_13);

 FUNC_0(&VAR_15->entry.lock);
 return VAR_14;
}
