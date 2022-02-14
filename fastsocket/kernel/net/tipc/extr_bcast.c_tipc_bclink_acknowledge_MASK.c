
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int acked; } ;
struct tipc_node {TYPE_1__ bclink; } ;
struct sk_buff {struct sk_buff* next; } ;
struct TYPE_6__ {int next_out; int waiting_ports; int out_queue_size; struct sk_buff* first_out; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(struct tipc_node *VAR_2, u32 VAR_3)
{
 struct sk_buff *VAR_4;
 struct sk_buff *VAR_5;
 unsigned int VAR_6 = 0;

 if (FUNC_4(VAR_3, VAR_2->bclink.acked))
  return;

 FUNC_6(&VAR_0);



 VAR_4 = VAR_1->first_out;
 while (VAR_4 && FUNC_4(FUNC_3(VAR_4), VAR_2->bclink.acked)) {
  VAR_4 = VAR_4->next;
 }



 while (VAR_4 && FUNC_4(FUNC_3(VAR_4), VAR_3)) {
  VAR_5 = VAR_4->next;
  FUNC_1(VAR_4);
  if (FUNC_0(VAR_4) == 0) {
   VAR_1->first_out = VAR_5;
   VAR_1->out_queue_size--;
   FUNC_2(VAR_4);
   VAR_6 = 1;
  }
  VAR_4 = VAR_5;
 }
 VAR_2->bclink.acked = VAR_3;



 if (FUNC_10(VAR_1->next_out))
  FUNC_8(VAR_1);
 if (FUNC_10(VAR_6 && !FUNC_5(&VAR_1->waiting_ports)))
  FUNC_9(VAR_1, 0);
 FUNC_7(&VAR_0);
}
