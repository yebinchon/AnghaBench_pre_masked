
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct netlbl_unlhsh_iface {int rcu; int list; scalar_t__ valid; } ;
struct net_device {int ifindex; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 struct netlbl_unlhsh_iface* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct notifier_block *VAR_5,
     unsigned long VAR_6,
     void *VAR_7)
{
 struct net_device *VAR_8 = VAR_7;
 struct netlbl_unlhsh_iface *VAR_9 = ((void*)0);

 if (!FUNC_3(FUNC_1(VAR_8), &VAR_2))
  return VAR_1;


 if (VAR_6 == VAR_0) {
  FUNC_5(&VAR_4);
  VAR_9 = FUNC_4(VAR_8->ifindex);
  if (VAR_9 != ((void*)0) && VAR_9->valid) {
   VAR_9->valid = 0;
   FUNC_2(&VAR_9->list);
  } else
   VAR_9 = ((void*)0);
  FUNC_6(&VAR_4);
 }

 if (VAR_9 != ((void*)0))
  FUNC_0(&VAR_9->rcu, VAR_3);

 return VAR_1;
}
