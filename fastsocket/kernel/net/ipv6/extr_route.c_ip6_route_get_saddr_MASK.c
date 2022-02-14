
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; scalar_t__ plen; } ;
struct rt6_info {TYPE_1__ rt6i_prefsrc; } ;
struct net {int dummy; } ;
struct inet6_dev {int * dev; } ;
struct in6_addr {int dummy; } ;
struct dst_entry {int dummy; } ;


 struct inet6_dev* FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct in6_addr*,int *) ;
 int FUNC_2 (struct net*,int *,struct in6_addr*,unsigned int,struct in6_addr*) ;

int FUNC_3(struct net *VAR_0,
   struct rt6_info *VAR_1,
   struct in6_addr *VAR_2,
   unsigned int VAR_3,
   struct in6_addr *VAR_4)
{
 struct inet6_dev *VAR_5 = FUNC_0((struct dst_entry*)VAR_1);
 int VAR_6 = 0;
 if (VAR_1->rt6i_prefsrc.plen)
  FUNC_1(VAR_4, &VAR_1->rt6i_prefsrc.addr);
 else
  VAR_6 = FUNC_2(VAR_0, VAR_5 ? VAR_5->dev : ((void*)0),
      VAR_2, VAR_3, VAR_4);
 return VAR_6;
}
