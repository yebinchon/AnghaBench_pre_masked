
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct phonet_device_list {int lock; } ;
struct phonet_device {int addrs; int list; } ;
struct net_device {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct phonet_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (struct phonet_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct net_device*,int) ;
 struct phonet_device_list* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct net_device *VAR_1)
{
 struct phonet_device_list *VAR_2 = FUNC_8(FUNC_2(VAR_1));
 struct phonet_device *VAR_3;

 FUNC_0();

 FUNC_9(&VAR_2->lock);
 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  FUNC_6(&VAR_3->list);
 FUNC_10(&VAR_2->lock);

 if (VAR_3) {
  u8 VAR_4;

  for (VAR_4 = FUNC_3(VAR_3->addrs, 64); VAR_4 < 64;
   VAR_4 = FUNC_4(VAR_3->addrs, 64, 1+VAR_4))
   FUNC_7(VAR_0, VAR_1, VAR_4);
  FUNC_5(VAR_3);
 }
}
