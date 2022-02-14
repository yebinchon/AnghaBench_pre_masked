
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ena_comp_ctx {scalar_t__ status; int comp_status; } ;
struct TYPE_2__ {int aborted_cmd; int no_completion; } ;
struct ena_com_admin_queue {int running_state; int q_lock; TYPE_1__ stats; int completion_timeout; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;
 scalar_t__ FUNC_4 (unsigned long) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int FUNC_6 (struct ena_com_admin_queue*,struct ena_comp_ctx*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ena_com_admin_queue*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct ena_comp_ctx *VAR_6,
           struct ena_com_admin_queue *VAR_7)
{
 unsigned long VAR_8 = 0;
 unsigned long VAR_9;
 int VAR_10;

 VAR_9 = FUNC_0(VAR_7->completion_timeout);

 while (1) {
                FUNC_2(VAR_7->q_lock, VAR_8);
                FUNC_8(VAR_7);
                FUNC_3(VAR_7->q_lock, VAR_8);

                if (VAR_6->status != VAR_2)
   break;

  if (FUNC_4(VAR_9)) {
   FUNC_9("Wait for completion (polling) timeout\n");

   FUNC_2(VAR_7->q_lock, VAR_8);
   VAR_7->stats.no_completion++;
   VAR_7->running_state = 0;
   FUNC_3(VAR_7->q_lock, VAR_8);

   VAR_10 = VAR_4;
   goto err;
  }

  FUNC_1(VAR_5);
 }

 if (FUNC_10(VAR_6->status == VAR_0)) {
  FUNC_9("Command was aborted\n");
  FUNC_2(VAR_7->q_lock, VAR_8);
  VAR_7->stats.aborted_cmd++;
  FUNC_3(VAR_7->q_lock, VAR_8);
  VAR_10 = VAR_3;
  goto err;
 }

 FUNC_5(VAR_6->status != VAR_1,
   "Invalid comp status %d\n", VAR_6->status);

 VAR_10 = FUNC_7(VAR_6->comp_status);
err:
 FUNC_6(VAR_7, VAR_6);
 return VAR_10;
}
