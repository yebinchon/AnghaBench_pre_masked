
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t uint16_t ;
struct vring_used_elem {int len; scalar_t__ id; } ;
struct TYPE_5__ {TYPE_1__* used; } ;
struct virtqueue {scalar_t__ vq_used_cons_idx; int vq_nentries; TYPE_3__* vq_descx; TYPE_2__ vq_ring; } ;
struct TYPE_6__ {int * cookie; } ;
struct TYPE_4__ {scalar_t__ idx; struct vring_used_elem* ring; } ;


 int FUNC_0 (struct virtqueue*,int ,char*,size_t) ;
 int FUNC_1 () ;
 int FUNC_2 (struct virtqueue*,size_t) ;

void *
FUNC_3(struct virtqueue *VAR_0, uint32_t *VAR_1)
{
 struct vring_used_elem *VAR_2;
 void *VAR_3;
 uint16_t VAR_4, VAR_5;

 if (VAR_0->vq_used_cons_idx == VAR_0->vq_ring.used->idx)
  return (((void*)0));

 VAR_4 = VAR_0->vq_used_cons_idx++ & (VAR_0->vq_nentries - 1);
 VAR_2 = &VAR_0->vq_ring.used->ring[VAR_4];

 FUNC_1();
 VAR_5 = (uint16_t) VAR_2->id;
 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_2->len;

 FUNC_2(VAR_0, VAR_5);

 VAR_3 = VAR_0->vq_descx[VAR_5].cookie;
 FUNC_0(VAR_0, VAR_3 != ((void*)0), "no cookie for index %d", VAR_5);
 VAR_0->vq_descx[VAR_5].cookie = ((void*)0);

 return (VAR_3);
}
