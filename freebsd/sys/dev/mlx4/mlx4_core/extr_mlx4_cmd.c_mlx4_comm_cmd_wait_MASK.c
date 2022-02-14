
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mlx4_dev {TYPE_2__* persist; } ;
struct mlx4_cmd_context {size_t next; int result; scalar_t__ fw_status; int done; int token; } ;
struct mlx4_cmd {size_t free_head; int event_sem; int context_lock; struct mlx4_cmd_context* context; scalar_t__ token_mask; } ;
struct TYPE_4__ {int state; } ;
struct TYPE_3__ {struct mlx4_cmd cmd; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mlx4_dev*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct mlx4_dev*,int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct mlx4_dev*,char*,int ,scalar_t__) ;
 TYPE_1__* FUNC_8 (struct mlx4_dev*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mlx4_dev*,char*,int ,int ) ;
 unsigned long FUNC_11 (unsigned long) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (unsigned long,unsigned long) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_18(struct mlx4_dev *VAR_4, u8 VAR_5,
         u16 VAR_6, u16 VAR_7, unsigned long VAR_8)
{
 struct mlx4_cmd *VAR_9 = &FUNC_8(VAR_4)->cmd;
 struct mlx4_cmd_context *VAR_10;
 unsigned long VAR_11;
 int VAR_12 = 0;

 FUNC_3(&VAR_9->event_sem);

 FUNC_13(&VAR_9->context_lock);
 FUNC_0(VAR_9->free_head < 0);
 VAR_10 = &VAR_9->context[VAR_9->free_head];
 VAR_10->token += VAR_9->token_mask + 1;
 VAR_9->free_head = VAR_10->next;
 FUNC_14(&VAR_9->context_lock);

 FUNC_12(&VAR_10->done);

 if (FUNC_5(VAR_4, VAR_5, VAR_6)) {



  VAR_12 = FUNC_9(VAR_0);
  goto out;
 }

 if (!FUNC_17(&VAR_10->done,
      FUNC_11(VAR_8))) {
  FUNC_10(VAR_4, "communication channel command 0x%x (op=0x%x) timed out\n",
     VAR_5, VAR_7);
  goto out_reset;
 }

 VAR_12 = VAR_10->result;
 if (VAR_12 && VAR_10->fw_status != VAR_1) {
  FUNC_7(VAR_4, "command 0x%x failed: fw status = 0x%x\n",
    VAR_5, VAR_10->fw_status);
  if (FUNC_4(VAR_7, VAR_10->fw_status))
   goto out_reset;
 }
 if (!(VAR_4->persist->state & VAR_2)) {
  VAR_11 = FUNC_11(VAR_8) + VAR_3;
  while (FUNC_1(VAR_4) && FUNC_15(VAR_3, VAR_11))
   FUNC_2();
 }
 goto out;

out_reset:
 VAR_12 = FUNC_9(VAR_0);
 FUNC_6(VAR_4->persist);
out:
 FUNC_13(&VAR_9->context_lock);
 VAR_10->next = VAR_9->free_head;
 VAR_9->free_head = VAR_10 - VAR_9->context;
 FUNC_14(&VAR_9->context_lock);

 FUNC_16(&VAR_9->event_sem);
 return VAR_12;
}
