
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
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int*,int) ;
 int VAR_4 ;
 int FUNC_5 (struct snd_soc_codec*,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 struct snd_soc_device *VAR_6 = FUNC_2(VAR_5);
 struct snd_soc_codec *VAR_7 = VAR_6->card->codec;
 int VAR_8;
 u8 VAR_9[2];
 u16 *VAR_10 = VAR_7->reg_cache;


 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  if (VAR_8 == VAR_3)
   continue;
  VAR_9[0] = (VAR_8 << 1) | ((VAR_10[VAR_8] >> 8) & 0x0001);
  VAR_9[1] = VAR_10[VAR_8] & 0x00ff;
  VAR_7->hw_write(VAR_7->control_data, VAR_9, 2);
 }

 FUNC_5(VAR_7, VAR_2);


 if (VAR_7->suspend_bias_level == VAR_0) {
  FUNC_5(VAR_7, VAR_1);
  VAR_7->bias_level = VAR_0;
  FUNC_3(&VAR_7->delayed_work,
     FUNC_1(1000));
 }

 return 0;
}
