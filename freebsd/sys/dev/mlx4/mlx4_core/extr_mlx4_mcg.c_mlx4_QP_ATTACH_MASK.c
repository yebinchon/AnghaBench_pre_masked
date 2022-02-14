
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mlx4_qp {int qpn; } ;
struct mlx4_dev {TYPE_1__* persist; } ;
struct mlx4_cmd_mailbox {int dma; int buf; } ;
typedef enum mlx4_protocol { ____Placeholder_mlx4_protocol } mlx4_protocol ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int ,scalar_t__*,int) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int,scalar_t__,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_6 (struct mlx4_dev*) ;

__attribute__((used)) static int FUNC_7(struct mlx4_dev *VAR_5, struct mlx4_qp *VAR_6,
     u8 VAR_7[16], u8 VAR_8, u8 VAR_9,
     enum mlx4_protocol VAR_10)
{
 struct mlx4_cmd_mailbox *VAR_11;
 int VAR_12 = 0;
 int VAR_13;

 if (!FUNC_6(VAR_5))
  return -VAR_0;

 VAR_11 = FUNC_3(VAR_5);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 FUNC_2(VAR_11->buf, VAR_7, 16);
 VAR_13 = VAR_6->qpn;
 VAR_13 |= (VAR_10 << 28);
 if (VAR_8 && VAR_9)
  VAR_13 |= (1U << 31);

 VAR_12 = FUNC_4(VAR_5, VAR_11->dma, VAR_13, VAR_8,
         VAR_1, VAR_2,
         VAR_3);

 FUNC_5(VAR_5, VAR_11);
 if (VAR_12 && !VAR_8 &&
     VAR_5->persist->state & VAR_4)
  VAR_12 = 0;
 return VAR_12;
}
