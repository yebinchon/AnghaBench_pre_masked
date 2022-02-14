
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {unsigned int mtu; } ;
struct neighbour {int dummy; } ;
struct TYPE_6__ {unsigned int* metrics; struct net_device* dev; struct neighbour* neighbour; } ;
struct TYPE_5__ {TYPE_2__ dst; } ;
struct dn_route {TYPE_1__ u; scalar_t__ rt_gateway; int rt_type; } ;
struct dn_fib_res {int type; struct dn_fib_info* fi; } ;
struct dn_fib_info {int fib_metrics; } ;
struct TYPE_7__ {scalar_t__ nh_scope; } ;


 scalar_t__ FUNC_0 (struct dn_fib_res) ;
 TYPE_4__ FUNC_1 (struct dn_fib_res) ;
 scalar_t__ FUNC_2 (struct neighbour*) ;
 int FUNC_3 (struct neighbour*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct neighbour* FUNC_4 (int *,scalar_t__*,struct net_device*) ;
 unsigned int FUNC_5 (struct net_device*,int ) ;
 int VAR_3 ;
 unsigned int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (unsigned int*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct dn_route *VAR_4, struct dn_fib_res *VAR_5)
{
 struct dn_fib_info *VAR_6 = VAR_5->fi;
 struct net_device *VAR_7 = VAR_4->u.dst.dev;
 struct neighbour *VAR_8;
 unsigned VAR_9;

 if (VAR_6) {
  if (FUNC_0(*VAR_5) &&
      FUNC_1(*VAR_5).nh_scope == VAR_2)
   VAR_4->rt_gateway = FUNC_0(*VAR_5);
  FUNC_8(VAR_4->u.dst.metrics, VAR_6->fib_metrics,
         sizeof(VAR_4->u.dst.metrics));
 }
 VAR_4->rt_type = VAR_5->type;

 if (VAR_7 != ((void*)0) && VAR_4->u.dst.neighbour == ((void*)0)) {
  VAR_8 = FUNC_4(&VAR_3, &VAR_4->rt_gateway, VAR_7);
  if (FUNC_2(VAR_8))
   return FUNC_3(VAR_8);
  VAR_4->u.dst.neighbour = VAR_8;
 }

 if (FUNC_6(&VAR_4->u.dst, VAR_1) == 0 ||
     FUNC_6(&VAR_4->u.dst, VAR_1) > VAR_4->u.dst.dev->mtu)
  VAR_4->u.dst.metrics[VAR_1-1] = VAR_4->u.dst.dev->mtu;
 VAR_9 = FUNC_5(VAR_7, FUNC_7(&VAR_4->u.dst));
 if (FUNC_6(&VAR_4->u.dst, VAR_0) == 0 ||
     FUNC_6(&VAR_4->u.dst, VAR_0) > VAR_9)
  VAR_4->u.dst.metrics[VAR_0-1] = VAR_9;
 return 0;
}
