
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int time_t ;
struct TYPE_4__ {int* dname; size_t dname_len; } ;
struct TYPE_3__ {int hash; } ;
struct ub_packed_rrset_key {int id; TYPE_2__ rk; TYPE_1__ entry; } ;
struct rrset_ref {int id; struct ub_packed_rrset_key* key; } ;
struct rrset_cache {int dummy; } ;
struct alloc_cache {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct alloc_cache*,struct ub_packed_rrset_key*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int*,size_t) ;
 int FUNC_4 (int*,int*,size_t) ;
 struct ub_packed_rrset_key* FUNC_5 (struct ub_packed_rrset_key*,struct alloc_cache*,int ) ;
 int FUNC_6 (struct rrset_cache*,struct rrset_ref*,struct alloc_cache*,int ) ;
 int FUNC_7 (TYPE_2__*) ;

void FUNC_8(struct rrset_cache* VAR_1,
 struct ub_packed_rrset_key* VAR_2, uint8_t* VAR_3, size_t VAR_4,
 struct alloc_cache* VAR_5, time_t VAR_6)
{
 struct rrset_ref VAR_7;
 uint8_t VAR_8[VAR_0+3];
 VAR_2 = FUNC_5(VAR_2, VAR_5, VAR_6);
 if(!VAR_2) {
  FUNC_2("malloc failure in rrset_cache_update_wildcard");
  return;
 }


 VAR_8[0] = 1;
 VAR_8[1] = (uint8_t)'*';
 FUNC_4(VAR_8+2, VAR_3, VAR_4);

 FUNC_1(VAR_2->rk.dname);
 VAR_2->rk.dname_len = VAR_4 + 2;
 VAR_2->rk.dname = (uint8_t*)FUNC_3(VAR_8, VAR_2->rk.dname_len);
 if(!VAR_2->rk.dname) {
  FUNC_0(VAR_5, VAR_2);
  FUNC_2("memdup failure in rrset_cache_update_wildcard");
  return;
 }

 VAR_2->entry.hash = FUNC_7(&VAR_2->rk);
 VAR_7.key = VAR_2;
 VAR_7.id = VAR_2->id;

 (void)FUNC_6(VAR_1, &VAR_7, VAR_5, VAR_6);
}
