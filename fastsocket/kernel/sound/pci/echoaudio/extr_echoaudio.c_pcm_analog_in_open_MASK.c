
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int runtime; scalar_t__ number; } ;
struct echoaudio {int sample_rate; int opencount; scalar_t__ can_set_rate; scalar_t__ rate_set; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (struct echoaudio*) ;
 int FUNC_5 (struct snd_pcm_substream*,scalar_t__) ;
 int FUNC_6 (int ,int ,int ,int ,int *,int ,int) ;
 struct echoaudio* FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_4)
{
 struct echoaudio *VAR_5 = FUNC_7(VAR_4);
 int VAR_6;

 FUNC_0(("pcm_analog_in_open\n"));
 if ((VAR_6 = FUNC_5(VAR_4, FUNC_4(VAR_5) -
       VAR_4->number)) < 0)
  return VAR_6;
 if ((VAR_6 = FUNC_6(VAR_4->runtime, 0,
           VAR_0,
           VAR_2, ((void*)0),
           VAR_1, -1)) < 0)
  return VAR_6;
 if ((VAR_6 = FUNC_6(VAR_4->runtime, 0,
           VAR_1,
           VAR_3, ((void*)0),
           VAR_0, -1)) < 0)
  return VAR_6;
 FUNC_2(&VAR_5->opencount);
 if (FUNC_3(&VAR_5->opencount) > 1 && VAR_5->rate_set)
  VAR_5->can_set_rate=0;
 FUNC_1(("pcm_analog_in_open  cs=%d  oc=%d  r=%d\n",
  VAR_5->can_set_rate, FUNC_3(&VAR_5->opencount),
  VAR_5->sample_rate));
 return 0;
}
