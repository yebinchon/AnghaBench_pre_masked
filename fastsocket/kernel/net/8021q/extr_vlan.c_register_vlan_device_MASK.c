
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct vlan_net {int name_type; } ;
struct vlan_dev_info {int dummy; } ;
struct net_device {char* name; int * rtnl_link_ops; int mtu; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int flags; int * dent; struct net_device* real_dev; scalar_t__ vlan_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 scalar_t__ VAR_4 ;
 struct net_device* FUNC_0 (int,char*,int ) ;
 struct net* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct net*) ;
 int FUNC_3 (struct net_device*) ;
 struct vlan_net* FUNC_4 (struct net*,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (char*,int,char*,scalar_t__,...) ;
 int FUNC_7 (struct net_device*,scalar_t__) ;
 TYPE_1__* FUNC_8 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_8, u16 VAR_9)
{
 struct net_device *VAR_10;
 struct net *VAR_11 = FUNC_1(VAR_8);
 struct vlan_net *VAR_12 = FUNC_4(VAR_11, VAR_6);
 char VAR_13[VAR_2];
 int VAR_14;

 if (VAR_9 >= VAR_4)
  return -VAR_1;

 VAR_14 = FUNC_7(VAR_8, VAR_9);
 if (VAR_14 < 0)
  return VAR_14;


 switch (VAR_12->name_type) {
 case 129:

  FUNC_6(VAR_13, VAR_2, "%s.%.4i", VAR_8->name, VAR_9);
  break;
 case 130:



  FUNC_6(VAR_13, VAR_2, "vlan%i", VAR_9);
  break;
 case 128:



  FUNC_6(VAR_13, VAR_2, "%s.%i", VAR_8->name, VAR_9);
  break;
 case 131:



 default:
  FUNC_6(VAR_13, VAR_2, "vlan%.4i", VAR_9);
 }

 VAR_10 = FUNC_0(sizeof(struct vlan_dev_info), VAR_13,
      VAR_7);

 if (VAR_10 == ((void*)0))
  return -VAR_0;

 FUNC_2(VAR_10, VAR_11);



 VAR_10->mtu = VAR_8->mtu;

 FUNC_8(VAR_10)->vlan_id = VAR_9;
 FUNC_8(VAR_10)->real_dev = VAR_8;
 FUNC_8(VAR_10)->dent = ((void*)0);
 FUNC_8(VAR_10)->flags = VAR_3;

 VAR_10->rtnl_link_ops = &VAR_5;
 VAR_14 = FUNC_5(VAR_10);
 if (VAR_14 < 0)
  goto out_free_newdev;

 return 0;

out_free_newdev:
 FUNC_3(VAR_10);
 return VAR_14;
}
