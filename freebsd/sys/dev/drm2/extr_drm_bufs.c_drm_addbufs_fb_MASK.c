
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device_dma {int buf_count; int page_count; int flags; scalar_t__ byte_count; int seg_count; struct drm_buf** buflist; struct drm_buf_entry* bufs; } ;
struct drm_device {int buf_alloc; TYPE_1__* driver; int count_lock; scalar_t__ buf_use; struct drm_device_dma* dma; } ;
struct drm_buf_entry {int buf_count; int buf_size; int page_order; scalar_t__ seg_count; struct drm_buf* buflist; } ;
struct drm_buf_desc {int count; int size; int flags; unsigned long agp_start; } ;
struct drm_buf {int idx; int total; int order; unsigned long bus_address; int dev_priv_size; void* address; void* dev_private; int * file_priv; scalar_t__ pending; scalar_t__ waiting; int * next; scalar_t__ offset; scalar_t__ used; } ;
struct TYPE_2__ {int dev_priv_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct drm_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct drm_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct drm_device*,struct drm_buf_entry*) ;
 int FUNC_8 (struct drm_device*,int ) ;
 int FUNC_9 (int) ;
 void* FUNC_10 (int,int ,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 struct drm_buf** FUNC_13 (struct drm_buf**,int,int ,int) ;

__attribute__((used)) static int FUNC_14(struct drm_device * VAR_15, struct drm_buf_desc * VAR_16)
{
 struct drm_device_dma *VAR_17 = VAR_15->dma;
 struct drm_buf_entry *VAR_18;
 struct drm_buf *VAR_19;
 unsigned long VAR_20;
 unsigned long VAR_21;
 int VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 int VAR_28;
 int VAR_29;
 struct drm_buf **VAR_30;

 if (!FUNC_8(VAR_15, VAR_0))
  return -VAR_6;

 if (!VAR_17)
  return -VAR_6;

 if (!FUNC_2(VAR_1))
  return -VAR_8;

 VAR_22 = VAR_16->count;
 VAR_23 = FUNC_9(VAR_16->size);
 VAR_24 = 1 << VAR_23;

 VAR_25 = (VAR_16->flags & VAR_14)
     ? FUNC_4(VAR_24) : VAR_24;
 VAR_26 = VAR_23 - VAR_11 > 0 ? VAR_23 - VAR_11 : 0;
 VAR_27 = VAR_12 << VAR_26;

 VAR_28 = 0;
 VAR_21 = VAR_16->agp_start;

 FUNC_0("count:      %d\n", VAR_22);
 FUNC_0("order:      %d\n", VAR_23);
 FUNC_0("size:       %d\n", VAR_24);
 FUNC_0("agp_offset: %lu\n", VAR_21);
 FUNC_0("alignment:  %d\n", VAR_25);
 FUNC_0("page_order: %d\n", VAR_26);
 FUNC_0("total:      %d\n", VAR_27);

 if (VAR_23 < VAR_4 || VAR_23 > VAR_2)
  return -VAR_6;

 FUNC_11(&VAR_15->count_lock);
 if (VAR_15->buf_use) {
  FUNC_12(&VAR_15->count_lock);
  return -VAR_5;
 }
 FUNC_6(&VAR_15->buf_alloc);
 FUNC_12(&VAR_15->count_lock);

 FUNC_1(VAR_15);
 VAR_18 = &VAR_17->bufs[VAR_23];
 if (VAR_18->buf_count) {
  FUNC_3(VAR_15);
  FUNC_5(&VAR_15->buf_alloc);
  return -VAR_7;
 }

 if (VAR_22 < 0 || VAR_22 > 4096) {
  FUNC_3(VAR_15);
  FUNC_5(&VAR_15->buf_alloc);
  return -VAR_6;
 }

 VAR_18->buflist = FUNC_10(VAR_22 * sizeof(*VAR_18->buflist), VAR_3,
     VAR_9 | VAR_10);
 if (!VAR_18->buflist) {
  FUNC_3(VAR_15);
  FUNC_5(&VAR_15->buf_alloc);
  return -VAR_7;
 }

 VAR_18->buf_size = VAR_24;
 VAR_18->page_order = VAR_26;

 VAR_20 = 0;

 while (VAR_18->buf_count < VAR_22) {
  VAR_19 = &VAR_18->buflist[VAR_18->buf_count];
  VAR_19->idx = VAR_17->buf_count + VAR_18->buf_count;
  VAR_19->total = VAR_25;
  VAR_19->order = VAR_23;
  VAR_19->used = 0;

  VAR_19->offset = (VAR_17->byte_count + VAR_20);
  VAR_19->bus_address = VAR_21 + VAR_20;
  VAR_19->address = (void *)(VAR_21 + VAR_20);
  VAR_19->next = ((void*)0);
  VAR_19->waiting = 0;
  VAR_19->pending = 0;
  VAR_19->file_priv = ((void*)0);

  VAR_19->dev_priv_size = VAR_15->driver->dev_priv_size;
  VAR_19->dev_private = FUNC_10(VAR_19->dev_priv_size, VAR_3,
      VAR_9 | VAR_10);
  if (!VAR_19->dev_private) {

   VAR_18->buf_count = VAR_22;
   FUNC_7(VAR_15, VAR_18);
   FUNC_3(VAR_15);
   FUNC_5(&VAR_15->buf_alloc);
   return -VAR_7;
  }

  FUNC_0("buffer %d @ %p\n", VAR_18->buf_count, VAR_19->address);

  VAR_20 += VAR_25;
  VAR_18->buf_count++;
  VAR_28 += VAR_12 << VAR_26;
 }

 FUNC_0("byte_count: %d\n", VAR_28);

 VAR_30 = FUNC_13(VAR_17->buflist,
     (VAR_17->buf_count + VAR_18->buf_count) * sizeof(*VAR_17->buflist),
     VAR_3, VAR_9);
 if (!VAR_30) {

  FUNC_7(VAR_15, VAR_18);
  FUNC_3(VAR_15);
  FUNC_5(&VAR_15->buf_alloc);
  return -VAR_7;
 }
 VAR_17->buflist = VAR_30;

 for (VAR_29 = 0; VAR_29 < VAR_18->buf_count; VAR_29++) {
  VAR_17->buflist[VAR_29 + VAR_17->buf_count] = &VAR_18->buflist[VAR_29];
 }

 VAR_17->buf_count += VAR_18->buf_count;
 VAR_17->seg_count += VAR_18->seg_count;
 VAR_17->page_count += VAR_28 >> VAR_11;
 VAR_17->byte_count += VAR_28;

 FUNC_0("dma->buf_count : %d\n", VAR_17->buf_count);
 FUNC_0("entry->buf_count : %d\n", VAR_18->buf_count);

 FUNC_3(VAR_15);

 VAR_16->count = VAR_18->buf_count;
 VAR_16->size = VAR_24;

 VAR_17->flags = VAR_13;

 FUNC_5(&VAR_15->buf_alloc);
 return 0;
}
