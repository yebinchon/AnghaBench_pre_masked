
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct oxygen {int reg_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct oxygen*,int ,int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 struct oxygen* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2)
{
 struct oxygen *VAR_3 = FUNC_2(VAR_2);

 FUNC_3(&VAR_3->reg_lock);
 FUNC_0(VAR_3, VAR_0,
       VAR_1);
 FUNC_4(&VAR_3->reg_lock);
 return FUNC_1(VAR_2);
}
