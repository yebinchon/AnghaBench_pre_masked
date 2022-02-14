
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int number; int runtime; } ;
struct echoaudio {scalar_t__ digital_mode; int mode_mutex; scalar_t__ can_set_rate; scalar_t__ rate_set; int opencount; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct echoaudio*) ;
 int FUNC_6 (struct snd_pcm_substream*,int) ;
 int FUNC_7 (int ,int ,int ,int ,int *,int ,int) ;
 struct echoaudio* FUNC_8 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_6)
{
 struct echoaudio *VAR_7 = FUNC_8(VAR_6);
 int VAR_8, VAR_9;

 FUNC_0(("pcm_digital_in_open\n"));
 VAR_9 = FUNC_5(VAR_7) - VAR_6->number;
 FUNC_3(&VAR_7->mode_mutex);
 if (VAR_7->digital_mode == VAR_0)
  VAR_8 = FUNC_6(VAR_6, VAR_9);
 else


  VAR_8 = FUNC_6(VAR_6, VAR_9 - VAR_1);

 if (VAR_8 < 0)
  goto din_exit;

 if ((VAR_8 = FUNC_7(VAR_6->runtime, 0,
           VAR_2,
           VAR_4, ((void*)0),
           VAR_3, -1)) < 0)
  goto din_exit;
 if ((VAR_8 = FUNC_7(VAR_6->runtime, 0,
           VAR_3,
           VAR_5, ((void*)0),
           VAR_2, -1)) < 0)
  goto din_exit;

 FUNC_1(&VAR_7->opencount);
 if (FUNC_2(&VAR_7->opencount) > 1 && VAR_7->rate_set)
  VAR_7->can_set_rate=0;

din_exit:
 FUNC_4(&VAR_7->mode_mutex);
 return VAR_8;
}
