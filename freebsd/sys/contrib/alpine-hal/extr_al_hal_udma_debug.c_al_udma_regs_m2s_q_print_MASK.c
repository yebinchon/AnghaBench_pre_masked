
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct al_udma {TYPE_3__* udma_regs; } ;
struct TYPE_8__ {int mask; int cfg_token_size_2; int cfg_token_size_1; int cfg_cycle; int cfg_1s; } ;
struct TYPE_5__ {int indirect_ctrl; } ;
struct TYPE_6__ {TYPE_1__ m2s; } ;
struct TYPE_7__ {TYPE_2__ m2s; } ;


 int FUNC_0 (struct al_udma*,char*,char*,int ,int ,int ) ;
 int FUNC_1 (char*,size_t) ;
 int FUNC_2 (int *,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 TYPE_4__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static void FUNC_3(struct al_udma *VAR_23, uint32_t VAR_24)
{
 FUNC_1("M2S Q[%d] status regs:\n", VAR_24);
 FUNC_2(&VAR_23->udma_regs->m2s.m2s.indirect_ctrl, VAR_24);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_5, VAR_11);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_5, VAR_9);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_5, VAR_12);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_5, VAR_10);

 FUNC_1("M2S Q[%d] regs:\n", VAR_24);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_0);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_13);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_19);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_18);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_21);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_20);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_22);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_17);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_15);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_14);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_16);

 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_8.cfg_1s);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_8.cfg_cycle);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24],
   VAR_8.cfg_token_size_1);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24],
   VAR_8.cfg_token_size_2);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_8.mask);

 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_2);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_3);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_4);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_1);
 FUNC_0(VAR_23, " ", "\n", VAR_5, VAR_6[VAR_24], VAR_7);
}
