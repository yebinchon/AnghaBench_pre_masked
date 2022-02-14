
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vport {int dummy; } ;
struct ovs_net {int dp_notify_work; } ;
struct notifier_block {int dummy; } ;
struct net_device {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 struct ovs_net* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_2 ;
 struct vport* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct notifier_block *VAR_3, unsigned long VAR_4,
      void *VAR_5)
{
 struct ovs_net *VAR_6;
 struct net_device *VAR_7 = VAR_5;
 struct vport *VAR_8 = ((void*)0);

 if (!FUNC_2(VAR_7))
  VAR_8 = FUNC_3(VAR_7);

 if (!VAR_8)
  return VAR_1;

 if (VAR_4 == VAR_0) {
  VAR_6 = FUNC_1(FUNC_0(VAR_7), VAR_2);
  FUNC_4(&VAR_6->dp_notify_work);
 }

 return VAR_1;
}
