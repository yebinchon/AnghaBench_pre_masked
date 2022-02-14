
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfrm6_tunnel {int (* handler ) (struct sk_buff*) ;struct xfrm6_tunnel* next; } ;
struct sk_buff {int dev; } ;
struct iphdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*) ;
 struct xfrm6_tunnel* VAR_2 ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_3)
{
 struct xfrm6_tunnel *VAR_4;

 if (!FUNC_2(VAR_3, sizeof(struct iphdr)))
  goto drop;

 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next)
  if (!VAR_4->handler(VAR_3))
   return 0;

 FUNC_0(VAR_3, VAR_0, VAR_1, 0, VAR_3->dev);

drop:
 FUNC_1(VAR_3);
 return 0;
}
