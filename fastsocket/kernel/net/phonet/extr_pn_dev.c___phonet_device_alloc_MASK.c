
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phonet_device_list {int list; } ;
struct phonet_device {int list; int addrs; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct net_device*) ;
 struct phonet_device* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 struct phonet_device_list* FUNC_4 (int ) ;

__attribute__((used)) static struct phonet_device *FUNC_5(struct net_device *VAR_1)
{
 struct phonet_device_list *VAR_2 = FUNC_4(FUNC_1(VAR_1));
 struct phonet_device *VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (VAR_3 == ((void*)0))
  return ((void*)0);
 VAR_3->netdev = VAR_1;
 FUNC_0(VAR_3->addrs, 64);

 FUNC_3(&VAR_3->list, &VAR_2->list);
 return VAR_3;
}
