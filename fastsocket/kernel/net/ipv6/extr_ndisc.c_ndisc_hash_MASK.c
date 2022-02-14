
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int ifindex; } ;
struct in6_addr {int dummy; } ;
struct TYPE_2__ {int hash_rnd; } ;


 int FUNC_0 (int,int ,int ) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static u32 FUNC_1(const void *VAR_1, const struct net_device *VAR_2)
{
 const u32 *VAR_3 = VAR_1;
 u32 VAR_4, VAR_5;

 VAR_4 = 0;
 for (VAR_5 = 0; VAR_5 < (sizeof(struct in6_addr) / sizeof(u32)); VAR_5++)
  VAR_4 ^= *VAR_3++;

 return FUNC_0(VAR_4, VAR_2->ifindex, VAR_0.hash_rnd);
}
