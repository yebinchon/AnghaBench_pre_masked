
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_4__ {struct snd_pcm_substream* stream; } ;
struct TYPE_3__ {struct snd_pcm_substream* stream; } ;
struct lx6464es {int setup_mutex; TYPE_2__ playback_stream; TYPE_1__ capture_stream; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_substream*,int ) ;
 struct lx6464es* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_0,
       struct snd_pcm_hw_params *VAR_1, int VAR_2)
{
 struct lx6464es *VAR_3 = FUNC_4(VAR_0);
 int VAR_4 = 0;

 FUNC_5("->lx_pcm_hw_params\n");

 FUNC_0(&VAR_3->setup_mutex);


 VAR_4 = FUNC_3(VAR_0,
           FUNC_2(VAR_1));

 if (VAR_2)
  VAR_3->capture_stream.stream = VAR_0;
 else
  VAR_3->playback_stream.stream = VAR_0;

 FUNC_1(&VAR_3->setup_mutex);
 return VAR_4;
}
