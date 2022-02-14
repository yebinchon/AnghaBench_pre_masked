
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct TYPE_4__ {int* metrics; } ;
struct TYPE_5__ {TYPE_1__ dst; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct net_bridge {TYPE_3__ fake_rtable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_bridge*) ;
 struct net_bridge* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, int VAR_3)
{
 struct net_bridge *VAR_4 = FUNC_1(VAR_2);
 if (VAR_3 < 68 || VAR_3 > FUNC_0(VAR_4))
  return -VAR_0;

 VAR_2->mtu = VAR_3;






 return 0;
}
