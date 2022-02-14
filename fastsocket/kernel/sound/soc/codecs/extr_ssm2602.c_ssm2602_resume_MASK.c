
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int* reg_cache; int suspend_bias_level; int control_data; int (* hw_write ) (int ,int*,int) ;} ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct snd_soc_device* FUNC_1 (struct platform_device*) ;
 int VAR_1 ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;
 int FUNC_3 (int ,int*,int) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct snd_soc_device *VAR_3 = FUNC_1(VAR_2);
 struct snd_soc_codec *VAR_4 = VAR_3->card->codec;
 int VAR_5;
 u8 VAR_6[2];
 u16 *VAR_7 = VAR_4->reg_cache;


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  VAR_6[0] = (VAR_5 << 1) | ((VAR_7[VAR_5] >> 8) & 0x0001);
  VAR_6[1] = VAR_7[VAR_5] & 0x00ff;
  VAR_4->hw_write(VAR_4->control_data, VAR_6, 2);
 }
 FUNC_2(VAR_4, VAR_0);
 FUNC_2(VAR_4, VAR_4->suspend_bias_level);
 return 0;
}
