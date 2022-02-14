
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct davinci_mcbsp_dev* private_data; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct davinci_mcbsp_dev {int pcr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct davinci_mcbsp_dev*,struct snd_pcm_substream*) ;
 int FUNC_1 (struct davinci_mcbsp_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2,
  struct snd_soc_dai *VAR_3)
{
 struct davinci_mcbsp_dev *VAR_4 = VAR_3->private_data;
 int VAR_5 = (VAR_2->stream == VAR_1);
 FUNC_1(VAR_4, VAR_5);
 if ((VAR_4->pcr & VAR_0) == 0) {

  FUNC_0(VAR_4, VAR_2);
 }
 return 0;
}
