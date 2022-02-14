
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef int uint16_t ;
struct vq_desc_extra {int dummy; } ;
struct vq_alloc_info {int vqai_maxindirsz; int vqai_intr_arg; int vqai_intr; int vqai_name; } ;
struct virtqueue {int vq_queue_index; int vq_alignment; int vq_nentries; int vq_free_cnt; int * vq_ring_mem; int vq_ring_size; int vq_flags; int vq_intrhand_arg; int vq_intrhand; int vq_name; int vq_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_1 (int ,int ,int,int ,int ,int ,int ) ;
 int FUNC_2 (int ,char*,...) ;
 struct virtqueue* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct virtqueue*) ;
 int FUNC_8 (struct virtqueue*) ;
 int FUNC_9 (struct virtqueue*,int) ;
 int FUNC_10 (struct virtqueue*) ;
 int FUNC_11 (int,int) ;

int
FUNC_12(device_t VAR_11, uint16_t VAR_12, uint16_t VAR_13, int VAR_14,
    vm_paddr_t VAR_15, struct vq_alloc_info *VAR_16, struct virtqueue **VAR_17)
{
 struct virtqueue *VAR_18;
 int VAR_19;

 *VAR_17 = ((void*)0);
 VAR_19 = 0;

 if (VAR_13 == 0) {
  FUNC_2(VAR_11,
      "virtqueue %d (%s) does not exist (size is zero)\n",
      VAR_12, VAR_16->vqai_name);
  return (VAR_1);
 } else if (!FUNC_4(VAR_13)) {
  FUNC_2(VAR_11,
      "virtqueue %d (%s) size is not a power of 2: %d\n",
      VAR_12, VAR_16->vqai_name, VAR_13);
  return (VAR_3);
 } else if (VAR_16->vqai_maxindirsz > VAR_8) {
  FUNC_2(VAR_11, "virtqueue %d (%s) requested too many "
      "indirect descriptors: %d, max %d\n",
      VAR_12, VAR_16->vqai_name, VAR_16->vqai_maxindirsz,
      VAR_8);
  return (VAR_0);
 }

 VAR_18 = FUNC_3(sizeof(struct virtqueue) +
     VAR_13 * sizeof(struct vq_desc_extra), VAR_4, VAR_5 | VAR_6);
 if (VAR_18 == ((void*)0)) {
  FUNC_2(VAR_11, "cannot allocate virtqueue\n");
  return (VAR_2);
 }

 VAR_18->vq_dev = VAR_11;
 FUNC_6(VAR_18->vq_name, VAR_16->vqai_name, sizeof(VAR_18->vq_name));
 VAR_18->vq_queue_index = VAR_12;
 VAR_18->vq_alignment = VAR_14;
 VAR_18->vq_nentries = VAR_13;
 VAR_18->vq_free_cnt = VAR_13;
 VAR_18->vq_intrhand = VAR_16->vqai_intr;
 VAR_18->vq_intrhand_arg = VAR_16->vqai_intr_arg;

 if (FUNC_0(VAR_11, VAR_9) != 0)
  VAR_18->vq_flags |= VAR_10;

 if (VAR_16->vqai_maxindirsz > 1) {
  VAR_19 = FUNC_9(VAR_18, VAR_16->vqai_maxindirsz);
  if (VAR_19)
   goto fail;
 }

 VAR_18->vq_ring_size = FUNC_5(FUNC_11(VAR_13, VAR_14));
 VAR_18->vq_ring_mem = FUNC_1(VAR_18->vq_ring_size, VAR_4,
     VAR_5 | VAR_6, 0, VAR_15, VAR_7, 0);
 if (VAR_18->vq_ring_mem == ((void*)0)) {
  FUNC_2(VAR_11,
      "cannot allocate memory for virtqueue ring\n");
  VAR_19 = VAR_2;
  goto fail;
 }

 FUNC_10(VAR_18);
 FUNC_7(VAR_18);

 *VAR_17 = VAR_18;

fail:
 if (VAR_19)
  FUNC_8(VAR_18);

 return (VAR_19);
}
