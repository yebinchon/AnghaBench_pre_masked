
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct al_udma {TYPE_3__* udma_regs; } ;
struct TYPE_4__ {int indirect_ctrl; } ;
struct TYPE_5__ {TYPE_1__ m2s; } ;
struct TYPE_6__ {TYPE_2__ m2s; } ;


 int FUNC_0 (struct al_udma*,char*,char*,int ,int ,int ) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static void FUNC_3(struct al_udma *VAR_21, uint32_t VAR_22)
{
 FUNC_1("S2M Q[%d] status regs:\n", VAR_22);
 FUNC_2(&VAR_21->udma_regs->m2s.m2s.indirect_ctrl, VAR_22);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_16, VAR_19);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_16, VAR_18);

 FUNC_1("S2M Q[%d] regs:\n", VAR_22);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_0);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_20);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_12);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_11);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_14);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_13);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_15);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_10);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_7);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_6);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_8);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_9);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_1);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_2);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_3);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_5);
 FUNC_0(VAR_21, " ", "\n", VAR_16, VAR_17[VAR_22], VAR_4);
}
