
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; int function; } ;
struct snd_emux {int client; scalar_t__ timer_active; TYPE_1__ tlist; scalar_t__ use_time; scalar_t__ max_voices; int * oss_synth; int register_mutex; int voice_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 struct snd_emux* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

int FUNC_4(struct snd_emux **VAR_3)
{
 struct snd_emux *VAR_4;

 *VAR_3 = ((void*)0);
 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 FUNC_3(&VAR_4->voice_lock);
 FUNC_2(&VAR_4->register_mutex);

 VAR_4->client = -1;



 VAR_4->max_voices = 0;
 VAR_4->use_time = 0;

 FUNC_0(&VAR_4->tlist);
 VAR_4->tlist.function = VAR_2;
 VAR_4->tlist.data = (unsigned long)VAR_4;
 VAR_4->timer_active = 0;

 *VAR_3 = VAR_4;
 return 0;
}
