
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; long vm_end; long vm_start; unsigned long vm_pgoff; } ;
struct snd_pcm_substream {scalar_t__ stream; TYPE_2__* ops; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int info; scalar_t__ access; int dma_bytes; TYPE_1__* status; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int (* mmap ) (struct snd_pcm_substream*,struct vm_area_struct*) ;} ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int ) ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct snd_pcm_substream*,struct vm_area_struct*) ;
 int FUNC_2 (struct snd_pcm_substream*,struct vm_area_struct*) ;

int FUNC_3(struct snd_pcm_substream *VAR_11, struct file *VAR_12,
        struct vm_area_struct *VAR_13)
{
 struct snd_pcm_runtime *VAR_14;
 long VAR_15;
 unsigned long VAR_16;
 size_t VAR_17;

 if (VAR_11->stream == VAR_8) {
  if (!(VAR_13->vm_flags & (VAR_10|VAR_9)))
   return -VAR_1;
 } else {
  if (!(VAR_13->vm_flags & VAR_9))
   return -VAR_1;
 }
 VAR_14 = VAR_11->runtime;
 if (VAR_14->status->state == VAR_7)
  return -VAR_0;
 if (!(VAR_14->info & VAR_6))
  return -VAR_2;
 if (VAR_14->access == VAR_4 ||
     VAR_14->access == VAR_5)
  return -VAR_1;
 VAR_15 = VAR_13->vm_end - VAR_13->vm_start;
 VAR_16 = VAR_13->vm_pgoff << VAR_3;
 VAR_17 = FUNC_0(VAR_14->dma_bytes);
 if ((size_t)VAR_15 > VAR_17)
  return -VAR_1;
 if (VAR_16 > VAR_17 - VAR_15)
  return -VAR_1;

 if (VAR_11->ops->mmap)
  return VAR_11->ops->mmap(VAR_11, VAR_13);
 else
  return FUNC_1(VAR_11, VAR_13);
}
