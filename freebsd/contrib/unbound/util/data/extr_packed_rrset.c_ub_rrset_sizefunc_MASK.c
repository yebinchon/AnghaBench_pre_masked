
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct TYPE_3__ {int dname_len; } ;
struct ub_packed_rrset_key {TYPE_2__ entry; TYPE_1__ rk; } ;
struct packed_rrset_data {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct packed_rrset_data*) ;

size_t
FUNC_2(void* VAR_0, void* VAR_1)
{
 struct ub_packed_rrset_key* VAR_2 = (struct ub_packed_rrset_key*)VAR_0;
 struct packed_rrset_data* VAR_3 = (struct packed_rrset_data*)VAR_1;
 size_t VAR_4 = sizeof(struct ub_packed_rrset_key) + VAR_2->rk.dname_len;
 VAR_4 += FUNC_1(VAR_3) + FUNC_0(&VAR_2->entry.lock);
 return VAR_4;
}
