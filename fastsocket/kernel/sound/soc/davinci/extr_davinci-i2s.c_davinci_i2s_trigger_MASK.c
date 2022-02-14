
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct davinci_mcbsp_dev* private_data; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct davinci_mcbsp_dev {int pcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;






 int FUNC_0 (struct davinci_mcbsp_dev*,struct snd_pcm_substream*) ;
 int FUNC_1 (struct davinci_mcbsp_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3, int VAR_4,
          struct snd_soc_dai *VAR_5)
{
 struct davinci_mcbsp_dev *VAR_6 = VAR_5->private_data;
 int VAR_7 = 0;
 int VAR_8 = (VAR_3->stream == VAR_2);
 if ((VAR_6->pcr & VAR_0) == 0)
  return 0;

 switch (VAR_4) {
 case 130:
 case 131:
 case 132:
  FUNC_0(VAR_6, VAR_3);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_1(VAR_6, VAR_8);
  break;
 default:
  VAR_7 = -VAR_1;
 }
 return VAR_7;
}
