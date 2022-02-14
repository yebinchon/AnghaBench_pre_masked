
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buffparms {scalar_t__ dma_mode; scalar_t__ qlen; int flags; scalar_t__ underrun_count; int lock; int nbufs; } ;
struct audio_operations {int enable_bits; struct dma_buffparms* dmap_out; int out_sleeper; TYPE_1__* d; int go; } ;
struct TYPE_2__ {scalar_t__ (* local_qlen ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct dma_buffparms*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct audio_operations** VAR_5 ;
 int VAR_6 ;
 long FUNC_1 (struct dma_buffparms*) ;
 long FUNC_2 (int *,long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(int VAR_7)
{
 struct audio_operations *VAR_8 = VAR_5[VAR_7];
 unsigned long VAR_9;
 int VAR_10 = 0;
 struct dma_buffparms *VAR_11;

 if (!VAR_8->go && !(VAR_8->enable_bits & VAR_4))
  return 0;

 if (VAR_8->dmap_out->dma_mode == VAR_3) {
  VAR_11 = VAR_8->dmap_out;
  FUNC_4(&VAR_11->lock,VAR_9);
  if (VAR_11->qlen > 0 && !(VAR_11->flags & VAR_0))
   FUNC_0(VAR_7, VAR_11);
  VAR_8->dmap_out->flags |= VAR_1;
  VAR_8->dmap_out->underrun_count = 0;
  while (!FUNC_3(VAR_6) && VAR_10++ < VAR_8->dmap_out->nbufs &&
         VAR_8->dmap_out->qlen && VAR_8->dmap_out->underrun_count == 0) {
   long VAR_12 = FUNC_1(VAR_11);
   FUNC_5(&VAR_11->lock,VAR_9);

   VAR_12 = FUNC_2(&VAR_8->out_sleeper, VAR_12);
   FUNC_4(&VAR_11->lock,VAR_9);
   if (!VAR_12) {
    VAR_8->dmap_out->flags &= ~VAR_1;
    FUNC_5(&VAR_11->lock,VAR_9);
    return VAR_8->dmap_out->qlen;
   }
  }
  VAR_8->dmap_out->flags &= ~(VAR_1 | VAR_0);







  if (VAR_8->d->local_qlen) {
   while (!FUNC_3(VAR_6) &&
          VAR_8->d->local_qlen(VAR_7)){
    FUNC_5(&VAR_11->lock,VAR_9);
    FUNC_2(&VAR_8->out_sleeper,
              FUNC_1(VAR_11));
    FUNC_4(&VAR_11->lock,VAR_9);
   }
  }
  FUNC_5(&VAR_11->lock,VAR_9);
 }
 VAR_8->dmap_out->dma_mode = VAR_2;
 return VAR_8->dmap_out->qlen;
}
