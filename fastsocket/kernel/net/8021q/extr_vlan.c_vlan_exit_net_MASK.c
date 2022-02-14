
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_net {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct vlan_net*) ;
 struct vlan_net* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct net*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct net*) ;

__attribute__((used)) static void FUNC_4(struct net *VAR_2)
{
 struct vlan_net *VAR_3;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 FUNC_2(VAR_2, &VAR_0);
 FUNC_3(VAR_2);
 FUNC_0(VAR_3);
}
