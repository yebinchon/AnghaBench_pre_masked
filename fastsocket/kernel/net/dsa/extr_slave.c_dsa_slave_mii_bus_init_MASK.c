
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dsa_switch {TYPE_3__* master_mii_bus; TYPE_2__* slave_mii_bus; TYPE_1__* pd; } ;
struct TYPE_6__ {char* id; int dev; } ;
struct TYPE_5__ {char* name; int * parent; int id; int write; int read; void* priv; } ;
struct TYPE_4__ {int sw_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,char*,int) ;

void FUNC_1(struct dsa_switch *VAR_3)
{
 VAR_3->slave_mii_bus->priv = (void *)VAR_3;
 VAR_3->slave_mii_bus->name = "dsa slave smi";
 VAR_3->slave_mii_bus->read = VAR_1;
 VAR_3->slave_mii_bus->write = VAR_2;
 FUNC_0(VAR_3->slave_mii_bus->id, VAR_0, "%s:%.2x",
   VAR_3->master_mii_bus->id, VAR_3->pd->sw_addr);
 VAR_3->slave_mii_bus->parent = &VAR_3->master_mii_bus->dev;
}
