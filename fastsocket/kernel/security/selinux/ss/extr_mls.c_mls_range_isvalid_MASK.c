
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct policydb {int dummy; } ;
struct mls_range {int * level; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (struct policydb*,int *) ;

int FUNC_2(struct policydb *VAR_0, struct mls_range *VAR_1)
{
 return (FUNC_1(VAR_0, &VAR_1->level[0]) &&
  FUNC_1(VAR_0, &VAR_1->level[1]) &&
  FUNC_0(&VAR_1->level[1], &VAR_1->level[0]));
}
