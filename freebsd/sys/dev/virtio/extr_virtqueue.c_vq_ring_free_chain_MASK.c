
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct vring_desc {int flags; size_t next; } ;
struct vq_desc_extra {scalar_t__ ndescs; } ;
struct TYPE_2__ {struct vring_desc* desc; } ;
struct virtqueue {scalar_t__ vq_free_cnt; size_t vq_desc_head_idx; TYPE_1__ vq_ring; struct vq_desc_extra* vq_descx; } ;


 int FUNC_0 (struct virtqueue*,int,char*,scalar_t__) ;
 int FUNC_1 (struct virtqueue*) ;
 int FUNC_2 (struct virtqueue*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(struct virtqueue *VAR_2, uint16_t VAR_3)
{
 struct vring_desc *VAR_4;
 struct vq_desc_extra *VAR_5;

 FUNC_2(VAR_2, VAR_3);
 VAR_4 = &VAR_2->vq_ring.desc[VAR_3];
 VAR_5 = &VAR_2->vq_descx[VAR_3];

 if (VAR_2->vq_free_cnt == 0)
  FUNC_1(VAR_2);

 VAR_2->vq_free_cnt += VAR_5->ndescs;
 VAR_5->ndescs--;

 if ((VAR_4->flags & VAR_0) == 0) {
  while (VAR_4->flags & VAR_1) {
   FUNC_2(VAR_2, VAR_4->next);
   VAR_4 = &VAR_2->vq_ring.desc[VAR_4->next];
   VAR_5->ndescs--;
  }
 }

 FUNC_0(VAR_2, VAR_5->ndescs == 0,
     "failed to free entire desc chain, remaining: %d", VAR_5->ndescs);






 VAR_4->next = VAR_2->vq_desc_head_idx;
 VAR_2->vq_desc_head_idx = VAR_3;
}
