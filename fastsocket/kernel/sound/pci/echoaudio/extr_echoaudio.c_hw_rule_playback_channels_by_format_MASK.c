
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct snd_pcm_hw_rule {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {int* bits; } ;
struct snd_interval {int integer; int min; int max; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct snd_interval* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 struct snd_mask* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (struct snd_interval*) ;
 int FUNC_3 (struct snd_interval*,struct snd_interval*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_hw_params *VAR_6,
            struct snd_pcm_hw_rule *VAR_7)
{
 struct snd_interval *VAR_8 = FUNC_0(VAR_6,
         VAR_4);
 struct snd_mask *VAR_9 = FUNC_1(VAR_6, VAR_5);
 struct snd_interval VAR_10;
 u64 VAR_11;

 FUNC_2(&VAR_10);
 VAR_10.integer = 1;
 VAR_11 = VAR_9->bits[0] + ((u64)VAR_9->bits[1] << 32);


 if (VAR_11 == VAR_2) {
  VAR_10.min = 1;



  VAR_10.max = 1;


 } else if (VAR_11 == VAR_3)
  VAR_10.min = VAR_10.max = 2;

 else if (!(VAR_11 & ~(VAR_0 |
          VAR_1)))
  VAR_10.min = 2;
 else
  return 0;

 return FUNC_3(VAR_8, &VAR_10);
}
