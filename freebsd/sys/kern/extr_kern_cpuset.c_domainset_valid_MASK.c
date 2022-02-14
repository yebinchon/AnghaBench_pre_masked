
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domainset {scalar_t__ ds_policy; int ds_mask; int ds_prefer; } ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int
FUNC_2(const struct domainset *VAR_1, const struct domainset *VAR_2)
{
 if (VAR_2->ds_policy != VAR_0)
  return (FUNC_1(&VAR_1->ds_mask, &VAR_2->ds_mask));
 return (FUNC_0(VAR_2->ds_prefer, &VAR_1->ds_mask));
}
