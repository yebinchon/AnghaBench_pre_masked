
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int* reg_cache; int suspend_bias_level; int control_data; int (* hw_write ) (int ,int*,int) ;} ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct snd_soc_codec*,int ) ;
 struct snd_soc_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct snd_soc_device *VAR_2 = FUNC_2(VAR_1);
 struct snd_soc_codec *VAR_3 = VAR_2->card->codec;
 int VAR_4;
 u8 VAR_5[2];
 u8 *VAR_6 = VAR_3->reg_cache;


 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_5[0] = VAR_4;
  VAR_5[1] = VAR_6[VAR_4];
  VAR_3->hw_write(VAR_3->control_data, VAR_5, 2);
 }

 FUNC_1(VAR_3, VAR_3->suspend_bias_level);

 return 0;
}
