
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(struct net_device *VAR_4, u32 VAR_5)
{
 if (VAR_5 & VAR_0)
  VAR_4->features |= VAR_2;
 else
  VAR_4->features &= ~VAR_2;

 if (VAR_5 & VAR_1)
  VAR_4->features |= VAR_3;
 else
  VAR_4->features &= ~VAR_3;

 return 0;
}
