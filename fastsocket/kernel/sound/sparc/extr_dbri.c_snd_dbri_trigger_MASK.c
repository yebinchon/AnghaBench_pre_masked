
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_dbri {int dummy; } ;
struct dbri_streaminfo {int pipe; } ;


 struct dbri_streaminfo* FUNC_0 (struct snd_dbri*,struct snd_pcm_substream*) ;
 int VAR_0 ;
 int VAR_1 ;


 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct snd_dbri*,int ) ;
 scalar_t__ FUNC_3 (struct snd_pcm_substream*) ;
 struct snd_dbri* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (struct snd_dbri*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 struct snd_dbri *VAR_4 = FUNC_4(VAR_2);
 struct dbri_streaminfo *VAR_5 = FUNC_0(VAR_4, VAR_2);
 int VAR_6 = 0;

 switch (VAR_3) {
 case 129:
  FUNC_1(VAR_0, "start audio, period is %d bytes\n",
   (int)FUNC_3(VAR_2));

  FUNC_5(VAR_4);
  break;
 case 128:
  FUNC_1(VAR_0, "stop audio.\n");
  FUNC_2(VAR_4, VAR_5->pipe);
  break;
 default:
  VAR_6 = -VAR_1;
 }

 return VAR_6;
}
