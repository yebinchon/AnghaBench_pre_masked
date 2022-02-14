
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int runtime; } ;
struct TYPE_2__ {int rate; int params; } ;
struct snd_pcm_runtime2 {TYPE_1__ oss; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;


 struct snd_pcm_runtime2* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_oss_file*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_oss_file *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 >= 0; --VAR_2) {
  struct snd_pcm_substream *VAR_3 = VAR_0->streams[VAR_2];
  struct snd_pcm_runtime2 *VAR_4;
  if (VAR_3 == ((void*)0))
   continue;
  VAR_4 = FUNC_0(VAR_3->runtime);
  if (VAR_1 < 1000)
   VAR_1 = 1000;
  else if (VAR_1 > 192000)
   VAR_1 = 192000;
  if (VAR_4->oss.rate != VAR_1) {
   VAR_4->oss.params = 1;
   VAR_4->oss.rate = VAR_1;
  }
 }
 return FUNC_1(VAR_0);
}
