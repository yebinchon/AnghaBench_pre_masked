
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buffparms {int flags; int fragment_size; int* counts; size_t qhead; scalar_t__ raw_buf_phys; void* dma_mode; int bytes_in_use; int nbufs; } ;
struct audio_operations {int enable_bits; int go; int flags; TYPE_1__* d; } ;
struct TYPE_2__ {int (* trigger ) (int,int) ;int (* output_block ) (int,scalar_t__,int,int) ;scalar_t__ (* prepare_for_output ) (int,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 struct audio_operations** VAR_7 ;
 int FUNC_0 (struct audio_operations*,scalar_t__,int ,int ) ;
 int FUNC_1 (int,struct dma_buffparms*,int ) ;
 scalar_t__ FUNC_2 (int,int,int ) ;
 int FUNC_3 (int,scalar_t__,int,int) ;
 int FUNC_4 (int,int) ;

void FUNC_5(int VAR_8, struct dma_buffparms *VAR_9)
{
 struct audio_operations *VAR_10 = VAR_7[VAR_8];

 if (!((VAR_10->enable_bits * VAR_10->go) & VAR_6))
  return;
 VAR_9->dma_mode = VAR_5;

 if (!(VAR_9->flags & VAR_0) || !(VAR_10->flags & VAR_1) || (VAR_9->flags & VAR_3)) {
  if (!(VAR_9->flags & VAR_4)) {
   FUNC_1(VAR_8, VAR_9, 0);
   if (VAR_10->d->prepare_for_output(VAR_8, VAR_9->fragment_size, VAR_9->nbufs))
    return;
   if (!(VAR_9->flags & VAR_3))
    FUNC_0(VAR_10, VAR_9->raw_buf_phys, VAR_9->bytes_in_use,VAR_2);
   VAR_9->flags |= VAR_4;
  }
  if (VAR_9->counts[VAR_9->qhead] == 0)
   VAR_9->counts[VAR_9->qhead] = VAR_9->fragment_size;
  VAR_9->dma_mode = VAR_5;
  VAR_10->d->output_block(VAR_8, VAR_9->raw_buf_phys + VAR_9->qhead * VAR_9->fragment_size,
          VAR_9->counts[VAR_9->qhead], 1);
  if (VAR_10->d->trigger)
   VAR_10->d->trigger(VAR_8,VAR_10->enable_bits * VAR_10->go);
 }
 VAR_9->flags |= VAR_0;
}
