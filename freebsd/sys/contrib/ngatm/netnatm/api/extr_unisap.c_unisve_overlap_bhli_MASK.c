
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unisve_bhli {scalar_t__ type; scalar_t__ len; int info; } ;


 int FUNC_0 (struct unisve_bhli const*,struct unisve_bhli const*) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

int
FUNC_2(const struct unisve_bhli *VAR_0, const struct unisve_bhli *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);

 return (VAR_0->type == VAR_1->type && VAR_0->len == VAR_1->len &&
     FUNC_1(VAR_0->info, VAR_1->info, VAR_0->len) == 0);
}
