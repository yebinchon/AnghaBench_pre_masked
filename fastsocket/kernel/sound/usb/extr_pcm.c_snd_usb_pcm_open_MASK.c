
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_substream {int interface; struct snd_pcm_substream* pcm_substream; scalar_t__ altset_idx; } ;
struct snd_usb_stream {struct snd_usb_substream* substream; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_usb_substream* private_data; int hw; } ;


 int FUNC_0 (struct snd_pcm_runtime*,struct snd_usb_substream*) ;
 struct snd_usb_stream* FUNC_1 (struct snd_pcm_substream*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_usb_stream *VAR_3 = FUNC_1(VAR_1);
 struct snd_pcm_runtime *VAR_4 = VAR_1->runtime;
 struct snd_usb_substream *VAR_5 = &VAR_3->substream[VAR_2];

 VAR_5->interface = -1;
 VAR_5->altset_idx = 0;
 VAR_4->hw = VAR_0;
 VAR_4->private_data = VAR_5;
 VAR_5->pcm_substream = VAR_1;

 return FUNC_0(VAR_4, VAR_5);
}
