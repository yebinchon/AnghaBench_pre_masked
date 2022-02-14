
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vx_core {int chip_status; int lock; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* write_codec ) (struct vx_core*,int,unsigned int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct vx_core*,int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct vx_core *VAR_1, int VAR_2, unsigned int VAR_3)
{
 unsigned long VAR_4;

 if (FUNC_0(!VAR_1->ops->write_codec))
  return;

 if (VAR_1->chip_status & VAR_0)
  return;

 FUNC_1(&VAR_1->lock, VAR_4);
 VAR_1->ops->write_codec(VAR_1, VAR_2, VAR_3);
 FUNC_2(&VAR_1->lock, VAR_4);
}
