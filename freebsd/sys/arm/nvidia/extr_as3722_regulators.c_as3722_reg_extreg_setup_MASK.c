
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct as3722_reg_sc {TYPE_1__* def; int base_sc; } ;
struct TYPE_2__ {int ext_enable_mask; int ext_enable_reg; } ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(struct as3722_reg_sc *VAR_0, int VAR_1)
{
 uint8_t VAR_2;
 int VAR_3;

 VAR_2 = VAR_1 << (FUNC_1(VAR_0->def->ext_enable_mask) - 1);
 VAR_3 = FUNC_0(VAR_0->base_sc, VAR_0->def->ext_enable_reg,
     VAR_0->def->ext_enable_mask, VAR_2);
 return (VAR_3);
}
