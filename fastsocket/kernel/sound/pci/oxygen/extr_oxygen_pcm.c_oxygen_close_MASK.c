
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct oxygen {int pcm_active; int ** streams; int mutex; TYPE_2__** controls; int card; } ;
struct TYPE_4__ {int id; TYPE_1__* vd; } ;
struct TYPE_3__ {int access; } ;


 size_t VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct oxygen*) ;
 int FUNC_4 (int ,int,int *) ;
 struct oxygen* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_6)
{
 struct oxygen *VAR_7 = FUNC_5(VAR_6);
 unsigned int VAR_8 = FUNC_2(VAR_6);

 FUNC_0(&VAR_7->mutex);
 VAR_7->pcm_active &= ~(1 << VAR_8);
 if (VAR_8 == VAR_2) {
  VAR_7->controls[VAR_0]->vd[0].access |=
   VAR_3;
  FUNC_4(VAR_7->card, VAR_5 |
          VAR_4,
          &VAR_7->controls[VAR_0]->id);
 }
 if (VAR_8 == VAR_2 || VAR_8 == VAR_1)
  FUNC_3(VAR_7);
 FUNC_1(&VAR_7->mutex);

 VAR_7->streams[VAR_8] = ((void*)0);
 return 0;
}
