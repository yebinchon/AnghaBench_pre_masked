
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buffparms {scalar_t__ dma_mode; int fragment_size; int flags; int qtail; scalar_t__ raw_buf_phys; int bytes_in_use; scalar_t__ needs_reorg; int nbufs; int lock; } ;
struct audio_operations {int open_mode; int enable_bits; int go; TYPE_1__* d; } ;
struct TYPE_2__ {int (* prepare_for_input ) (int,int,int ) ;int (* trigger ) (int,int) ;int (* start_input ) (int,scalar_t__,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct audio_operations** VAR_7 ;
 int FUNC_2 (struct audio_operations*,scalar_t__,int ,int ) ;
 int FUNC_3 (int,struct dma_buffparms*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int,int ) ;
 int FUNC_7 (int,scalar_t__,int,int ) ;
 int FUNC_8 (int,int) ;

int FUNC_9(int VAR_8, struct dma_buffparms *VAR_9)
{
 struct audio_operations *VAR_10 = VAR_7[VAR_8];
 int VAR_11;

 if (!(VAR_10->open_mode & VAR_5))
  return 0;
 if (!(VAR_10->enable_bits & VAR_6))
  return 0;
 if (VAR_9->dma_mode == VAR_4) {

  FUNC_5(&VAR_9->lock);
  FUNC_1(VAR_8);
  FUNC_0(VAR_8);
  FUNC_4(&VAR_9->lock);
  VAR_9->dma_mode = VAR_3;
 }
 if (!VAR_9->dma_mode) {
  FUNC_3(VAR_8, VAR_9, 1);
  if ((VAR_11 = VAR_10->d->prepare_for_input(VAR_8,
    VAR_9->fragment_size, VAR_9->nbufs)) < 0)
   return VAR_11;
  VAR_9->dma_mode = VAR_2;
 }
 if (!(VAR_9->flags & VAR_0)) {
  if (VAR_9->needs_reorg)
   FUNC_3(VAR_8, VAR_9, 0);
  FUNC_2(VAR_10, VAR_9->raw_buf_phys, VAR_9->bytes_in_use, VAR_1);
  VAR_10->d->start_input(VAR_8, VAR_9->raw_buf_phys + VAR_9->qtail * VAR_9->fragment_size,
         VAR_9->fragment_size, 0);
  VAR_9->flags |= VAR_0;
  if (VAR_10->d->trigger)
   VAR_10->d->trigger(VAR_8, VAR_10->enable_bits * VAR_10->go);
 }
 return 0;
}
