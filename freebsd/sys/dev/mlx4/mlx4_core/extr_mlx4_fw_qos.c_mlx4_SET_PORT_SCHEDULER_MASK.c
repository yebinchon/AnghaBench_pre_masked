
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_set_port_scheduler_context {struct mlx4_port_scheduler_tc_cfg_be* tc; } ;
struct mlx4_port_scheduler_tc_cfg_be {void* bw_precentage; void* pg; void* max_bw_units; void* max_bw_value; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; struct mlx4_set_port_scheduler_context* buf; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 void* FUNC_2 (int) ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int,int,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_6(struct mlx4_dev *VAR_9, u8 VAR_10, u8 *VAR_11,
       u8 *VAR_12, u16 *VAR_13)
{
 struct mlx4_cmd_mailbox *VAR_14;
 struct mlx4_set_port_scheduler_context *VAR_15;
 int VAR_16;
 u32 VAR_17;
 int VAR_18;

 VAR_14 = FUNC_3(VAR_9);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_15 = VAR_14->buf;

 for (VAR_18 = 0; VAR_18 < VAR_4; VAR_18++) {
  struct mlx4_port_scheduler_tc_cfg_be *VAR_19 = &VAR_15->tc[VAR_18];
  u16 VAR_20;

  if (VAR_13 && VAR_13[VAR_18]) {
   if (VAR_13[VAR_18] <= VAR_3) {
    VAR_20 = VAR_13[VAR_18];
    VAR_19->max_bw_units =
     FUNC_2(VAR_5);
   } else {
    VAR_20 = VAR_13[VAR_18] / 10;
    VAR_19->max_bw_units =
     FUNC_2(VAR_6);
   }
   VAR_19->max_bw_value = FUNC_2(VAR_20);
  } else {
   VAR_19->max_bw_value = FUNC_2(VAR_7);
   VAR_19->max_bw_units = FUNC_2(VAR_6);
  }

  VAR_19->pg = FUNC_2(VAR_12[VAR_18]);
  VAR_19->bw_precentage = FUNC_2(VAR_11[VAR_18]);
 }

 VAR_17 = VAR_8 << 8 | VAR_10;
 VAR_16 = FUNC_4(VAR_9, VAR_14->dma, VAR_17, 1, VAR_1,
         VAR_2, VAR_0);

 FUNC_5(VAR_9, VAR_14);
 return VAR_16;
}
