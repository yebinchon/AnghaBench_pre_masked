
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_comp_ctx {scalar_t__ status; int comp_status; int cmd_opcode; int wait_event; } ;
struct TYPE_2__ {int no_completion; } ;
struct ena_com_admin_queue {int running_state; int q_lock; TYPE_1__ stats; int completion_timeout; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ena_com_admin_queue*,struct ena_comp_ctx*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ena_com_admin_queue*) ;
 int FUNC_6 (char*,int ,...) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct ena_comp_ctx *VAR_3,
       struct ena_com_admin_queue *VAR_4)
{
 unsigned long VAR_5 = 0;
 int VAR_6;

 FUNC_2(VAR_3->wait_event,
       VAR_4->completion_timeout);






 if (FUNC_7(VAR_3->status == VAR_1)) {
  FUNC_0(VAR_4->q_lock, VAR_5);
  FUNC_5(VAR_4);
  VAR_4->stats.no_completion++;
  FUNC_1(VAR_4->q_lock, VAR_5);

  if (VAR_3->status == VAR_0)
   FUNC_6("The ena device have completion but the driver didn't receive any MSI-X interrupt (cmd %d)\n",
        VAR_3->cmd_opcode);
  else
   FUNC_6("The ena device doesn't send any completion for the admin cmd %d status %d\n",
        VAR_3->cmd_opcode, VAR_3->status);

  VAR_4->running_state = 0;
  VAR_6 = VAR_2;
  goto err;
 }

 VAR_6 = FUNC_4(VAR_3->comp_status);
err:
 FUNC_3(VAR_4, VAR_3);
 return VAR_6;
}
