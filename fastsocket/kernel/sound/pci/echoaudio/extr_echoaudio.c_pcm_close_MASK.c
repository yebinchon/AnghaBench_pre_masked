
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct echoaudio {int can_set_rate; scalar_t__ rate_set; int opencount; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct echoaudio* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct echoaudio *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;




 FUNC_0(("pcm_close\n"));

 FUNC_1(&VAR_1->opencount);
 VAR_2 = FUNC_2(&VAR_1->opencount);
 FUNC_0(("pcm_close  oc=%d  cs=%d  rs=%d\n", VAR_2,
  VAR_1->can_set_rate, VAR_1->rate_set));
 if (VAR_2 < 2)
  VAR_1->can_set_rate = 1;
 if (VAR_2 == 0)
  VAR_1->rate_set = 0;
 FUNC_0(("pcm_close2 oc=%d  cs=%d  rs=%d\n", VAR_2,
  VAR_1->can_set_rate,VAR_1->rate_set));

 return 0;
}
