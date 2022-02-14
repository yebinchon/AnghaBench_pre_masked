
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vx_core {int chip_status; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* change_audio_source ) (struct vx_core*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct vx_core*,int) ;

__attribute__((used)) static void FUNC_3(struct vx_core *VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 if (VAR_1->chip_status & VAR_0)
  return;

 FUNC_0(&VAR_1->lock, VAR_3);
 VAR_1->ops->change_audio_source(VAR_1, VAR_2);
 FUNC_1(&VAR_1->lock, VAR_3);
}
