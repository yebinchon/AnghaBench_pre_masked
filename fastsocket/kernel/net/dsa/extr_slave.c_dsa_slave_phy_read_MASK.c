
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_bus {struct dsa_switch* priv; } ;
struct dsa_switch {int phys_port_mask; TYPE_1__* drv; } ;
struct TYPE_2__ {int (* phy_read ) (struct dsa_switch*,int,int) ;} ;


 int FUNC_0 (struct dsa_switch*,int,int) ;

__attribute__((used)) static int FUNC_1(struct mii_bus *VAR_0, int VAR_1, int VAR_2)
{
 struct dsa_switch *VAR_3 = VAR_0->priv;

 if (VAR_3->phys_port_mask & (1 << VAR_1))
  return VAR_3->drv->phy_read(VAR_3, VAR_1, VAR_2);

 return 0xffff;
}
