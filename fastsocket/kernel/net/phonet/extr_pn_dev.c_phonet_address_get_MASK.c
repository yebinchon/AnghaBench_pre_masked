
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct phonet_device_list {int lock; } ;
struct phonet_device {int addrs; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct phonet_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int) ;
 struct phonet_device_list* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int ) ;

u8 FUNC_9(struct net_device *VAR_1, u8 VAR_2)
{
 struct phonet_device_list *VAR_3 = FUNC_5(FUNC_3(VAR_1));
 struct phonet_device *VAR_4;

 FUNC_6(&VAR_3->lock);
 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4) {
  FUNC_0(FUNC_2(VAR_4->addrs, 64));


  if (!FUNC_8(VAR_2 >> 2, VAR_4->addrs))
   VAR_2 = FUNC_4(VAR_4->addrs, 64) << 2;
 } else
  VAR_2 = VAR_0;
 FUNC_7(&VAR_3->lock);
 return VAR_2;
}
