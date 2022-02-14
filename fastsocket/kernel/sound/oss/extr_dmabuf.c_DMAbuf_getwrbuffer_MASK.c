
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_buffparms {int mapping_flags; scalar_t__ dma_mode; int lock; scalar_t__ needs_reorg; } ;
struct audio_operations {struct dma_buffparms* dmap_out; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct audio_operations** VAR_5 ;
 scalar_t__ FUNC_1 (int,char**,int*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,struct dma_buffparms*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

int FUNC_6(int VAR_6, char **VAR_7, int *VAR_8, int VAR_9)
{
 struct audio_operations *VAR_10 = VAR_5[VAR_6];
 unsigned long VAR_11;
 int VAR_12 = -VAR_4;
 struct dma_buffparms *VAR_13 = VAR_10->dmap_out;

 if (VAR_13->mapping_flags & VAR_0) {

  return -VAR_3;
 }
 FUNC_4(&VAR_13->lock,VAR_11);
 if (VAR_13->needs_reorg)
  FUNC_3(VAR_6, VAR_13, 0);

 if (VAR_13->dma_mode == VAR_1) {
  FUNC_5(&VAR_13->lock,VAR_11);
  FUNC_0(VAR_6);
  FUNC_4(&VAR_13->lock,VAR_11);
 }
 VAR_13->dma_mode = VAR_2;

 while (FUNC_1(VAR_6, VAR_7, VAR_8) <= 0) {
  FUNC_5(&VAR_13->lock,VAR_11);
  if ((VAR_12 = FUNC_2(VAR_6, VAR_9)) < 0) {
   return VAR_12;
  }
  FUNC_4(&VAR_13->lock,VAR_11);
 }

 FUNC_5(&VAR_13->lock,VAR_11);
 return 0;
}
