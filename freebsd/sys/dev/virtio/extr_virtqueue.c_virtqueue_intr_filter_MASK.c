
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* used; } ;
struct virtqueue {scalar_t__ vq_used_cons_idx; TYPE_2__ vq_ring; } ;
struct TYPE_3__ {scalar_t__ idx; } ;


 int FUNC_0 (struct virtqueue*) ;

int
FUNC_1(struct virtqueue *VAR_0)
{

 if (VAR_0->vq_used_cons_idx == VAR_0->vq_ring.used->idx)
  return (0);

 FUNC_0(VAR_0);

 return (1);
}
