
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {size_t number; size_t stream; TYPE_1__* runtime; struct loopback* private_data; } ;
struct loopback_pcm {int dummy; } ;
struct loopback_cable {int ** streams; } ;
struct loopback {int cable_lock; struct loopback_cable*** cables; } ;
struct TYPE_2__ {struct loopback_pcm* private_data; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct loopback_cable*) ;
 int FUNC_2 (struct loopback_pcm*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0)
{
 struct loopback *VAR_1 = VAR_0->private_data;
 struct loopback_pcm *VAR_2 = VAR_0->runtime->private_data;
 struct loopback_cable *VAR_3;
 int VAR_4 = FUNC_0(VAR_0);

 FUNC_2(VAR_2);
 FUNC_3(&VAR_1->cable_lock);
 VAR_3 = VAR_1->cables[VAR_0->number][VAR_4];
 if (VAR_3->streams[!VAR_0->stream]) {

  VAR_3->streams[VAR_0->stream] = ((void*)0);
 } else {

  VAR_1->cables[VAR_0->number][VAR_4] = ((void*)0);
  FUNC_1(VAR_3);
 }
 FUNC_4(&VAR_1->cable_lock);
 return 0;
}
