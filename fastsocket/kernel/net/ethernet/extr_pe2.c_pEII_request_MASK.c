
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int protocol; struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct datalink_proto {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,int ,unsigned char*,int *,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct datalink_proto *VAR_1,
   struct sk_buff *VAR_2, unsigned char *VAR_3)
{
 struct net_device *VAR_4 = VAR_2->dev;

 VAR_2->protocol = FUNC_2(VAR_0);
 FUNC_0(VAR_2, VAR_4, VAR_0, VAR_3, ((void*)0), VAR_2->len);
 return FUNC_1(VAR_2);
}
