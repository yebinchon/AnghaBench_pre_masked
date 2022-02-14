
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int maxvif; int mroute_reg_vif_num; struct mif_device* vif6_table; } ;
struct net {TYPE_1__ ipv6; } ;
struct mif_device {int flags; struct net_device* dev; } ;
struct TYPE_4__ {int mc_forwarding; } ;
struct inet6_dev {TYPE_2__ cnf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net*,int) ;
 struct inet6_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int) ;
 int VAR_2 ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net *VAR_3, int VAR_4)
{
 struct mif_device *VAR_5;
 struct net_device *VAR_6;
 struct inet6_dev *VAR_7;
 if (VAR_4 < 0 || VAR_4 >= VAR_3->ipv6.maxvif)
  return -VAR_0;

 VAR_5 = &VAR_3->ipv6.vif6_table[VAR_4];

 FUNC_5(&VAR_2);
 VAR_6 = VAR_5->dev;
 VAR_5->dev = ((void*)0);

 if (!VAR_6) {
  FUNC_6(&VAR_2);
  return -VAR_0;
 }






 if (VAR_4 + 1 == VAR_3->ipv6.maxvif) {
  int VAR_8;
  for (VAR_8 = VAR_4 - 1; VAR_8 >= 0; VAR_8--) {
   if (FUNC_0(VAR_3, VAR_8))
    break;
  }
  VAR_3->ipv6.maxvif = VAR_8 + 1;
 }

 FUNC_6(&VAR_2);

 FUNC_3(VAR_6, -1);

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7)
  VAR_7->cnf.mc_forwarding--;

 if (VAR_5->flags & VAR_1)
  FUNC_4(VAR_6);

 FUNC_2(VAR_6);
 return 0;
}
