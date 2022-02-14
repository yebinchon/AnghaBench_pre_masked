
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int cr_agroups; scalar_t__* cr_groups; int cr_ngroups; } ;
typedef scalar_t__ gid_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void
FUNC_2(struct ucred *VAR_0, int VAR_1, gid_t *VAR_2)
{
 int VAR_3;
 int VAR_4;
 gid_t VAR_5;

 FUNC_0(VAR_0->cr_agroups >= VAR_1, ("cr_ngroups is too small"));

 FUNC_1(VAR_2, VAR_0->cr_groups, VAR_1 * sizeof(gid_t));
 VAR_0->cr_ngroups = VAR_1;
 for (VAR_3 = 2; VAR_3 < VAR_1; VAR_3++) {
  VAR_5 = VAR_0->cr_groups[VAR_3];
  for (VAR_4 = VAR_3-1; VAR_4 >= 1 && VAR_5 < VAR_0->cr_groups[VAR_4]; VAR_4--)
   VAR_0->cr_groups[VAR_4 + 1] = VAR_0->cr_groups[VAR_4];
  VAR_0->cr_groups[VAR_4 + 1] = VAR_5;
 }
}
