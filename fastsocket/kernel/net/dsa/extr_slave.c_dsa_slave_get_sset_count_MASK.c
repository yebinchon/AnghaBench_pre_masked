
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dsa_switch {TYPE_1__* drv; } ;
struct dsa_slave_priv {struct dsa_switch* parent; } ;
struct TYPE_2__ {scalar_t__ (* get_sset_count ) (struct dsa_switch*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct dsa_slave_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct dsa_switch*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, int VAR_3)
{
 struct dsa_slave_priv *VAR_4 = FUNC_0(VAR_2);
 struct dsa_switch *VAR_5 = VAR_4->parent;

 if (VAR_3 == VAR_1) {
  int VAR_6;

  VAR_6 = 4;
  if (VAR_5->drv->get_sset_count != ((void*)0))
   VAR_6 += VAR_5->drv->get_sset_count(VAR_5);

  return VAR_6;
 }

 return -VAR_0;
}
