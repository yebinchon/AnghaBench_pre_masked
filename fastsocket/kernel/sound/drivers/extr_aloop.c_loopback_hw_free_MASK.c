
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct loopback_pcm* private_data; } ;
struct loopback_pcm {TYPE_1__* loopback; struct loopback_cable* cable; } ;
struct loopback_cable {int valid; } ;
struct TYPE_2__ {int cable_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct loopback_pcm *VAR_2 = VAR_1->private_data;
 struct loopback_cable *VAR_3 = VAR_2->cable;

 FUNC_0(&VAR_2->loopback->cable_lock);
 VAR_3->valid &= ~(1 << VAR_0->stream);
 FUNC_1(&VAR_2->loopback->cable_lock);
 return FUNC_2(VAR_0);
}
