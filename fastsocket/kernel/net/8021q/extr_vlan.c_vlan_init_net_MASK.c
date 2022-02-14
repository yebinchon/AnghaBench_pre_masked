
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_net {int name_type; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vlan_net*) ;
 struct vlan_net* FUNC_1 (int,int ) ;
 int FUNC_2 (struct net*,int ,struct vlan_net*) ;
 int VAR_3 ;
 int FUNC_3 (struct net*) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_4)
{
 int VAR_5;
 struct vlan_net *VAR_6;

 VAR_5 = -VAR_0;
 VAR_6 = FUNC_1(sizeof(struct vlan_net), VAR_1);
 if (VAR_6 == ((void*)0))
  goto err_alloc;

 VAR_5 = FUNC_2(VAR_4, VAR_3, VAR_6);
 if (VAR_5 < 0)
  goto err_assign;

 VAR_6->name_type = VAR_2;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5 < 0)
  goto err_proc;

 return 0;

err_proc:

err_assign:
 FUNC_0(VAR_6);
err_alloc:
 return VAR_5;
}
