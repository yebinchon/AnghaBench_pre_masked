
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p2p_data {TYPE_1__* cfg; } ;
struct TYPE_2__ {int p2p_intra_bss; } ;


 int FUNC_0 (struct p2p_data*,char*,char*) ;

void FUNC_1(struct p2p_data *VAR_0, int VAR_1)
{
 FUNC_0(VAR_0, "Intra BSS distribution %s",
  VAR_1 ? "enabled" : "disabled");
 VAR_0->cfg->p2p_intra_bss = VAR_1;
}
