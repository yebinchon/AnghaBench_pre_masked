
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int* reg_cache; int (* hw_write ) (int ,int*,int) ;int suspend_bias_level; int control_data; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,int*,int) ;
 int VAR_2 ;
 int FUNC_3 (struct snd_soc_codec*,int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct snd_soc_device *VAR_4 = FUNC_1(VAR_3);
 struct snd_soc_codec *VAR_5 = VAR_4->card->codec;
 int VAR_6;
 int VAR_7;
 u8 VAR_8[3];
 u16 *VAR_9 = VAR_5->reg_cache;




 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  VAR_8[0] = VAR_6;
  VAR_8[1] = (VAR_9[VAR_6] & 0xFF00) >> 8;
  VAR_8[2] = VAR_9[VAR_6] & 0x00FF;
  VAR_7 = VAR_5->hw_write(VAR_5->control_data, VAR_8, 3);
  if (VAR_7 < 0)
   goto error_ret;
  else if (VAR_7 != 3) {
   VAR_7 = -VAR_0;
   goto error_ret;
  }
 }
 VAR_7 = FUNC_3(VAR_5, VAR_1);
 if (VAR_7)
  goto error_ret;
 VAR_7 = FUNC_3(VAR_5, VAR_5->suspend_bias_level);

error_ret:
 return VAR_7;
}
