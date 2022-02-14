
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vx_core {TYPE_2__* ops; TYPE_1__* hw; } ;
struct TYPE_4__ {int (* akm_write ) (struct vx_core*,int ,int) ;} ;
struct TYPE_3__ {int output_level_max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vx_core*,int ,int) ;
 int FUNC_1 (struct vx_core*,int ,int) ;
 int FUNC_2 (struct vx_core*,int,int ,int) ;

__attribute__((used)) static void FUNC_3(struct vx_core *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 VAR_4 = VAR_2->hw->output_level_max - VAR_4;
 VAR_5 = VAR_2->hw->output_level_max - VAR_5;

 if (VAR_2->ops->akm_write) {
  VAR_2->ops->akm_write(VAR_2, VAR_0, VAR_4);
  VAR_2->ops->akm_write(VAR_2, VAR_1, VAR_5);
 } else {

  FUNC_2(VAR_2, VAR_3, VAR_0, VAR_4);
  FUNC_2(VAR_2, VAR_3, VAR_1, VAR_5);
 }
}
