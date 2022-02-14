
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned long long format; int channels; int rate; struct loopback_pcm* private_data; } ;
struct loopback_pcm {struct loopback_cable* cable; } ;
struct TYPE_2__ {unsigned long long formats; int channels_max; int channels_min; int rate_max; int rate_min; } ;
struct loopback_cable {int * streams; TYPE_1__ hw; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,struct snd_pcm_runtime*) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_2->runtime;
 struct loopback_pcm *VAR_4 = VAR_3->private_data;
 struct loopback_cable *VAR_5 = VAR_4->cable;

 VAR_5->hw.formats = (1ULL << VAR_3->format);
 VAR_5->hw.rate_min = VAR_3->rate;
 VAR_5->hw.rate_max = VAR_3->rate;
 VAR_5->hw.channels_min = VAR_3->channels;
 VAR_5->hw.channels_max = VAR_3->channels;
 FUNC_0(VAR_5->streams[VAR_1],
    VAR_3);
 FUNC_0(VAR_5->streams[VAR_0],
    VAR_3);
}
