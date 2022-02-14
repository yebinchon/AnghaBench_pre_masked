
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct action_ops {int (* pre_action ) (struct snd_pcm_substream*,int) ;int (* do_action ) (struct snd_pcm_substream*,int) ;int (* undo_action ) (struct snd_pcm_substream*,int) ;int (* post_action ) (struct snd_pcm_substream*,int) ;} ;


 int FUNC_0 (struct snd_pcm_substream*,int) ;
 int FUNC_1 (struct snd_pcm_substream*,int) ;
 int FUNC_2 (struct snd_pcm_substream*,int) ;
 int FUNC_3 (struct snd_pcm_substream*,int) ;

__attribute__((used)) static int FUNC_4(struct action_ops *VAR_0,
     struct snd_pcm_substream *VAR_1,
     int VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_0->pre_action(VAR_1, VAR_2);
 if (VAR_3 < 0)
  return VAR_3;
 VAR_3 = VAR_0->do_action(VAR_1, VAR_2);
 if (VAR_3 == 0)
  VAR_0->post_action(VAR_1, VAR_2);
 else if (VAR_0->undo_action)
  VAR_0->undo_action(VAR_1, VAR_2);
 return VAR_3;
}
