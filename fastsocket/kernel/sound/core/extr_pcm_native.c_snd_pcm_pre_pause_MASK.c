
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int info; struct snd_pcm_substream* trigger_master; TYPE_1__* status; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct snd_pcm_substream *VAR_5, int VAR_6)
{
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 if (!(VAR_7->info & VAR_2))
  return -VAR_1;
 if (VAR_6) {
  if (VAR_7->status->state != VAR_4)
   return -VAR_0;
 } else if (VAR_7->status->state != VAR_3)
  return -VAR_0;
 VAR_7->trigger_master = VAR_5;
 return 0;
}
