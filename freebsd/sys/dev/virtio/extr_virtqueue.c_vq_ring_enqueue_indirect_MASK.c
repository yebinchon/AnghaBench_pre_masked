
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct vring_desc {int len; size_t next; int flags; int addr; } ;
struct vq_desc_extra {int ndescs; int indirect; int indirect_paddr; int * cookie; } ;
struct TYPE_2__ {struct vring_desc* desc; } ;
struct virtqueue {int vq_max_indirect_size; size_t vq_desc_head_idx; scalar_t__ vq_free_cnt; struct vq_desc_extra* vq_descx; TYPE_1__ vq_ring; } ;
struct sglist {int dummy; } ;


 int FUNC_0 (struct virtqueue*,int,char*,...) ;
 int FUNC_1 (struct virtqueue*) ;
 int FUNC_2 (struct virtqueue*,size_t) ;
 int VAR_0 ;
 int FUNC_3 (struct virtqueue*,int ,int ,struct sglist*,int,int) ;
 int FUNC_4 (struct virtqueue*,size_t) ;

__attribute__((used)) static void
FUNC_5(struct virtqueue *VAR_1, void *VAR_2,
    struct sglist *VAR_3, int VAR_4, int VAR_5)
{
 struct vring_desc *VAR_6;
 struct vq_desc_extra *VAR_7;
 int VAR_8;
 uint16_t VAR_9;

 VAR_8 = VAR_4 + VAR_5;
 FUNC_0(VAR_1, VAR_8 <= VAR_1->vq_max_indirect_size,
     "enqueuing too many indirect descriptors");

 VAR_9 = VAR_1->vq_desc_head_idx;
 FUNC_2(VAR_1, VAR_9);
 VAR_6 = &VAR_1->vq_ring.desc[VAR_9];
 VAR_7 = &VAR_1->vq_descx[VAR_9];

 FUNC_0(VAR_1, VAR_7->cookie == ((void*)0),
     "cookie already exists for index %d", VAR_9);
 VAR_7->cookie = VAR_2;
 VAR_7->ndescs = 1;

 VAR_6->addr = VAR_7->indirect_paddr;
 VAR_6->len = VAR_8 * sizeof(struct vring_desc);
 VAR_6->flags = VAR_0;

 FUNC_3(VAR_1, VAR_7->indirect, 0,
     VAR_3, VAR_4, VAR_5);

 VAR_1->vq_desc_head_idx = VAR_6->next;
 VAR_1->vq_free_cnt--;
 if (VAR_1->vq_free_cnt == 0)
  FUNC_1(VAR_1);
 else
  FUNC_2(VAR_1, VAR_1->vq_desc_head_idx);

 FUNC_4(VAR_1, VAR_9);
}
