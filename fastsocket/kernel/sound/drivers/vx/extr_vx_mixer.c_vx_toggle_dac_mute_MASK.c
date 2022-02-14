
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vx_core {TYPE_2__* ops; TYPE_1__* hw; } ;
struct TYPE_4__ {int (* akm_write ) (struct vx_core*,int ,int) ;} ;
struct TYPE_3__ {unsigned int num_codecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vx_core*,int ,int) ;
 int FUNC_1 (struct vx_core*,unsigned int,int ,int ) ;

void FUNC_2(struct vx_core *VAR_3, int VAR_4)
{
 unsigned int VAR_5;
 for (VAR_5 = 0; VAR_5 < VAR_3->hw->num_codecs; VAR_5++) {
  if (VAR_3->ops->akm_write)
   VAR_3->ops->akm_write(VAR_3, VAR_2, VAR_4);
  else
   FUNC_1(VAR_3, VAR_5, VAR_2,
      VAR_4 ? VAR_0 : VAR_1);
 }
}
