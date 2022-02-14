
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int runtime; } ;
struct TYPE_2__ {int prepare; scalar_t__ period_ptr; scalar_t__ prev_hw_ptr_period; scalar_t__ buffer_used; } ;
struct snd_pcm_runtime2 {TYPE_1__ oss; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;


 int VAR_0 ;
 struct snd_pcm_runtime2* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_substream*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_oss_file *VAR_1)
{
 struct snd_pcm_substream *VAR_2;
 struct snd_pcm_runtime2 *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  VAR_2 = VAR_1->streams[VAR_4];
  if (!VAR_2)
   continue;
  VAR_3 = FUNC_0(VAR_2->runtime);
  FUNC_1(VAR_2, VAR_0, ((void*)0));
  VAR_3->oss.prepare = 1;
  VAR_3->oss.buffer_used = 0;
  VAR_3->oss.prev_hw_ptr_period = 0;
  VAR_3->oss.period_ptr = 0;
 }
 return 0;
}
