
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int* reg_cache; int control_data; int (* hw_write ) (int ,int*,int) ;int card; } ;
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
 u8 VAR_7[2];
 u16 *VAR_8 = VAR_5->reg_cache;


 if (!VAR_5->card)
  return 0;


 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  if (VAR_6 + 1 == VAR_1)
   continue;
  VAR_7[0] = ((VAR_6 + 1) << 1) | ((VAR_8[VAR_6] >> 8) & 0x0001);
  VAR_7[1] = VAR_8[VAR_6] & 0x00ff;
  VAR_5->hw_write(VAR_5->control_data, VAR_7, 2);
 }

 FUNC_3(VAR_5, VAR_0);
 return 0;
}
