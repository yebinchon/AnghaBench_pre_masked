
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct net_device {int ifindex; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct notifier_block *VAR_3,
      unsigned long VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;

 if (!FUNC_1(FUNC_0(VAR_6), &VAR_2))
  return VAR_1;


 if (VAR_4 == VAR_0)
  FUNC_2(VAR_6->ifindex);
 return VAR_1;
}
