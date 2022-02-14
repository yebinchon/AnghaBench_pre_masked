
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buffparms {int lock; scalar_t__ byte_counter; scalar_t__ user_counter; scalar_t__ qtail; scalar_t__ qhead; scalar_t__ qlen; int flags; } ;
struct audio_operations {int flags; struct dma_buffparms* dmap_in; TYPE_1__* d; } ;
struct TYPE_2__ {int (* halt_input ) (int) ;int (* halt_io ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct audio_operations** VAR_2 ;
 int FUNC_0 (int,struct dma_buffparms*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(int VAR_3)
{
        struct audio_operations *VAR_4 = VAR_2[VAR_3];
 unsigned long VAR_5;
 struct dma_buffparms *VAR_6 = VAR_4->dmap_in;

 FUNC_1(&VAR_6->lock,VAR_5);
 if (!(VAR_4->flags & VAR_0) || !VAR_4->d->halt_input)
  VAR_4->d->halt_io(VAR_3);
 else
  VAR_4->d->halt_input(VAR_3);
 VAR_4->dmap_in->flags &= ~VAR_1;

 VAR_6->qlen = VAR_6->qhead = VAR_6->qtail = VAR_6->user_counter = 0;
 VAR_6->byte_counter = 0;
 FUNC_0(VAR_3, VAR_4->dmap_in, 1);
 FUNC_2(&VAR_6->lock,VAR_5);
}
