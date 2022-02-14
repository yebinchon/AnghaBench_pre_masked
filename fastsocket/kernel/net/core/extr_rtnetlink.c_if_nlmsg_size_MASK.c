
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtnl_link_stats64 {int dummy; } ;
struct rtnl_link_stats {int dummy; } ;
struct rtnl_link_ifmap {int dummy; } ;
struct net_device {int dummy; } ;
struct ifinfomsg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int) ;
 int VAR_3 ;
 size_t FUNC_1 (int) ;
 size_t FUNC_2 (struct net_device const*) ;
 size_t FUNC_3 (struct net_device const*) ;
 size_t FUNC_4 (struct net_device const*) ;
 size_t FUNC_5 (struct net_device const*,int) ;

__attribute__((used)) static inline size_t FUNC_6(const struct net_device *VAR_4,
         u32 VAR_5)
{
 return FUNC_0(sizeof(struct ifinfomsg))
        + FUNC_1(VAR_1)
        + FUNC_1(VAR_0)
        + FUNC_1(VAR_1)
        + FUNC_1(sizeof(struct rtnl_link_ifmap))
        + FUNC_1(sizeof(struct rtnl_link_stats))
        + FUNC_1(sizeof(struct rtnl_link_stats64))
        + FUNC_1(VAR_2)
        + FUNC_1(VAR_2)
        + FUNC_1(4)
        + FUNC_1(4)
        + FUNC_1(4)
        + FUNC_1(4)
        + FUNC_1(4)
        + FUNC_1(1)
        + FUNC_1(1)
        + FUNC_1(VAR_5
           & VAR_3 ? 4 : 0)
        + FUNC_5(VAR_4, VAR_5)
        + FUNC_4(VAR_4)
        + FUNC_3(VAR_4)
        + FUNC_2(VAR_4);
}
