
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct as3722_reg_sc {TYPE_1__* def; int base_sc; } ;
struct TYPE_2__ {int enable_mask; int enable_reg; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct as3722_reg_sc *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->base_sc, VAR_0->def->enable_reg,
     VAR_0->def->enable_mask, VAR_0->def->enable_mask);
 return (VAR_1);
}
