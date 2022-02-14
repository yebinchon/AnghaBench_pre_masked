
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct phonet_device_list {int lock; } ;
struct phonet_device {int list; int addrs; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct phonet_device* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct phonet_device*) ;
 int FUNC_4 (int *) ;
 struct phonet_device_list* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int ) ;

int FUNC_9(struct net_device *VAR_1, u8 VAR_2)
{
 struct phonet_device_list *VAR_3 = FUNC_5(FUNC_2(VAR_1));
 struct phonet_device *VAR_4;
 int VAR_5 = 0;

 FUNC_6(&VAR_3->lock);
 VAR_4 = FUNC_0(VAR_1);
 if (!VAR_4 || !FUNC_8(VAR_2 >> 2, VAR_4->addrs))
  VAR_5 = -VAR_0;
 else if (FUNC_1(VAR_4->addrs, 64)) {
  FUNC_4(&VAR_4->list);
  FUNC_3(VAR_4);
 }
 FUNC_7(&VAR_3->lock);
 return VAR_5;
}
