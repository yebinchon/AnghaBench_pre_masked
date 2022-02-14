
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buffparms {int closing; int mapping_flags; scalar_t__ dma_mode; int lock; int bytes_in_use; int neutral_byte; int raw_buf; } ;
struct audio_operations {int open_mode; int flags; struct dma_buffparms* dmap_in; struct dma_buffparms* dmap_out; TYPE_1__* d; } ;
struct TYPE_2__ {int (* close ) (int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct audio_operations** VAR_5 ;
 int FUNC_2 (struct audio_operations*,struct dma_buffparms*) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int) ;

int FUNC_8(int VAR_7, int VAR_8)
{
 struct audio_operations *VAR_9 = VAR_5[VAR_7];
 struct dma_buffparms *VAR_10;
 unsigned long VAR_11;

 VAR_10 = VAR_9->dmap_out;
 if (VAR_9->open_mode & VAR_4)
  VAR_9->dmap_out->closing = 1;

 if (VAR_9->open_mode & VAR_3){
  VAR_9->dmap_in->closing = 1;
  VAR_10 = VAR_9->dmap_in;
 }
 if (VAR_9->open_mode & VAR_4)
  if (!(VAR_9->dmap_out->mapping_flags & VAR_1))
   if (!FUNC_4(VAR_6) && (VAR_9->dmap_out->dma_mode == VAR_2))
    FUNC_1(VAR_7);
 if (VAR_9->dmap_out->dma_mode == VAR_2)
  FUNC_3(VAR_9->dmap_out->raw_buf, VAR_9->dmap_out->neutral_byte, VAR_9->dmap_out->bytes_in_use);

 FUNC_0(VAR_7);
 FUNC_5(&VAR_10->lock,VAR_11);
 VAR_9->d->close(VAR_7);

 if (VAR_9->open_mode & VAR_4)
  FUNC_2(VAR_9, VAR_9->dmap_out);

 if (VAR_9->open_mode == VAR_3 ||
     (VAR_9->open_mode != VAR_4 &&
      (VAR_9->flags & VAR_0)))
  FUNC_2(VAR_9, VAR_9->dmap_in);
 VAR_9->open_mode = 0;
 FUNC_6(&VAR_10->lock,VAR_11);
 return 0;
}
