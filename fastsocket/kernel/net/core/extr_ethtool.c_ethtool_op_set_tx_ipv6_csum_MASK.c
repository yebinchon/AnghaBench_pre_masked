
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int features; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct net_device *VAR_2, u32 VAR_3)
{
 if (VAR_3)
  VAR_2->features |= VAR_1 | VAR_0;
 else
  VAR_2->features &= ~(VAR_1 | VAR_0);

 return 0;
}
