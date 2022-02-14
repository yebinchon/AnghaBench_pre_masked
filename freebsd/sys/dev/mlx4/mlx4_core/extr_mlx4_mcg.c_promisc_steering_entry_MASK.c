
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx4_mgm {int * qp; int members_count; } ;
struct TYPE_2__ {int num_ports; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {struct mlx4_mgm* buf; } ;
typedef enum mlx4_steer_type { ____Placeholder_mlx4_steer_type } mlx4_steer_type ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx4_dev*,int,int,int) ;
 scalar_t__ FUNC_3 (struct mlx4_dev*,unsigned int,struct mlx4_cmd_mailbox*) ;
 struct mlx4_cmd_mailbox* FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

__attribute__((used)) static bool FUNC_6(struct mlx4_dev *VAR_1, u8 VAR_2,
       enum mlx4_steer_type VAR_3,
       unsigned int VAR_4, u32 VAR_5,
       u32 *VAR_6)
{
 struct mlx4_cmd_mailbox *VAR_7;
 struct mlx4_mgm *VAR_8;
 u32 VAR_9;
 bool VAR_10 = 0;
 int VAR_11;

 if (VAR_2 < 1 || VAR_2 > VAR_1->caps.num_ports)
  return 0;

 VAR_7 = FUNC_4(VAR_1);
 if (FUNC_0(VAR_7))
  return 0;
 VAR_8 = VAR_7->buf;

 if (FUNC_3(VAR_1, VAR_4, VAR_7))
  goto out;
 VAR_9 = FUNC_1(VAR_8->members_count) & 0xffffff;
 if (VAR_6)
  *VAR_6 = VAR_9;

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  u32 VAR_12 = FUNC_1(VAR_8->qp[VAR_11]) & VAR_0;
  if (!FUNC_2(VAR_1, VAR_2, VAR_3, VAR_12) && VAR_12 != VAR_5) {

   goto out;
  }
 }
 VAR_10 = 1;
out:
 FUNC_5(VAR_1, VAR_7);
 return VAR_10;
}
