
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {size_t free_head; int event_sem; int context_lock; struct mthca_cmd_context* context; scalar_t__ token_mask; } ;
struct mthca_dev {TYPE_1__ cmd; } ;
struct mthca_cmd_context {size_t next; int result; int out_param; scalar_t__ status; int done; int token; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mthca_dev*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_4 (struct mthca_dev*,char*,int ,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct mthca_dev *VAR_1,
     u64 VAR_2,
     u64 *VAR_3,
     int VAR_4,
     u32 VAR_5,
     u8 VAR_6,
     u16 VAR_7,
     unsigned long VAR_8)
{
 int VAR_9 = 0;
 struct mthca_cmd_context *VAR_10;

 FUNC_1(&VAR_1->cmd.event_sem);

 FUNC_6(&VAR_1->cmd.context_lock);
 FUNC_0(VAR_1->cmd.free_head < 0);
 VAR_10 = &VAR_1->cmd.context[VAR_1->cmd.free_head];
 VAR_10->token += VAR_1->cmd.token_mask + 1;
 VAR_1->cmd.free_head = VAR_10->next;
 FUNC_7(&VAR_1->cmd.context_lock);

 FUNC_2(&VAR_10->done);

 VAR_9 = FUNC_3(VAR_1, VAR_2,
        VAR_3 ? *VAR_3 : 0,
        VAR_5, VAR_6,
        VAR_7, VAR_10->token, 1);
 if (VAR_9)
  goto out;

 if (!FUNC_9(&VAR_10->done, VAR_8)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_9 = VAR_10->result;
 if (VAR_9)
  goto out;

 if (VAR_10->status) {
  FUNC_4(VAR_1, "Command %02x completed with status %02x\n",
     VAR_7, VAR_10->status);
  VAR_9 = FUNC_5(VAR_10->status);
 }

 if (VAR_4)
  *VAR_3 = VAR_10->out_param;

out:
 FUNC_6(&VAR_1->cmd.context_lock);
 VAR_10->next = VAR_1->cmd.free_head;
 VAR_1->cmd.free_head = VAR_10 - VAR_1->cmd.context;
 FUNC_7(&VAR_1->cmd.context_lock);

 FUNC_8(&VAR_1->cmd.event_sem);
 return VAR_9;
}
