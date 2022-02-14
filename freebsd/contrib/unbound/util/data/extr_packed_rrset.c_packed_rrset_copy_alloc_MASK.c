
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct packed_rrset_data {int dummy; } ;
typedef struct packed_rrset_data uint8_t ;
typedef int time_t ;
struct TYPE_4__ {void* data; int hash; } ;
struct TYPE_3__ {struct packed_rrset_data* dname; int dname_len; } ;
struct ub_packed_rrset_key {TYPE_2__ entry; TYPE_1__ rk; } ;
struct alloc_cache {int dummy; } ;


 struct ub_packed_rrset_key* FUNC_0 (struct alloc_cache*) ;
 int FUNC_1 (struct alloc_cache*,struct ub_packed_rrset_key*) ;
 int FUNC_2 (struct packed_rrset_data*) ;
 scalar_t__ FUNC_3 (struct packed_rrset_data*,int ) ;
 int FUNC_4 (struct packed_rrset_data*) ;
 int FUNC_5 (struct packed_rrset_data*) ;
 int FUNC_6 (struct packed_rrset_data*,int ) ;

struct ub_packed_rrset_key*
FUNC_7(struct ub_packed_rrset_key* VAR_0,
 struct alloc_cache* VAR_1, time_t VAR_2)
{
 struct packed_rrset_data* VAR_3, *VAR_4;
 struct ub_packed_rrset_key* VAR_5 = FUNC_0(VAR_1);
 if(!VAR_5) return ((void*)0);
 VAR_3 = (struct packed_rrset_data*)VAR_0->entry.data;
 VAR_5->entry.hash = VAR_0->entry.hash;
 VAR_5->rk = VAR_0->rk;
 VAR_5->rk.dname = (uint8_t*)FUNC_3(VAR_0->rk.dname, VAR_0->rk.dname_len);
 if(!VAR_5->rk.dname) {
  FUNC_1(VAR_1, VAR_5);
  return ((void*)0);
 }
 VAR_4 = (struct packed_rrset_data*)FUNC_3(VAR_3, FUNC_5(VAR_3));
 if(!VAR_4) {
  FUNC_2(VAR_5->rk.dname);
  FUNC_1(VAR_1, VAR_5);
  return ((void*)0);
 }
 FUNC_4(VAR_4);
 VAR_5->entry.data = (void*)VAR_4;
 FUNC_6(VAR_4, VAR_2);
 return VAR_5;
}
