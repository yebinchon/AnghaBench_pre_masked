
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rt6_mtu_change_arg {scalar_t__ dev; scalar_t__ mtu; } ;
struct TYPE_7__ {scalar_t__* metrics; } ;
struct TYPE_6__ {TYPE_3__ dst; } ;
struct rt6_info {scalar_t__ rt6i_dev; TYPE_2__ u; } ;
struct net {int dummy; } ;
struct TYPE_5__ {scalar_t__ mtu6; } ;
struct inet6_dev {TYPE_1__ cnf; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inet6_dev* FUNC_0 (scalar_t__) ;
 struct net* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_3__*,int) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (struct net*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct rt6_info *VAR_2, void *VAR_3)
{
 struct rt6_mtu_change_arg *VAR_4 = (struct rt6_mtu_change_arg *) VAR_3;
 struct inet6_dev *VAR_5;
 struct net *VAR_6 = FUNC_1(VAR_4->dev);







 VAR_5 = FUNC_0(VAR_4->dev);
 if (VAR_5 == ((void*)0))
  return 0;
 if (VAR_2->rt6i_dev == VAR_4->dev &&
     !FUNC_2(&VAR_2->u.dst, VAR_1) &&
     (FUNC_3(&VAR_2->u.dst) >= VAR_4->mtu ||
      (FUNC_3(&VAR_2->u.dst) < VAR_4->mtu &&
       FUNC_3(&VAR_2->u.dst) == VAR_5->cnf.mtu6))) {
  VAR_2->u.dst.metrics[VAR_1-1] = VAR_4->mtu;
  VAR_2->u.dst.metrics[VAR_0-1] = FUNC_4(VAR_6, VAR_4->mtu);
 }
 return 0;
}
