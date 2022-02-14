
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct dma_buffparms {int mapping_flags; scalar_t__ dma_mode; scalar_t__ qlen; } ;
struct audio_operations {int open_mode; struct dma_buffparms* dmap_out; } ;
typedef int poll_table ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 struct audio_operations** VAR_6 ;

__attribute__((used)) static unsigned int FUNC_1(struct file * VAR_7, int VAR_8, poll_table *VAR_9)
{
 struct audio_operations *VAR_10 = VAR_6[VAR_8];
 struct dma_buffparms *VAR_11 = VAR_10->dmap_out;

 if (!(VAR_10->open_mode & VAR_3))
  return 0;
 if (VAR_11->mapping_flags & VAR_0) {
  if (VAR_11->qlen)
   return VAR_4 | VAR_5;
  return 0;
 }
 if (VAR_11->dma_mode == VAR_1)
  return 0;
 if (VAR_11->dma_mode == VAR_2)
  return VAR_4 | VAR_5;
 if (!FUNC_0(VAR_8))
  return 0;
 return VAR_4 | VAR_5;
}
