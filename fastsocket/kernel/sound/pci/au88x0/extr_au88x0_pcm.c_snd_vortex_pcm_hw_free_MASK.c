
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int lock; } ;
typedef TYPE_2__ vortex_t ;
struct snd_pcm_substream {TYPE_1__* runtime; int pcm; } ;
struct TYPE_9__ {int dma; int type; int dir; int nr_ch; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_7__ {int * private_data; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 TYPE_2__* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_1)
{
 vortex_t *VAR_2 = FUNC_2(VAR_1);
 stream_t *VAR_3 = (stream_t *) (VAR_1->runtime->private_data);

 FUNC_3(&VAR_2->lock);

 if (FUNC_0(VAR_1->pcm) != VAR_0) {
  if (VAR_3 != ((void*)0))
   FUNC_5(VAR_2, VAR_3->dma,
           VAR_3->nr_ch, VAR_3->dir,
           VAR_3->type);
 }

 else {
  if (VAR_3 != ((void*)0))
   FUNC_6(VAR_2, VAR_3->dma, 0);
 }

 VAR_1->runtime->private_data = ((void*)0);
 FUNC_4(&VAR_2->lock);

 return FUNC_1(VAR_1);
}
