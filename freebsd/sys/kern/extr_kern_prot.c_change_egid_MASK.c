
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int * cr_groups; } ;
typedef int gid_t ;



void
FUNC_0(struct ucred *VAR_0, gid_t VAR_1)
{

 VAR_0->cr_groups[0] = VAR_1;
}
