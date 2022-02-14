
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pmc_mdep {int dummy; } ;
typedef int register_t ;
struct TYPE_3__ {struct TYPE_3__* pc_ppcpmcs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__** VAR_4 ;

__attribute__((used)) static int
FUNC_3(struct pmc_mdep *VAR_5, int VAR_6)
{
 register_t VAR_7 = FUNC_1(VAR_1);

 VAR_7 |= VAR_2;
 VAR_7 &= ~VAR_3;
 FUNC_2(VAR_1, VAR_7);

 FUNC_0(VAR_4[VAR_6]->pc_ppcpmcs, VAR_0);
 FUNC_0(VAR_4[VAR_6], VAR_0);

 return 0;
}
