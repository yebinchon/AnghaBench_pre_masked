
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct dma_buffparms {int mapping_flags; scalar_t__ dma_mode; scalar_t__ qlen; int lock; } ;
struct audio_operations {int open_mode; int enable_bits; scalar_t__ go; struct dma_buffparms* dmap_in; } ;
typedef int poll_table ;


 int VAR_0 ;
 int FUNC_0 (int,struct dma_buffparms*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 struct audio_operations** VAR_7 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_3(struct file * VAR_8, int VAR_9, poll_table *VAR_10)
{
 struct audio_operations *VAR_11 = VAR_7[VAR_9];
 struct dma_buffparms *VAR_12 = VAR_11->dmap_in;

 if (!(VAR_11->open_mode & VAR_3))
  return 0;
 if (VAR_12->mapping_flags & VAR_0) {
  if (VAR_12->qlen)
   return VAR_5 | VAR_6;
  return 0;
 }
 if (VAR_12->dma_mode != VAR_1) {
  if (VAR_12->dma_mode == VAR_2 &&
      VAR_11->enable_bits & VAR_4 &&
      !VAR_12->qlen && VAR_11->go) {
   unsigned long VAR_13;

   FUNC_1(&VAR_12->lock,VAR_13);
   FUNC_0(VAR_9, VAR_12);
   FUNC_2(&VAR_12->lock,VAR_13);
  }
  return 0;
 }
 if (!VAR_12->qlen)
  return 0;
 return VAR_5 | VAR_6;
}
