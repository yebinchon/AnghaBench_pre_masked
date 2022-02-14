
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_ngroups; scalar_t__* cr_groups; scalar_t__ cr_uid; } ;



void
FUNC_0(struct ucred *VAR_0)
{

 VAR_0->cr_uid = 0;
 VAR_0->cr_groups[0] = 0;
 VAR_0->cr_ngroups = 1;
}
