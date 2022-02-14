
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_6__ {TYPE_1__* used; TYPE_2__* avail; } ;
struct virtqueue {int vq_flags; TYPE_3__ vq_ring; scalar_t__ vq_queued_cnt; } ;
struct TYPE_5__ {scalar_t__ idx; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct virtqueue *VAR_2)
{
 uint16_t VAR_3, VAR_4, VAR_5;

 if (VAR_2->vq_flags & VAR_0) {
  VAR_3 = VAR_2->vq_ring.avail->idx;
  VAR_4 = VAR_3 - VAR_2->vq_queued_cnt;
  VAR_5 = FUNC_0(&VAR_2->vq_ring);

  return (FUNC_1(VAR_5, VAR_3, VAR_4) != 0);
 }

 return ((VAR_2->vq_ring.used->flags & VAR_1) == 0);
}
