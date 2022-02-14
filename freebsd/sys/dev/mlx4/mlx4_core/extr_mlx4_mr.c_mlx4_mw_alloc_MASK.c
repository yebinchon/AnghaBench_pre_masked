
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_mw {int pd; int type; int enabled; int key; } ;
struct TYPE_2__ {int flags; int bmme_flags; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
typedef enum mlx4_mw_type { ____Placeholder_mlx4_mw_type } mlx4_mw_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx4_dev*) ;

int FUNC_2(struct mlx4_dev *VAR_7, u32 VAR_8, enum mlx4_mw_type VAR_9,
    struct mlx4_mw *VAR_10)
{
 u32 VAR_11;

 if ((VAR_9 == VAR_5 &&
      !(VAR_7->caps.flags & VAR_3)) ||
      (VAR_9 == VAR_6 &&
      !(VAR_7->caps.bmme_flags & VAR_2)))
  return -VAR_1;

 VAR_11 = FUNC_1(VAR_7);
 if (VAR_11 == -1)
  return -VAR_0;

 VAR_10->key = FUNC_0(VAR_11);
 VAR_10->pd = VAR_8;
 VAR_10->type = VAR_9;
 VAR_10->enabled = VAR_4;

 return 0;
}
