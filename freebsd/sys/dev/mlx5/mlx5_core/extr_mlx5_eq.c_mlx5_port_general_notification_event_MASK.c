
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5_eqe_general_notification_event {int rq_user_index_delay_drop; } ;
struct TYPE_3__ {int port; } ;
struct TYPE_4__ {struct mlx5_eqe_general_notification_event general_notifications; TYPE_1__ port; } ;
struct mlx5_eqe {int sub_type; TYPE_2__ data; } ;
struct mlx5_core_dev {int dummy; } ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int,int) ;
 int FUNC_2 (struct mlx5_core_dev*) ;

__attribute__((used)) static void FUNC_3(struct mlx5_core_dev *VAR_0,
       struct mlx5_eqe *VAR_1)
{
 u8 VAR_2 = (VAR_1->data.port.port >> 4) & 0xf;
 u32 VAR_3;
 struct mlx5_eqe_general_notification_event *VAR_4;

 switch (VAR_1->sub_type) {
 case 129:
  VAR_4 = &VAR_1->data.general_notifications;
  VAR_3 = FUNC_0(VAR_4->rq_user_index_delay_drop) &
     0xffffff;
  break;
 case 128:
  FUNC_2(VAR_0);
  break;
 default:
  FUNC_1(VAR_0,
          "general event with unrecognized subtype: port %d, sub_type %d\n",
          VAR_2, VAR_1->sub_type);
  break;
 }
}
