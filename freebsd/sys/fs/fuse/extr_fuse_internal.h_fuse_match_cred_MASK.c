
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ cr_uid; scalar_t__ cr_ruid; scalar_t__ cr_svuid; scalar_t__* cr_groups; scalar_t__ cr_rgid; scalar_t__ cr_svgid; } ;


 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_0(struct ucred *VAR_1, struct ucred *VAR_2)
{
 if (VAR_1->cr_uid == VAR_2->cr_uid &&
     VAR_1->cr_uid == VAR_2->cr_ruid &&
     VAR_1->cr_uid == VAR_2->cr_svuid &&
     VAR_1->cr_groups[0] == VAR_2->cr_groups[0] &&
     VAR_1->cr_groups[0] == VAR_2->cr_rgid &&
     VAR_1->cr_groups[0] == VAR_2->cr_svgid)
  return (0);

 return (VAR_0);
}
