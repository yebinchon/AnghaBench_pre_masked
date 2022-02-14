
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct azx {int num_streams; int reg_lock; TYPE_1__* azx_dev; } ;
struct TYPE_2__ {scalar_t__ irq_pending; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct azx *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->reg_lock);
 for (VAR_1 = 0; VAR_1 < VAR_0->num_streams; VAR_1++)
  VAR_0->azx_dev[VAR_1].irq_pending = 0;
 FUNC_1(&VAR_0->reg_lock);
}
