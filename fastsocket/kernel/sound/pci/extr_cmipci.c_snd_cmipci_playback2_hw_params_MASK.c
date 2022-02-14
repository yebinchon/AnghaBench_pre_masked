
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cmipci {int open_mutex; scalar_t__* opened; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_substream*,int ) ;
 struct cmipci* FUNC_5 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_3,
       struct snd_pcm_hw_params *VAR_4)
{
 struct cmipci *VAR_5 = FUNC_5(VAR_3);
 if (FUNC_3(VAR_4) > 2) {
  FUNC_0(&VAR_5->open_mutex);
  if (VAR_5->opened[VAR_0]) {
   FUNC_1(&VAR_5->open_mutex);
   return -VAR_2;
  }

  VAR_5->opened[VAR_0] = VAR_1;
  FUNC_1(&VAR_5->open_mutex);
 }
 return FUNC_4(VAR_3, FUNC_2(VAR_4));
}
