
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int reg_lock; } ;
struct snd_pcm_substream {int runtime; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 unsigned int FUNC_1 (struct snd_sb*,int ) ;
 struct snd_sb* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_5(struct snd_pcm_substream *VAR_1)
{
 struct snd_sb *VAR_2 = FUNC_2(VAR_1);
 unsigned int VAR_3;

 FUNC_3(&VAR_2->reg_lock);
 VAR_3 = FUNC_1(VAR_2, VAR_0);
 FUNC_4(&VAR_2->reg_lock);
 VAR_3 &= 0xffff;
 return FUNC_0( VAR_1->runtime, VAR_3 );
}
