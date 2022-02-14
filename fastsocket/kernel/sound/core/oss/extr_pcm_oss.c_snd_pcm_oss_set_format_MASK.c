
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int runtime; } ;
struct TYPE_2__ {int format; int params; } ;
struct snd_pcm_runtime2 {TYPE_1__ oss; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_pcm_runtime2* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_oss_file*) ;
 int FUNC_2 (struct snd_pcm_oss_file*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_oss_file *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3 != VAR_0) {
  VAR_4 = FUNC_2(VAR_2);
  if (VAR_4 < 0)
   return VAR_4;
  if (!(VAR_4 & VAR_3))
   VAR_3 = VAR_1;
  for (VAR_5 = 1; VAR_5 >= 0; --VAR_5) {
   struct snd_pcm_substream *VAR_6 = VAR_2->streams[VAR_5];
   struct snd_pcm_runtime2 *VAR_7;
   if (VAR_6 == ((void*)0))
    continue;
   VAR_7 = FUNC_0(VAR_6->runtime);
   if (VAR_7->oss.format != VAR_3) {
    VAR_7->oss.params = 1;
    VAR_7->oss.format = VAR_3;
   }
  }
 }
 return FUNC_1(VAR_2);
}
