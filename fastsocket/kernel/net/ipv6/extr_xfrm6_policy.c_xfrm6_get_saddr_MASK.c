
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int a6; } ;
typedef TYPE_1__ xfrm_address_t ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct dst_entry {int dummy; } ;
struct TYPE_7__ {struct net_device* dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dst_entry*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct dst_entry*) ;
 TYPE_5__* FUNC_3 (struct dst_entry*) ;
 int FUNC_4 (int ,struct net_device*,struct in6_addr*,int ,struct in6_addr*) ;
 struct dst_entry* FUNC_5 (struct net*,int ,int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_6(struct net *VAR_1,
      xfrm_address_t *VAR_2, xfrm_address_t *VAR_3)
{
 struct dst_entry *VAR_4;
 struct net_device *VAR_5;

 VAR_4 = FUNC_5(VAR_1, 0, ((void*)0), VAR_3);
 if (FUNC_0(VAR_4))
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_4)->dev;
 FUNC_4(FUNC_1(VAR_5), VAR_5,
      (struct in6_addr *)&VAR_3->a6, 0,
      (struct in6_addr *)&VAR_2->a6);
 FUNC_2(VAR_4);
 return 0;
}
