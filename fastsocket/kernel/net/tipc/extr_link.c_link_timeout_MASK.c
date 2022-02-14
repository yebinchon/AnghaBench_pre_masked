
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct TYPE_2__ {scalar_t__ max_queue_sz; int msg_lengths_total; int * msg_length_profile; int msg_length_counts; int queue_sz_counts; int accu_queue_sz; } ;
struct link {scalar_t__ out_queue_size; int owner; scalar_t__ next_out; TYPE_1__ stats; scalar_t__ first_out; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct tipc_msg* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct link*) ;
 int FUNC_2 (struct link*,int ) ;
 struct tipc_msg* FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*) ;
 scalar_t__ FUNC_5 (struct tipc_msg*) ;
 scalar_t__ FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct link*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct link *VAR_3)
{
 FUNC_8(VAR_3->owner);



 VAR_3->stats.accu_queue_sz += VAR_3->out_queue_size;
 VAR_3->stats.queue_sz_counts++;

 if (VAR_3->out_queue_size > VAR_3->stats.max_queue_sz)
  VAR_3->stats.max_queue_sz = VAR_3->out_queue_size;

 if (VAR_3->first_out) {
  struct tipc_msg *VAR_4 = FUNC_0(VAR_3->first_out);
  u32 VAR_5 = FUNC_4(VAR_4);

  if ((FUNC_6(VAR_4) == VAR_1)
      && (FUNC_5(VAR_4) == VAR_0)) {
   VAR_5 = FUNC_4(FUNC_3(VAR_4));
  }
  if (VAR_5) {
   VAR_3->stats.msg_lengths_total += VAR_5;
   VAR_3->stats.msg_length_counts++;
   if (VAR_5 <= 64)
    VAR_3->stats.msg_length_profile[0]++;
   else if (VAR_5 <= 256)
    VAR_3->stats.msg_length_profile[1]++;
   else if (VAR_5 <= 1024)
    VAR_3->stats.msg_length_profile[2]++;
   else if (VAR_5 <= 4096)
    VAR_3->stats.msg_length_profile[3]++;
   else if (VAR_5 <= 16384)
    VAR_3->stats.msg_length_profile[4]++;
   else if (VAR_5 <= 32768)
    VAR_3->stats.msg_length_profile[5]++;
   else
    VAR_3->stats.msg_length_profile[6]++;
  }
 }



 FUNC_1(VAR_3);

 FUNC_2(VAR_3, VAR_2);

 if (VAR_3->next_out)
  FUNC_7(VAR_3);

 FUNC_9(VAR_3->owner);
}
