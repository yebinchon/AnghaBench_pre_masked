
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int dummy; } ;
struct net_device {int priv_flags; struct net_device* master; } ;


 int VAR_0 ;
 struct vlan_group* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct vlan_group*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, int VAR_2)
{
 struct vlan_group *VAR_3, *VAR_4;
 struct net_device *VAR_5, *VAR_6;


 if (!VAR_1->master)
  return 0;


 if (!(VAR_1->master->priv_flags & VAR_0))
  return 0;

 VAR_3 = FUNC_0(VAR_1);
 VAR_4 = FUNC_0(VAR_1->master);


 if (!VAR_3 || !VAR_4)
  return 0;

 VAR_5 = FUNC_1(VAR_3, VAR_2);
 VAR_6 = FUNC_1(VAR_4, VAR_2);


 if (!VAR_5 || !VAR_6)
  return 0;
 if (VAR_5 == VAR_6)
  return 1;

 return 0;
}
