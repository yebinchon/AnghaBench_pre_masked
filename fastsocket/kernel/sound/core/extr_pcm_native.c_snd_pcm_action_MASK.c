
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct snd_pcm_substream {TYPE_1__* group; TYPE_2__ self_group; } ;
struct action_ops {int dummy; } ;
struct TYPE_3__ {int lock; } ;


 int FUNC_0 (struct action_ops*,struct snd_pcm_substream*,int,int) ;
 int FUNC_1 (struct action_ops*,struct snd_pcm_substream*,int) ;
 scalar_t__ FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct action_ops *VAR_0,
     struct snd_pcm_substream *VAR_1,
     int VAR_2)
{
 int VAR_3;

 if (FUNC_2(VAR_1)) {
  if (!FUNC_4(&VAR_1->group->lock)) {
   FUNC_5(&VAR_1->self_group.lock);
   FUNC_3(&VAR_1->group->lock);
   FUNC_3(&VAR_1->self_group.lock);
  }
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, 1);
  FUNC_5(&VAR_1->group->lock);
 } else {
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 }
 return VAR_3;
}
