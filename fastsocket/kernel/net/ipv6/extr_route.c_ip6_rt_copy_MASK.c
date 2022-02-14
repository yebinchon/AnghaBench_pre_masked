
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rt6key {int dummy; } ;
struct TYPE_5__ {int lastuse; scalar_t__ dev; int error; int * metrics; int output; int input; } ;
struct TYPE_6__ {TYPE_2__ dst; } ;
struct rt6_info {int rt6i_flags; int rt6i_table; int rt6i_prefsrc; int rt6i_src; int rt6i_dst; scalar_t__ rt6i_metric; int rt6i_gateway; scalar_t__ rt6i_expires; TYPE_3__ u; scalar_t__ rt6i_idev; int rt6i_dev; } ;
struct TYPE_4__ {int ip6_dst_ops; } ;
struct net {TYPE_1__ ipv6; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct net* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 struct rt6_info* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int VAR_2 ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static struct rt6_info * FUNC_6(struct rt6_info *VAR_3)
{
 struct net *VAR_4 = FUNC_1(VAR_3->rt6i_dev);
 struct rt6_info *VAR_5 = FUNC_3(&VAR_4->ipv6.ip6_dst_ops);

 if (VAR_5) {
  VAR_5->u.dst.input = VAR_3->u.dst.input;
  VAR_5->u.dst.output = VAR_3->u.dst.output;

  FUNC_5(VAR_5->u.dst.metrics, VAR_3->u.dst.metrics, VAR_0*sizeof(u32));
  VAR_5->u.dst.error = VAR_3->u.dst.error;
  VAR_5->u.dst.dev = VAR_3->u.dst.dev;
  if (VAR_5->u.dst.dev)
   FUNC_0(VAR_5->u.dst.dev);
  VAR_5->rt6i_idev = VAR_3->rt6i_idev;
  if (VAR_5->rt6i_idev)
   FUNC_2(VAR_5->rt6i_idev);
  VAR_5->u.dst.lastuse = VAR_2;
  VAR_5->rt6i_expires = 0;

  FUNC_4(&VAR_5->rt6i_gateway, &VAR_3->rt6i_gateway);
  VAR_5->rt6i_flags = VAR_3->rt6i_flags & ~VAR_1;
  VAR_5->rt6i_metric = 0;

  FUNC_5(&VAR_5->rt6i_dst, &VAR_3->rt6i_dst, sizeof(struct rt6key));



  FUNC_5(&VAR_5->rt6i_prefsrc, &VAR_3->rt6i_prefsrc, sizeof(struct rt6key));
  VAR_5->rt6i_table = VAR_3->rt6i_table;
 }
 return VAR_5;
}
