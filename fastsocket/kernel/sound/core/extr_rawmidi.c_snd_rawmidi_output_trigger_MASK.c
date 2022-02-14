
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_rawmidi_substream {TYPE_2__* ops; TYPE_1__* runtime; int opened; } ;
struct TYPE_4__ {int (* trigger ) (struct snd_rawmidi_substream*,int ) ;} ;
struct TYPE_3__ {int tasklet; } ;


 int FUNC_0 (struct snd_rawmidi_substream*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct snd_rawmidi_substream *VAR_0,int VAR_1)
{
 if (!VAR_0->opened)
  return;
 if (VAR_1) {
  FUNC_2(&VAR_0->runtime->tasklet);
 } else {
  FUNC_1(&VAR_0->runtime->tasklet);
  VAR_0->ops->trigger(VAR_0, 0);
 }
}
