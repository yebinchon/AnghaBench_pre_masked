
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_3__ {TYPE_2__* avail; } ;
struct virtqueue {int vq_nentries; int vq_queued_cnt; TYPE_1__ vq_ring; } ;
struct TYPE_4__ {int idx; size_t* ring; } ;


 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct virtqueue *VAR_0, uint16_t VAR_1)
{
 uint16_t VAR_2;
 VAR_2 = VAR_0->vq_ring.avail->idx & (VAR_0->vq_nentries - 1);
 VAR_0->vq_ring.avail->ring[VAR_2] = VAR_1;

 FUNC_0();
 VAR_0->vq_ring.avail->idx++;


 VAR_0->vq_queued_cnt++;
}
