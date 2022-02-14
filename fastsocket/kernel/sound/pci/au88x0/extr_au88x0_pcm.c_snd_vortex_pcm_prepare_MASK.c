
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int lock; } ;
typedef TYPE_1__ vortex_t ;
struct snd_pcm_substream {scalar_t__ stream; int pcm; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; int format; scalar_t__ private_data; } ;
struct TYPE_10__ {int dma; } ;
typedef TYPE_2__ stream_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int,int ,int) ;
 int FUNC_5 (TYPE_1__*,int,int,int,int,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int,int,int,int ,int ) ;
 int FUNC_9 (TYPE_1__*,int,int ) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_3)
{
 vortex_t *VAR_4 = FUNC_1(VAR_3);
 struct snd_pcm_runtime *VAR_5 = VAR_3->runtime;
 stream_t *VAR_6 = (stream_t *) VAR_3->runtime->private_data;
 int VAR_7 = VAR_6->dma, VAR_8, VAR_9;


 if (VAR_3->stream == VAR_0)
  VAR_9 = 1;
 else
  VAR_9 = 0;
 VAR_8 = FUNC_7(VAR_5->format);
 FUNC_2(&VAR_4->lock);
 if (FUNC_0(VAR_3->pcm) != VAR_2) {
  FUNC_5(VAR_4, VAR_7, 1, VAR_9, VAR_8, 0 ,
          0);
  FUNC_6(VAR_4, VAR_7, 0);
  if (FUNC_0(VAR_3->pcm) != VAR_1)
   FUNC_4(VAR_4, VAR_7, VAR_5->rate, VAR_9);
 }

 else {
  FUNC_8(VAR_4, VAR_7, 1, VAR_8, 0, 0);

  FUNC_9(VAR_4, VAR_7, 0);
 }

 FUNC_3(&VAR_4->lock);
 return 0;
}
