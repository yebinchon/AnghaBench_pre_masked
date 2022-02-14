
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netpoll_info {int arp_tx; } ;


 int FUNC_0 (struct sk_buff*,struct netpoll_info*) ;
 struct sk_buff* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct netpoll_info *VAR_0)
{
 if (VAR_0) {
  struct sk_buff *VAR_1;

  while ((VAR_1 = FUNC_1(&VAR_0->arp_tx)))
   FUNC_0(VAR_1, VAR_0);
 }
}
