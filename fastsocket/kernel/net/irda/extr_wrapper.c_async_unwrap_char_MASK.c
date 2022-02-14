
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {int dummy; } ;
typedef int iobuff_t ;
typedef int __u8 ;





 int FUNC_0 (struct net_device*,struct net_device_stats*,int *,int) ;
 int FUNC_1 (struct net_device*,struct net_device_stats*,int *,int) ;
 int FUNC_2 (struct net_device*,struct net_device_stats*,int *,int) ;
 int FUNC_3 (struct net_device*,struct net_device_stats*,int *,int) ;

void FUNC_4(struct net_device *VAR_0,
         struct net_device_stats *VAR_1,
         iobuff_t *VAR_2, __u8 VAR_3)
{
 switch(VAR_3) {
 case 129:
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 case 130:
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 default:
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 }
}
