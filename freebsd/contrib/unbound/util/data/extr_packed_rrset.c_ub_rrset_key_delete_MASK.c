
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; scalar_t__ id; } ;
struct alloc_cache {int dummy; } ;


 int FUNC_0 (struct alloc_cache*,struct ub_packed_rrset_key*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(void* VAR_0, void* VAR_1)
{
 struct ub_packed_rrset_key* VAR_2 = (struct ub_packed_rrset_key*)VAR_0;
 struct alloc_cache* VAR_3 = (struct alloc_cache*)VAR_1;
 VAR_2->id = 0;
 FUNC_1(VAR_2->rk.dname);
 VAR_2->rk.dname = ((void*)0);
 FUNC_0(VAR_3, VAR_2);
}
