
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__* cr_groups; int cr_ngroups; } ;
typedef scalar_t__ gid_t ;



int
FUNC_0(gid_t VAR_0, struct ucred *VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;

 if (VAR_1->cr_groups[0] == VAR_0)
  return(1);






 VAR_2 = 1;
 VAR_3 = VAR_1->cr_ngroups;
 while (VAR_2 < VAR_3) {
  VAR_4 = VAR_2 + ((VAR_3 - VAR_2) / 2);
  if (VAR_1->cr_groups[VAR_4] < VAR_0)
   VAR_2 = VAR_4 + 1;
  else
   VAR_3 = VAR_4;
 }
 if ((VAR_2 < VAR_1->cr_ngroups) && (VAR_1->cr_groups[VAR_2] == VAR_0))
  return (1);

 return (0);
}
