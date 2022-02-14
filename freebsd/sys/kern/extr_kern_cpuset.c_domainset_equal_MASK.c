
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domainset {scalar_t__ ds_policy; scalar_t__ ds_prefer; int ds_mask; } ;


 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int
FUNC_1(const struct domainset *VAR_0, const struct domainset *VAR_1)
{

 return (FUNC_0(&VAR_0->ds_mask, &VAR_1->ds_mask) == 0 &&
     VAR_0->ds_policy == VAR_1->ds_policy &&
     VAR_0->ds_prefer == VAR_1->ds_prefer);
}
