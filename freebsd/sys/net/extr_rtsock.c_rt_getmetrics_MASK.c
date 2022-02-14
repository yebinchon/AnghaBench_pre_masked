
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {scalar_t__ rt_expire; int rt_pksent; int rt_weight; int rt_mtu; } ;
struct rt_metrics {scalar_t__ rmx_expire; int rmx_pksent; int rmx_weight; int rmx_mtu; } ;


 int FUNC_0 (struct rt_metrics*,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(const struct rtentry *VAR_2, struct rt_metrics *VAR_3)
{

 FUNC_0(VAR_3, sizeof(*VAR_3));
 VAR_3->rmx_mtu = VAR_2->rt_mtu;
 VAR_3->rmx_weight = VAR_2->rt_weight;
 VAR_3->rmx_pksent = FUNC_1(VAR_2->rt_pksent);

 VAR_3->rmx_expire = VAR_2->rt_expire ?
     VAR_2->rt_expire - VAR_1 + VAR_0 : 0;
}
