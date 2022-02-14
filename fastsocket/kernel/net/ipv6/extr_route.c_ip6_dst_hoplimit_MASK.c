
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_5__ {int hop_limit; } ;
struct inet6_dev {TYPE_1__ cnf; } ;
struct dst_entry {struct net_device* dev; } ;
struct TYPE_7__ {TYPE_2__* devconf_all; } ;
struct TYPE_8__ {TYPE_3__ ipv6; } ;
struct TYPE_6__ {int hop_limit; } ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct dst_entry*,int ) ;
 struct inet6_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct inet6_dev*) ;

int FUNC_4(struct dst_entry *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2 < 0) {
  struct net_device *VAR_3 = VAR_1->dev;
  struct inet6_dev *VAR_4 = FUNC_2(VAR_3);
  if (VAR_4) {
   VAR_2 = VAR_4->cnf.hop_limit;
   FUNC_3(VAR_4);
  } else
   VAR_2 = FUNC_0(VAR_3)->ipv6.devconf_all->hop_limit;
 }
 return VAR_2;
}
