
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__* dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct nsec3_filter {int zone; } ;
struct nsec3_cached_hash {size_t b32_len; int b32; } ;


 scalar_t__ FUNC_0 (scalar_t__*,int ,size_t) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ) ;

__attribute__((used)) static int
FUNC_2(struct nsec3_filter* VAR_0,
 struct nsec3_cached_hash* VAR_1, struct ub_packed_rrset_key* VAR_2)
{
 uint8_t* VAR_3 = VAR_2->rk.dname;
 if(VAR_1->b32_len != 0 && (size_t)VAR_3[0] == VAR_1->b32_len &&
  FUNC_0(VAR_3+1, VAR_1->b32, VAR_1->b32_len) == 0 &&
  FUNC_1(VAR_3+(size_t)VAR_3[0]+1, VAR_0->zone) == 0) {
  return 1;
 }
 return 0;
}
