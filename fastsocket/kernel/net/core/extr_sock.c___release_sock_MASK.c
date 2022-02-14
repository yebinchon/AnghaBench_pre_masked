
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * tail; struct sk_buff* head; } ;
struct sock {TYPE_2__ sk_backlog; } ;
struct sk_buff {struct sk_buff* next; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct TYPE_6__ {TYPE_1__ sk_backlog; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 TYPE_3__* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0)
{
 struct sk_buff *VAR_1 = VAR_0->sk_backlog.head;

 do {
  VAR_0->sk_backlog.head = VAR_0->sk_backlog.tail = ((void*)0);
  FUNC_1(VAR_0);

  do {
   struct sk_buff *VAR_2 = VAR_1->next;

   VAR_1->next = ((void*)0);
   FUNC_3(VAR_0, VAR_1);







   FUNC_2();

   VAR_1 = VAR_2;
  } while (VAR_1 != ((void*)0));

  FUNC_0(VAR_0);
 } while ((VAR_1 = VAR_0->sk_backlog.head) != ((void*)0));





 FUNC_4(VAR_0)->sk_backlog.len = 0;
}
