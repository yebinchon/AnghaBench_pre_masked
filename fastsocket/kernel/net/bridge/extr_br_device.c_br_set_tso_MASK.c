
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct net_bridge {int feature_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge*) ;
 struct net_bridge* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, u32 VAR_2)
{
 struct net_bridge *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2)
  VAR_3->feature_mask |= VAR_0;
 else
  VAR_3->feature_mask &= ~VAR_0;

 FUNC_0(VAR_3);
 return 0;
}
