
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int runtime; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;
struct TYPE_3__ {scalar_t__ params; } ;
struct TYPE_4__ {TYPE_1__ oss; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_oss_file *VAR_1, struct snd_pcm_substream **VAR_2)
{
 int VAR_3, VAR_4;
 struct snd_pcm_substream *VAR_5 = ((void*)0), *VAR_6;

 for (VAR_3 = 0; VAR_3 < 2; VAR_3++) {
  VAR_6 = VAR_1->streams[VAR_3];
  if (VAR_6 == ((void*)0))
   continue;
  if (VAR_5 == ((void*)0))
   VAR_5 = VAR_6;
  if (FUNC_0(VAR_6->runtime)->oss.params) {
   VAR_4 = FUNC_1(VAR_6);
   if (VAR_4 < 0)
    return VAR_4;
  }
 }
 if (!VAR_5)
  return -VAR_0;
 if (VAR_2)
  *VAR_2 = VAR_5;
 return 0;
}
