
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int* reg_cache; scalar_t__ suspend_bias_level; int delayed_work; scalar_t__ bias_level; int control_data; int (* hw_write ) (int ,int*,int) ;} ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 struct snd_soc_device* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct snd_soc_codec*,int ) ;
 int FUNC_5 (struct snd_soc_codec*,int ,int) ;
 int FUNC_6 (int ,int*,int) ;
 int VAR_4 ;
 int FUNC_7 (struct snd_soc_codec*,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct snd_soc_device *VAR_7 = FUNC_2(VAR_6);
 struct snd_soc_codec *VAR_8 = VAR_7->card->codec;
 int VAR_9;
 u8 VAR_10[2];
 u16 *VAR_11 = VAR_8->reg_cache;
 u16 VAR_12;


 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_4); VAR_9++) {
  if (VAR_9 + 1 == VAR_3)
   continue;
  VAR_10[0] = (VAR_9 << 1) | ((VAR_11[VAR_9] >> 8) & 0x0001);
  VAR_10[1] = VAR_11[VAR_9] & 0x00ff;
  VAR_8->hw_write(VAR_8->control_data, VAR_10, 2);
 }

 FUNC_7(VAR_8, VAR_1);


 if (VAR_8->suspend_bias_level == VAR_0) {
  VAR_12 = FUNC_4(VAR_8, VAR_2) & 0xfe3e;
  FUNC_5(VAR_8, VAR_2, VAR_12 | 0x01c0);
  VAR_8->bias_level = VAR_0;
  FUNC_3(VAR_5, &VAR_8->delayed_work,
   FUNC_1(1000));
 }

 return 0;
}
