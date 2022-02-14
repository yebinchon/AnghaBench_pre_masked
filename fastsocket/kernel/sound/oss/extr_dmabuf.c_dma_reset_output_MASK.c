
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buffparms {int flags; scalar_t__ underrun_count; int lock; scalar_t__ user_counter; scalar_t__ qtail; scalar_t__ qhead; scalar_t__ qlen; scalar_t__ byte_counter; int dma; } ;
struct audio_operations {int flags; struct dma_buffparms* dmap_out; TYPE_1__* d; int out_sleeper; } ;
struct TYPE_2__ {int (* halt_output ) (int) ;int (* halt_io ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct audio_operations** VAR_4 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dma_buffparms*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (int,struct dma_buffparms*,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(int VAR_6)
{
 struct audio_operations *VAR_7 = VAR_4[VAR_6];
 unsigned long VAR_8,VAR_9 ;
 struct dma_buffparms *VAR_10 = VAR_7->dmap_out;

 if (!(VAR_10->flags & VAR_2))
  return;




 FUNC_8(&VAR_10->lock,VAR_8);
 VAR_7->dmap_out->flags |= VAR_3;

 VAR_7->dmap_out->underrun_count = 0;
 if (!FUNC_7(VAR_5) && VAR_7->dmap_out->qlen &&
     VAR_7->dmap_out->underrun_count == 0){
  FUNC_9(&VAR_10->lock,VAR_8);
  FUNC_4(&VAR_7->out_sleeper,
            FUNC_3(VAR_10));
  FUNC_8(&VAR_10->lock,VAR_8);
 }
 VAR_7->dmap_out->flags &= ~(VAR_3 | VAR_0);




 if (!(VAR_7->flags & VAR_1) || !VAR_7->d->halt_output)
  VAR_7->d->halt_io(VAR_6);
 else
  VAR_7->d->halt_output(VAR_6);
 VAR_7->dmap_out->flags &= ~VAR_2;

 VAR_9=FUNC_0();
 FUNC_1(VAR_10->dma);
 FUNC_2(VAR_10->dma);
 FUNC_5(VAR_9);

 VAR_10->byte_counter = 0;
 FUNC_6(VAR_6, VAR_7->dmap_out, 0);
 VAR_10->qlen = VAR_10->qhead = VAR_10->qtail = VAR_10->user_counter = 0;
 FUNC_9(&VAR_10->lock,VAR_8);
}
