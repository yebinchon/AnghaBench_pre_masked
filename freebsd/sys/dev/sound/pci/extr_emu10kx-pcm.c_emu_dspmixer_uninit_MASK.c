
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct emu_pcm_info {int * sm; } ;


 struct emu_pcm_info* FUNC_0 (struct snd_mixer*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct snd_mixer *VAR_0)
{
 struct emu_pcm_info *VAR_1;
 int VAR_2 = 0;


 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->sm != ((void*)0))
  VAR_2 = FUNC_1(VAR_1->sm);
  if (VAR_2)
   return (VAR_2);
  VAR_1->sm = ((void*)0);
 return (0);
}
