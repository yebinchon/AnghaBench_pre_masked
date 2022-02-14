
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct TYPE_4__ {int wq_cmd; } ;
struct TYPE_5__ {TYPE_1__ health; } ;
struct mlx5_cmd {scalar_t__ mode; struct mlx5_cmd_stats* stats; } ;
struct mlx5_core_dev {TYPE_2__ priv; struct mlx5_cmd cmd; } ;
struct mlx5_cmd_work_ent {int polling; int status; scalar_t__ ts1; scalar_t__ ts2; int work; int cb_timeout_work; int done; } ;
struct mlx5_cmd_stats {int lock; int n; int sum; } ;
struct TYPE_6__ {int data; } ;
struct mlx5_cmd_msg {TYPE_3__ first; } ;
typedef scalar_t__ s64 ;
typedef int mlx5_cmd_cbk_t ;


 size_t FUNC_0 (struct mlx5_cmd_stats*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int (*) (int *)) ;
 scalar_t__ FUNC_3 (struct mlx5_cmd_work_ent*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (struct mlx5_cmd_work_ent*) ;
 struct mlx5_cmd_work_ent* FUNC_6 (struct mlx5_cmd*,struct mlx5_cmd_msg*,int,struct mlx5_cmd_msg*,void*,int,int ,void*,int) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mlx5_cmd_work_ent*) ;
 int FUNC_9 (int *) ;
 int VAR_6 ;
 int FUNC_10 (size_t) ;
 int FUNC_11 (struct mlx5_core_dev*,int,char*,int ,long long) ;
 int FUNC_12 (struct mlx5_core_dev*,char*) ;
 int VAR_7 ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct mlx5_core_dev*,struct mlx5_cmd_work_ent*) ;

__attribute__((used)) static int FUNC_17(struct mlx5_core_dev *VAR_8, struct mlx5_cmd_msg *VAR_9,
      int VAR_10,
      struct mlx5_cmd_msg *VAR_11, void *VAR_12, int VAR_13,
      mlx5_cmd_cbk_t VAR_14,
      void *VAR_15, int VAR_16, u8 *VAR_17,
      bool VAR_18)
{
 struct mlx5_cmd *VAR_19 = &VAR_8->cmd;
 struct mlx5_cmd_work_ent *VAR_20;
 struct mlx5_cmd_stats *VAR_21;
 int VAR_22 = 0;
 s64 VAR_23;
 u16 VAR_24;

 if (VAR_14 && VAR_16)
  return -VAR_0;

 VAR_20 = FUNC_6(VAR_19, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
   VAR_15, VAR_16);
 if (FUNC_3(VAR_20))
  return FUNC_5(VAR_20);

 VAR_20->polling = VAR_18 || (VAR_19->mode == VAR_3);

 if (!VAR_14)
  FUNC_9(&VAR_20->done);

        FUNC_1(&VAR_20->cb_timeout_work, VAR_5);
 FUNC_2(&VAR_20->work, FUNC_7);
 if (VAR_16) {
  FUNC_7(&VAR_20->work);
 } else if (!FUNC_13(VAR_8->priv.health.wq_cmd, &VAR_20->work)) {
  FUNC_12(VAR_8, "failed to queue work\n");
  VAR_22 = -VAR_1;
  goto out_free;
 }

 if (VAR_14)
                goto out;

        VAR_22 = FUNC_16(VAR_8, VAR_20);
        if (VAR_22 == -VAR_2)
                goto out;

        VAR_23 = VAR_20->ts2 - VAR_20->ts1;
 VAR_24 = FUNC_4(VAR_6, VAR_9->first.data, VAR_7);
        if (VAR_24 < FUNC_0(VAR_19->stats)) {
                VAR_21 = &VAR_19->stats[VAR_24];
                FUNC_14(&VAR_21->lock);
                VAR_21->sum += VAR_23;
                ++VAR_21->n;
                FUNC_15(&VAR_21->lock);
        }
        FUNC_11(VAR_8, 1 << VAR_4,
                           "fw exec time for %s is %lld nsec\n",
                           FUNC_10(VAR_24), (long long)VAR_23);
        *VAR_17 = VAR_20->status;
        FUNC_8(VAR_20);

 return VAR_22;

out_free:
 FUNC_8(VAR_20);
out:
 return VAR_22;
}
