
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_3__* runtime; TYPE_2__* private_data; TYPE_1__* pcm; } ;
struct snd_au1000 {TYPE_2__** stream; } ;
struct TYPE_6__ {int hw; } ;
struct TYPE_5__ {int * buffer; struct snd_pcm_substream* substream; } ;
struct TYPE_4__ {struct snd_au1000* private_data; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ,int ,int *) ;

__attribute__((used)) static int
FUNC_1(struct snd_pcm_substream *VAR_4)
{
 struct snd_au1000 *VAR_5 = VAR_4->pcm->private_data;

 VAR_5->stream[VAR_0]->substream = VAR_4;
 VAR_5->stream[VAR_0]->buffer = ((void*)0);
 VAR_4->private_data = VAR_5->stream[VAR_0];
 VAR_4->runtime->hw = VAR_3;
 return (FUNC_0(VAR_4->runtime, 0,
  VAR_1, &VAR_2) < 0);
}
