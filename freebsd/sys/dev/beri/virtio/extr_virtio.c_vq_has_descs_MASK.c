
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vqueue_info {scalar_t__ vq_last_avail; TYPE_1__* vq_avail; } ;
struct TYPE_2__ {int idx; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct vqueue_info*) ;

int
FUNC_2(struct vqueue_info *VAR_0)
{

 return (FUNC_1(VAR_0) && VAR_0->vq_last_avail !=
  FUNC_0(VAR_0->vq_avail->idx));
}
