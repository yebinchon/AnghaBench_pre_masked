
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv88e6xxx_priv_state {int smi_mutex; } ;
struct dsa_switch {TYPE_1__* pd; int master_mii_bus; } ;
struct TYPE_2__ {int sw_addr; } ;


 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct dsa_switch *VAR_0, int VAR_1, int VAR_2)
{
 struct mv88e6xxx_priv_state *VAR_3 = (void *)(VAR_0 + 1);
 int VAR_4;

 FUNC_1(&VAR_3->smi_mutex);
 VAR_4 = FUNC_0(VAR_0->master_mii_bus,
       VAR_0->pd->sw_addr, VAR_1, VAR_2);
 FUNC_2(&VAR_3->smi_mutex);

 return VAR_4;
}
