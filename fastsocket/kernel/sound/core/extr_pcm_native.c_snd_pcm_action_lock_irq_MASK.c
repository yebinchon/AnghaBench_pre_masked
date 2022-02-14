
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct snd_pcm_substream {TYPE_2__ self_group; TYPE_1__* group; } ;
struct action_ops {int dummy; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct action_ops*,struct snd_pcm_substream*,int,int) ;
 int FUNC_3 (struct action_ops*,struct snd_pcm_substream*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct action_ops *VAR_1,
       struct snd_pcm_substream *VAR_2,
       int VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_0);
 if (FUNC_4(VAR_2)) {
  FUNC_5(&VAR_2->group->lock);
  FUNC_5(&VAR_2->self_group.lock);
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3, 1);
  FUNC_6(&VAR_2->self_group.lock);
  FUNC_6(&VAR_2->group->lock);
 } else {
  FUNC_5(&VAR_2->self_group.lock);
  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
  FUNC_6(&VAR_2->self_group.lock);
 }
 FUNC_1(&VAR_0);
 return VAR_4;
}
