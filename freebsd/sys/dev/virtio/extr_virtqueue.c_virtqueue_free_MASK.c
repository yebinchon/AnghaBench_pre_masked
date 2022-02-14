
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtqueue {scalar_t__ vq_free_cnt; scalar_t__ vq_nentries; int vq_flags; int * vq_ring_mem; scalar_t__ vq_ring_size; int vq_name; int vq_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int ,char*,int ,scalar_t__) ;
 int FUNC_2 (struct virtqueue*,int ) ;
 int FUNC_3 (struct virtqueue*) ;

void
FUNC_4(struct virtqueue *VAR_2)
{

 if (VAR_2->vq_free_cnt != VAR_2->vq_nentries) {
  FUNC_1(VAR_2->vq_dev, "%s: freeing non-empty virtqueue, "
      "leaking %d entries\n", VAR_2->vq_name,
      VAR_2->vq_nentries - VAR_2->vq_free_cnt);
 }

 if (VAR_2->vq_flags & VAR_1)
  FUNC_3(VAR_2);

 if (VAR_2->vq_ring_mem != ((void*)0)) {
  FUNC_0(VAR_2->vq_ring_mem, VAR_2->vq_ring_size, VAR_0);
  VAR_2->vq_ring_size = 0;
  VAR_2->vq_ring_mem = ((void*)0);
 }

 FUNC_2(VAR_2, VAR_0);
}
