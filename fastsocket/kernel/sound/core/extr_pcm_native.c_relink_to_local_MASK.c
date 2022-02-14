
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int substreams; } ;
struct snd_pcm_substream {TYPE_1__ self_group; int link_list; TYPE_1__* group; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_0)
{
 VAR_0->group = &VAR_0->self_group;
 FUNC_0(&VAR_0->self_group.substreams);
 FUNC_1(&VAR_0->link_list, &VAR_0->self_group.substreams);
}
