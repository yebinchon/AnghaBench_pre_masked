
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vq_postpone_t ;
typedef int uint16_t ;
struct TYPE_4__ {TYPE_1__* avail; } ;
struct virtqueue {int vq_used_cons_idx; TYPE_2__ vq_ring; } ;
struct TYPE_3__ {int idx; } ;





 int FUNC_0 (struct virtqueue*,int) ;

int
FUNC_1(struct virtqueue *VAR_0, vq_postpone_t VAR_1)
{
 uint16_t VAR_2, VAR_3;

 VAR_3 = VAR_0->vq_ring.avail->idx;
 VAR_2 = (uint16_t)(VAR_3 - VAR_0->vq_used_cons_idx);

 switch (VAR_1) {
 case 128:
  VAR_2 = VAR_2 / 4;
  break;
 case 129:
  VAR_2 = (VAR_2 * 3) / 4;
  break;
 case 130:
  break;
 }

 return (FUNC_0(VAR_0, VAR_2));
}
