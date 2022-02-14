
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* used; TYPE_1__* avail; } ;
struct virtqueue {char* vq_name; int vq_nentries; int vq_free_cnt; int vq_queued_cnt; int vq_desc_head_idx; int vq_used_cons_idx; TYPE_3__ vq_ring; } ;
struct TYPE_5__ {int idx; int flags; } ;
struct TYPE_4__ {int idx; int flags; } ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_1 (struct virtqueue*) ;
 int FUNC_2 (TYPE_3__*) ;

void
FUNC_3(struct virtqueue *VAR_0)
{

 if (VAR_0 == ((void*)0))
  return;

 FUNC_0("VQ: %s - size=%d; free=%d; used=%d; queued=%d; "
     "desc_head_idx=%d; avail.idx=%d; used_cons_idx=%d; "
     "used.idx=%d; used_event_idx=%d; avail.flags=0x%x; used.flags=0x%x\n",
     VAR_0->vq_name, VAR_0->vq_nentries, VAR_0->vq_free_cnt,
     FUNC_1(VAR_0), VAR_0->vq_queued_cnt, VAR_0->vq_desc_head_idx,
     VAR_0->vq_ring.avail->idx, VAR_0->vq_used_cons_idx,
     VAR_0->vq_ring.used->idx,
  FUNC_2(&VAR_0->vq_ring),
     VAR_0->vq_ring.avail->flags,
     VAR_0->vq_ring.used->flags);
}
