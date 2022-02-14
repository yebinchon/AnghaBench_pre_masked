
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_core_dev {int dummy; } ;
struct mlx5_cmd_work_ent {int ret; unsigned long idx; int status; int in; int done; scalar_t__ polling; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_core_dev*,unsigned long,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_core_dev*,char*,int,int ,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,char*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(struct mlx5_core_dev *VAR_3, struct mlx5_cmd_work_ent *VAR_4)
{
 int VAR_5 = FUNC_5(VAR_2);
 int VAR_6;

 if (VAR_4->polling) {
  FUNC_7(&VAR_4->done);
 } else if (!FUNC_8(&VAR_4->done, VAR_5)) {
                VAR_4->ret = -VAR_0;
                FUNC_1(VAR_3, 1UL << VAR_4->idx, VAR_1);
        }

        VAR_6 = VAR_4->ret;

 if (VAR_6 == -VAR_0) {
  FUNC_4(VAR_3, "%s(0x%x) timeout. Will cause a leak of a command resource\n",
          FUNC_2(FUNC_6(VAR_4->in)),
          FUNC_6(VAR_4->in));
 }
 FUNC_3(VAR_3, "err %d, delivery status %s(%d)\n",
        VAR_6, FUNC_0(VAR_4->status), VAR_4->status);

 return VAR_6;
}
