
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_buffparms {scalar_t__ dma_mode; int bytes_in_use; int neutral_byte; int raw_buf; } ;
struct audio_operations {int flags; int enable_bits; int open_mode; int go; struct dma_buffparms* dmap_out; TYPE_1__* d; struct dma_buffparms* dmap_in; } ;
struct TYPE_2__ {int (* open ) (int,int) ;int (* set_speed ) (int,int ) ;int (* set_channels ) (int,int) ;int (* set_bits ) (int,int) ;int (* close ) (int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct audio_operations** VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct audio_operations*,struct dma_buffparms*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct audio_operations*,int,struct dma_buffparms*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int ) ;

int FUNC_10(int VAR_7, int VAR_8)
{
 struct audio_operations *VAR_9 = VAR_6[VAR_7];
 int VAR_10;
 struct dma_buffparms *VAR_11 = ((void*)0);
 struct dma_buffparms *VAR_12 = ((void*)0);

 if (!VAR_9)
    return -VAR_3;
 if (!(VAR_9->flags & VAR_0))
  VAR_9->dmap_in = VAR_9->dmap_out;
 FUNC_0(VAR_9->d);

 if ((VAR_10 = VAR_9->d->open(VAR_7, VAR_8)) < 0)
  return VAR_10;
 VAR_12 = VAR_9->dmap_out;
 VAR_11 = VAR_9->dmap_in;
 if (VAR_11 == VAR_12)
  VAR_9->flags &= ~VAR_0;

 if (VAR_8 & VAR_5) {
  if ((VAR_10 = FUNC_3(VAR_9, VAR_8, VAR_12)) < 0) {
   VAR_9->d->close(VAR_7);
   return VAR_10;
  }
 }
 VAR_9->enable_bits = VAR_8;

 if (VAR_8 == VAR_4 || (VAR_8 != VAR_5 && (VAR_9->flags & VAR_0))) {
  if ((VAR_10 = FUNC_3(VAR_9, VAR_8, VAR_11)) < 0) {
   VAR_9->d->close(VAR_7);
   if (VAR_8 & VAR_5)
    FUNC_1(VAR_9, VAR_12);
   return VAR_10;
  }
 }
 VAR_9->open_mode = VAR_8;
 VAR_9->go = 1;

 VAR_9->d->set_bits(VAR_7, 8);
 VAR_9->d->set_channels(VAR_7, 1);
 VAR_9->d->set_speed(VAR_7, VAR_2);
 if (VAR_9->dmap_out->dma_mode == VAR_1)
  FUNC_2(VAR_9->dmap_out->raw_buf, VAR_9->dmap_out->neutral_byte,
         VAR_9->dmap_out->bytes_in_use);
 return 0;
}
