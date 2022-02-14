
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct nlmsghdr {scalar_t__ nlmsg_len; } ;
struct audit_buffer {TYPE_1__* skb; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct audit_buffer*) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 struct nlmsghdr* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct audit_buffer *VAR_3)
{
 if (!VAR_3)
  return;
 if (!FUNC_4()) {
  FUNC_2("rate limit exceeded");
 } else {
  struct nlmsghdr *VAR_4 = FUNC_5(VAR_3->skb);
  VAR_4->nlmsg_len = VAR_3->skb->len - FUNC_0(0);

  if (VAR_0) {
   FUNC_6(&VAR_1, VAR_3->skb);
   FUNC_7(&VAR_2);
  } else {
   FUNC_3(VAR_3->skb);
  }
  VAR_3->skb = ((void*)0);
 }
 FUNC_1(VAR_3);
}
