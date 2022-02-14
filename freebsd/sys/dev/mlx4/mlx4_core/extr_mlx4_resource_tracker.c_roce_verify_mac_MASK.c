
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int grh_mylmc; } ;
struct mlx4_qp_context {TYPE_1__ pri_path; int flags; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {scalar_t__ buf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*,int,int,int,int *) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct mlx4_dev *VAR_2, int VAR_3,
    struct mlx4_qp_context *VAR_4,
    struct mlx4_cmd_mailbox *VAR_5)
{
 u64 VAR_6;
 int VAR_7;
 u32 VAR_8 = (FUNC_0(VAR_4->flags) >> 16) & 0xff;
 u8 VAR_9 = *(u8 *)(VAR_5->buf + 64);
 u8 VAR_10;

 VAR_7 = (VAR_9 >> 6 & 1) + 1;
 if (FUNC_2(VAR_2, VAR_7) && (VAR_8 != VAR_1)) {
  VAR_10 = VAR_4->pri_path.grh_mylmc & 0x7f;
  if (FUNC_1(VAR_2, VAR_3, VAR_7, VAR_10, &VAR_6))
   return -VAR_0;
 }
 return 0;
}
