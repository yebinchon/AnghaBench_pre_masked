
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {struct sk_buff* next; } ;
struct link {int out_queue_size; struct sk_buff* last_out; struct sk_buff* first_out; TYPE_2__* owner; int next_out_no; scalar_t__ next_in_no; } ;
struct TYPE_3__ {int last_in; } ;
struct TYPE_4__ {TYPE_1__ bclink; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct tipc_msg*,int ) ;
 int FUNC_2 (struct tipc_msg*,int,int) ;

__attribute__((used)) static void FUNC_3(struct link *VAR_0,
     struct sk_buff *VAR_1,
     struct tipc_msg *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_0->next_in_no - 1);
 u32 VAR_4 = FUNC_0(VAR_0->next_out_no++);

 FUNC_2(VAR_2, 2, ((VAR_3 << 16) | VAR_4));
 FUNC_1(VAR_2, VAR_0->owner->bclink.last_in);
 VAR_1->next = ((void*)0);
 if (VAR_0->first_out) {
  VAR_0->last_out->next = VAR_1;
  VAR_0->last_out = VAR_1;
 } else
  VAR_0->first_out = VAR_0->last_out = VAR_1;
 VAR_0->out_queue_size++;
}
