
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {scalar_t__ rt_ifp; scalar_t__ rt_mtu; int rt_flags; } ;
struct radix_node {int dummy; } ;
struct if_mtuinfo {scalar_t__ ifp; scalar_t__ mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct radix_node *VAR_3, void *VAR_4)
{
 struct rtentry *VAR_5;
 struct if_mtuinfo *VAR_6;

 VAR_5 = (struct rtentry *)VAR_3;
 VAR_6 = (struct if_mtuinfo *)VAR_4;

 if (VAR_5->rt_ifp != VAR_6->ifp)
  return (0);

 if (VAR_5->rt_mtu >= VAR_6->mtu) {

  VAR_5->rt_mtu = VAR_6->mtu;
  return (0);
 }




 if ((VAR_5->rt_flags & (VAR_0 | VAR_1 | VAR_2)) != 0) {





  return (0);
 }


 VAR_5->rt_mtu = VAR_6->mtu;

 return (0);
}
