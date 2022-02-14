
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domainset {int ds_prefer; int ds_policy; int ds_mask; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(const struct domainset *VAR_0, struct domainset *VAR_1)
{

 FUNC_0(&VAR_0->ds_mask, &VAR_1->ds_mask);
 VAR_1->ds_policy = VAR_0->ds_policy;
 VAR_1->ds_prefer = VAR_0->ds_prefer;
}
