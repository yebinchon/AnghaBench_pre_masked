
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct action_ops {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct action_ops*,struct snd_pcm_substream*,int,int ) ;
 int FUNC_2 (struct action_ops*,struct snd_pcm_substream*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct action_ops *VAR_1,
        struct snd_pcm_substream *VAR_2,
        int VAR_3)
{
 int VAR_4;

 FUNC_0(&VAR_0);
 if (FUNC_3(VAR_2))
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3, 0);
 else
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 FUNC_4(&VAR_0);
 return VAR_4;
}
