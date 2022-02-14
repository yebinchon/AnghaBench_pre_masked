
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_indirect2 {scalar_t__ hw_ready; } ;
struct snd_ml403_ac97cr {int reg_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_ml403_ac97cr*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 struct snd_ml403_ac97cr* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static size_t
FUNC_6(struct snd_pcm_substream *VAR_3,
       struct snd_pcm_indirect2 *VAR_4)
{
 struct snd_ml403_ac97cr *VAR_5;
 int VAR_6 = 0;
 u32 VAR_7 = 0;

 VAR_5 = FUNC_3(VAR_3);

 FUNC_4(&VAR_5->reg_lock);
 while ((VAR_7 = (FUNC_2(FUNC_1(VAR_5, VAR_2)) &
    VAR_0)) != VAR_0) {
  volatile u32 VAR_8;

  VAR_8 = FUNC_0(FUNC_2(FUNC_1(VAR_5, VAR_1)));



  VAR_8++;
  VAR_6++;
 }
 VAR_4->hw_ready = 0;
 FUNC_5(&VAR_5->reg_lock);

 return (size_t) (VAR_6 * 2);
}
