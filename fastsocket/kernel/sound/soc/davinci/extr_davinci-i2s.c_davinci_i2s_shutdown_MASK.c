
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct davinci_mcbsp_dev* private_data; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct davinci_mcbsp_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct davinci_mcbsp_dev*,int) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm_substream *VAR_1,
  struct snd_soc_dai *VAR_2)
{
 struct davinci_mcbsp_dev *VAR_3 = VAR_2->private_data;
 int VAR_4 = (VAR_1->stream == VAR_0);
 FUNC_0(VAR_3, VAR_4);
}
