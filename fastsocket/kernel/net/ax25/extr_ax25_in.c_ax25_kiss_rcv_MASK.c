
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;
struct packet_type {int dummy; } ;
struct net_device {scalar_t__ dev_addr; } ;
typedef int ax25_address ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,int *,struct packet_type*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;

int FUNC_6(struct sk_buff *VAR_2, struct net_device *VAR_3,
    struct packet_type *VAR_4, struct net_device *VAR_5)
{
 FUNC_4(VAR_2);

 if (!FUNC_3(FUNC_1(VAR_3), &VAR_1)) {
  FUNC_2(VAR_2);
  return 0;
 }

 if ((*VAR_2->data & 0x0F) != 0) {
  FUNC_2(VAR_2);
  return 0;
 }

 FUNC_5(VAR_2, VAR_0);

 return FUNC_0(VAR_2, VAR_3, (ax25_address *)VAR_3->dev_addr, VAR_4);
}
