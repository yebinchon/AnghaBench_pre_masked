
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_plugin {int buf; struct snd_pcm_plugin* buf_channels; int (* private_free ) (struct snd_pcm_plugin*) ;} ;


 int FUNC_0 (struct snd_pcm_plugin*) ;
 int FUNC_1 (struct snd_pcm_plugin*) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct snd_pcm_plugin *VAR_0)
{
 if (! VAR_0)
  return 0;
 if (VAR_0->private_free)
  VAR_0->private_free(VAR_0);
 FUNC_0(VAR_0->buf_channels);
 FUNC_2(VAR_0->buf);
 FUNC_0(VAR_0);
 return 0;
}
