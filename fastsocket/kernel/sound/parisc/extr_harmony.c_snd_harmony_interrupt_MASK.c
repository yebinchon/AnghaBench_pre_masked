
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {int graveyard_intr; int rec_intr; int silence_intr; int play_intr; } ;
struct TYPE_11__ {scalar_t__ addr; } ;
struct TYPE_10__ {int buf; scalar_t__ addr; int size; scalar_t__ count; } ;
struct TYPE_9__ {scalar_t__ capturing; scalar_t__ playing; } ;
struct TYPE_8__ {scalar_t__ addr; } ;
struct TYPE_7__ {int buf; scalar_t__ addr; int size; scalar_t__ count; } ;
struct snd_harmony {int lock; TYPE_6__ stats; TYPE_5__ gdma; scalar_t__ csubs; TYPE_4__ cbuf; TYPE_3__ st; TYPE_2__ sdma; scalar_t__ psubs; TYPE_1__ pbuf; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_harmony*) ;
 int FUNC_1 (struct snd_harmony*) ;
 int FUNC_2 (struct snd_harmony*,int ) ;
 int FUNC_3 (struct snd_harmony*) ;
 int FUNC_4 (struct snd_harmony*,int ,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t
FUNC_8(int VAR_6, void *VAR_7)
{
 u32 VAR_8;
 struct snd_harmony *VAR_9 = VAR_7;

 FUNC_6(&VAR_9->lock);
 FUNC_0(VAR_9);
 FUNC_3(VAR_9);
 VAR_8 = FUNC_2(VAR_9, VAR_0);
 FUNC_7(&VAR_9->lock);

 if (VAR_8 & VAR_1) {
  if (VAR_9->psubs && VAR_9->st.playing) {
   FUNC_6(&VAR_9->lock);
   VAR_9->pbuf.buf += VAR_9->pbuf.count;
   VAR_9->pbuf.buf %= VAR_9->pbuf.size;

   FUNC_4(VAR_9, VAR_3,
          VAR_9->pbuf.addr + VAR_9->pbuf.buf);
   VAR_9->stats.play_intr++;
   FUNC_7(&VAR_9->lock);
                        FUNC_5(VAR_9->psubs);
  } else {
   FUNC_6(&VAR_9->lock);
   FUNC_4(VAR_9, VAR_3, VAR_9->sdma.addr);
   VAR_9->stats.silence_intr++;
   FUNC_7(&VAR_9->lock);
  }
 }

 if (VAR_8 & VAR_2) {
  if (VAR_9->csubs && VAR_9->st.capturing) {
   FUNC_6(&VAR_9->lock);
   VAR_9->cbuf.buf += VAR_9->cbuf.count;
   VAR_9->cbuf.buf %= VAR_9->cbuf.size;

   FUNC_4(VAR_9, VAR_4,
          VAR_9->cbuf.addr + VAR_9->cbuf.buf);
   VAR_9->stats.rec_intr++;
   FUNC_7(&VAR_9->lock);
                        FUNC_5(VAR_9->csubs);
  } else {
   FUNC_6(&VAR_9->lock);
   FUNC_4(VAR_9, VAR_4, VAR_9->gdma.addr);
   VAR_9->stats.graveyard_intr++;
   FUNC_7(&VAR_9->lock);
  }
 }

 FUNC_6(&VAR_9->lock);
 FUNC_1(VAR_9);
 FUNC_7(&VAR_9->lock);

 return VAR_5;
}
