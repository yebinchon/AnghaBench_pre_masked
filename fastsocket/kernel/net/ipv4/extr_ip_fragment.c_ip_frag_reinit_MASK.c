
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {struct sk_buff* next; } ;
struct TYPE_3__ {struct sk_buff* fragments; scalar_t__ meat; scalar_t__ len; scalar_t__ last_in; TYPE_2__* net; int refcnt; int timer; } ;
struct ipq {scalar_t__ iif; TYPE_1__ q; } ;
struct TYPE_4__ {scalar_t__ timeout; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,struct sk_buff*,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct ipq *VAR_2)
{
 struct sk_buff *VAR_3;

 if (!FUNC_2(&VAR_2->q.timer, VAR_1 + VAR_2->q.net->timeout)) {
  FUNC_0(&VAR_2->q.refcnt);
  return -VAR_0;
 }

 VAR_3 = VAR_2->q.fragments;
 do {
  struct sk_buff *VAR_4 = VAR_3->next;
  FUNC_1(VAR_2->q.net, VAR_3, ((void*)0));
  VAR_3 = VAR_4;
 } while (VAR_3);

 VAR_2->q.last_in = 0;
 VAR_2->q.len = 0;
 VAR_2->q.meat = 0;
 VAR_2->q.fragments = ((void*)0);
 VAR_2->iif = 0;

 return 0;
}
