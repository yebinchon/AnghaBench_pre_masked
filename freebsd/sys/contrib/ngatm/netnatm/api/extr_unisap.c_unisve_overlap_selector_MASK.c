
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unisve_selector {scalar_t__ selector; } ;


 int FUNC_0 (struct unisve_selector const*,struct unisve_selector const*) ;

int
FUNC_1(const struct unisve_selector *VAR_0,
    const struct unisve_selector *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);

 return (VAR_0->selector == VAR_1->selector);
}
