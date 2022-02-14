
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vring_desc {int dummy; } ;
struct vq_desc_extra {int * indirect; int indirect_paddr; } ;
struct virtqueue {int vq_max_indirect_size; int vq_indirect_mem_size; int vq_nentries; struct vq_desc_extra* vq_descx; int vq_flags; int vq_name; int vq_queue_index; int vq_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,char*,...) ;
 int * FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct virtqueue*,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct virtqueue *VAR_6, int VAR_7)
{
 device_t VAR_8;
 struct vq_desc_extra *VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = VAR_6->vq_dev;

 if (FUNC_0(VAR_8, VAR_3) == 0) {





  if (VAR_5)
   FUNC_1(VAR_8, "virtqueue %d (%s) requested "
       "indirect descriptors but not negotiated\n",
       VAR_6->vq_queue_index, VAR_6->vq_name);
  return (0);
 }

 VAR_11 = VAR_7 * sizeof(struct vring_desc);
 VAR_6->vq_max_indirect_size = VAR_7;
 VAR_6->vq_indirect_mem_size = VAR_11;
 VAR_6->vq_flags |= VAR_4;

 for (VAR_10 = 0; VAR_10 < VAR_6->vq_nentries; VAR_10++) {
  VAR_9 = &VAR_6->vq_descx[VAR_10];

  VAR_9->indirect = FUNC_2(VAR_11, VAR_1, VAR_2);
  if (VAR_9->indirect == ((void*)0)) {
   FUNC_1(VAR_8, "cannot allocate indirect list\n");
   return (VAR_0);
  }

  VAR_9->indirect_paddr = FUNC_4(VAR_9->indirect);
  FUNC_3(VAR_6, VAR_9->indirect);
 }

 return (0);
}
