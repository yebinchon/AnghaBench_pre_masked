
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct res_qp {int mcg_spl; int mcg_list; } ;
struct res_gid {int prot; int steer; int list; int reg_id; int gid; } ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_steer_type { ____Placeholder_mlx4_steer_type } mlx4_steer_type ;
typedef enum mlx4_protocol { ____Placeholder_mlx4_protocol } mlx4_protocol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx4_dev*,int,struct res_qp*,int *) ;
 int FUNC_1 (struct res_gid*) ;
 struct res_gid* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct mlx4_dev *VAR_3, int VAR_4, struct res_qp *VAR_5,
         u8 *VAR_6, enum mlx4_protocol VAR_7,
         enum mlx4_steer_type VAR_8, u64 VAR_9)
{
 struct res_gid *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(sizeof *VAR_10, VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_5(&VAR_5->mcg_spl);
 if (FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6)) {
  FUNC_1(VAR_10);
  VAR_11 = -VAR_0;
 } else {
  FUNC_4(VAR_10->gid, VAR_6, 16);
  VAR_10->prot = VAR_7;
  VAR_10->steer = VAR_8;
  VAR_10->reg_id = VAR_9;
  FUNC_3(&VAR_10->list, &VAR_5->mcg_list);
  VAR_11 = 0;
 }
 FUNC_6(&VAR_5->mcg_spl);

 return VAR_11;
}
