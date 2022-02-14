
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct vq_desc_extra {int ndescs; int * cookie; } ;
struct TYPE_2__ {int desc; } ;
struct virtqueue {int vq_nentries; int vq_max_indirect_size; int vq_free_cnt; size_t vq_desc_head_idx; TYPE_1__ vq_ring; struct vq_desc_extra* vq_descx; } ;
struct sglist {int sg_nseg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct virtqueue*,int,char*,...) ;
 int FUNC_1 (struct virtqueue*) ;
 int FUNC_2 (struct virtqueue*,size_t) ;
 int FUNC_3 (struct virtqueue*,void*,struct sglist*,int,int) ;
 size_t FUNC_4 (struct virtqueue*,int ,size_t,struct sglist*,int,int) ;
 int FUNC_5 (struct virtqueue*,size_t) ;
 scalar_t__ FUNC_6 (struct virtqueue*,int) ;

int
FUNC_7(struct virtqueue *VAR_3, void *VAR_4, struct sglist *VAR_5,
    int VAR_6, int VAR_7)
{
 struct vq_desc_extra *VAR_8;
 int VAR_9;
 uint16_t VAR_10, VAR_11;

 VAR_9 = VAR_6 + VAR_7;

 FUNC_0(VAR_3, VAR_4 != ((void*)0), "enqueuing with no cookie");
 FUNC_0(VAR_3, VAR_9 == VAR_5->sg_nseg,
     "segment count mismatch, %d, %d", VAR_9, VAR_5->sg_nseg);
 FUNC_0(VAR_3,
     VAR_9 <= VAR_3->vq_nentries || VAR_9 <= VAR_3->vq_max_indirect_size,
     "too many segments to enqueue: %d, %d/%d", VAR_9,
     VAR_3->vq_nentries, VAR_3->vq_max_indirect_size);

 if (VAR_9 < 1)
  return (VAR_0);
 if (VAR_3->vq_free_cnt == 0)
  return (VAR_2);

 if (FUNC_6(VAR_3, VAR_9)) {
  FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  return (0);
 } else if (VAR_3->vq_free_cnt < VAR_9)
  return (VAR_1);

 VAR_10 = VAR_3->vq_desc_head_idx;
 FUNC_2(VAR_3, VAR_10);
 VAR_8 = &VAR_3->vq_descx[VAR_10];

 FUNC_0(VAR_3, VAR_8->cookie == ((void*)0),
     "cookie already exists for index %d", VAR_10);
 VAR_8->cookie = VAR_4;
 VAR_8->ndescs = VAR_9;

 VAR_11 = FUNC_4(VAR_3, VAR_3->vq_ring.desc, VAR_10,
     VAR_5, VAR_6, VAR_7);

 VAR_3->vq_desc_head_idx = VAR_11;
 VAR_3->vq_free_cnt -= VAR_9;
 if (VAR_3->vq_free_cnt == 0)
  FUNC_1(VAR_3);
 else
  FUNC_2(VAR_3, VAR_11);

 FUNC_5(VAR_3, VAR_10);

 return (0);
}
