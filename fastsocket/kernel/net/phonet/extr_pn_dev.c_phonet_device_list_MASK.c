
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phonet_device_list {int dummy; } ;
struct phonet_net {struct phonet_device_list pndevs; } ;
struct net {int dummy; } ;


 struct phonet_net* FUNC_0 (struct net*,int ) ;
 int VAR_0 ;

struct phonet_device_list *FUNC_1(struct net *VAR_1)
{
 struct phonet_net *VAR_2 = FUNC_0(VAR_1, VAR_0);
 return &VAR_2->pndevs;
}
