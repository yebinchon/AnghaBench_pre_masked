
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct domainset {scalar_t__ ds_policy; int ds_mask; int ds_prefer; } ;
struct TYPE_2__ {int ds_mask; } ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 struct domainset* FUNC_2 (struct domainset*,int *) ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (struct domainset const*,struct domainset*) ;
 int VAR_6 ;
 struct domainset* FUNC_4 (int ,int) ;

struct domainset *
FUNC_5(const struct domainset *VAR_7)
{
 struct domainset *VAR_8;






 if (VAR_7->ds_policy <= VAR_0 ||
     VAR_7->ds_policy > VAR_1)
  return (((void*)0));
 if (VAR_7->ds_policy == VAR_2 &&
     !FUNC_0(VAR_7->ds_prefer, &VAR_7->ds_mask))
  return (((void*)0));
 if (!FUNC_1(&VAR_5, &VAR_7->ds_mask))
  return (((void*)0));
 VAR_8 = FUNC_4(VAR_6, VAR_3 | VAR_4);
 FUNC_3(VAR_7, VAR_8);
 return FUNC_2(VAR_8, ((void*)0));
}
