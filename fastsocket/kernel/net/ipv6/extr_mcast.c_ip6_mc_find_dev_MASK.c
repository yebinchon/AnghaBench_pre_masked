
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dst; } ;
struct rt6_info {TYPE_1__ u; struct net_device* rt6i_dev; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct inet6_dev {int lock; scalar_t__ dead; } ;
struct in6_addr {int dummy; } ;


 struct net_device* FUNC_0 (struct net*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 struct inet6_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct inet6_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct rt6_info* FUNC_8 (struct net*,struct in6_addr*,int *,int ,int ) ;

__attribute__((used)) static struct inet6_dev *FUNC_9(struct net *VAR_0,
      struct in6_addr *VAR_1,
      int VAR_2)
{
 struct net_device *VAR_3 = ((void*)0);
 struct inet6_dev *VAR_4 = ((void*)0);

 if (VAR_2 == 0) {
  struct rt6_info *VAR_5;

  VAR_5 = FUNC_8(VAR_0, VAR_1, ((void*)0), 0, 0);
  if (VAR_5) {
   VAR_3 = VAR_5->rt6i_dev;
   FUNC_1(VAR_3);
   FUNC_3(&VAR_5->u.dst);
  }
 } else
  VAR_3 = FUNC_0(VAR_0, VAR_2);

 if (!VAR_3)
  goto nodev;
 VAR_4 = FUNC_4(VAR_3);
 if (!VAR_4)
  goto release;
 FUNC_6(&VAR_4->lock);
 if (VAR_4->dead)
  goto unlock_release;

 return VAR_4;

unlock_release:
 FUNC_7(&VAR_4->lock);
 FUNC_5(VAR_4);
release:
 FUNC_2(VAR_3);
nodev:
 return ((void*)0);
}
