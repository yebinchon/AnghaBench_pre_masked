
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcxhr {struct pcxhr_mgr* mgr; } ;
struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct pcxhr_stream {int channels; int format; } ;
struct pcxhr_mgr {int setup_mutex; } ;
typedef int snd_pcm_format_t ;
struct TYPE_2__ {struct pcxhr_stream* private_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_substream*,int ) ;
 struct snd_pcxhr* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_0,
      struct snd_pcm_hw_params *VAR_1)
{
 struct snd_pcxhr *VAR_2 = FUNC_6(VAR_0);
 struct pcxhr_mgr *VAR_3 = VAR_2->mgr;
 struct pcxhr_stream *VAR_4 = VAR_0->runtime->private_data;
 snd_pcm_format_t VAR_5;
 int VAR_6;
 int VAR_7;


 VAR_7 = FUNC_3(VAR_1);


 VAR_5 = FUNC_4(VAR_1);

 FUNC_0(&VAR_3->setup_mutex);

 VAR_4->channels = VAR_7;
 VAR_4->format = VAR_5;


 VAR_6 = FUNC_5(VAR_0, FUNC_2(VAR_1));

 FUNC_1(&VAR_3->setup_mutex);

 return VAR_6;
}
