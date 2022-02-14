
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * dname; } ;
struct TYPE_3__ {int * data; } ;
struct ub_packed_rrset_key {scalar_t__ id; TYPE_2__ rk; TYPE_1__ entry; } ;
struct alloc_cache {int dummy; } ;


 int FUNC_0 (struct alloc_cache*,struct ub_packed_rrset_key*) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct ub_packed_rrset_key* VAR_0,
        struct alloc_cache* VAR_1)
{
 if(!VAR_0)
  return;
 FUNC_1(VAR_0->entry.data);
 VAR_0->entry.data = ((void*)0);
 FUNC_1(VAR_0->rk.dname);
 VAR_0->rk.dname = ((void*)0);
 VAR_0->id = 0;
 FUNC_0(VAR_1, VAR_0);
}
