
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; int runtime; struct aaci* private_data; } ;
struct aaci {int capture; int playback; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct aaci*,struct snd_pcm_substream*,int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ,struct aaci*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3)
{
 struct aaci *VAR_4 = VAR_3->private_data;
 int VAR_5;




 VAR_5 = FUNC_1(VAR_3->runtime, 0,
      VAR_0,
      VAR_2, VAR_4,
      VAR_0, -1);
 if (VAR_5)
  return VAR_5;

 if (VAR_3->stream == VAR_1) {
  VAR_5 = FUNC_0(VAR_4, VAR_3, &VAR_4->playback);
 } else {
  VAR_5 = FUNC_0(VAR_4, VAR_3, &VAR_4->capture);
 }
 return VAR_5;
}
