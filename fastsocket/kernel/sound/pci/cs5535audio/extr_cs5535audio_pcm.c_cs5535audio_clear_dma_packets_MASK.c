
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int * area; } ;
struct cs5535audio_dma {int * substream; TYPE_1__ desc_buf; } ;
struct cs5535audio {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct cs5535audio *VAR_0,
       struct cs5535audio_dma *VAR_1,
       struct snd_pcm_substream *VAR_2)
{
 FUNC_0(&VAR_1->desc_buf);
 VAR_1->desc_buf.area = ((void*)0);
 VAR_1->substream = ((void*)0);
}
