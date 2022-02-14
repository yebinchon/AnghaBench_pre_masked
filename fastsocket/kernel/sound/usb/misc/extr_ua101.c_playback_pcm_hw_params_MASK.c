
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ua101 {int mutex; } ;
struct snd_pcm_substream {struct ua101* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_substream*,int ) ;
 int FUNC_4 (struct ua101*) ;
 int FUNC_5 (struct ua101*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_0,
      struct snd_pcm_hw_params *VAR_1)
{
 struct ua101 *VAR_2 = VAR_0->private_data;
 int VAR_3;

 FUNC_0(&VAR_2->mutex);
 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3 >= 0)
  VAR_3 = FUNC_5(VAR_2);
 FUNC_1(&VAR_2->mutex);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_3(VAR_0,
      FUNC_2(VAR_1));
}
