
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct snd_soc_device {TYPE_1__* card; } ;
struct snd_soc_codec {int suspend_bias_level; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {struct snd_soc_codec* codec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct snd_soc_device* FUNC_0 (struct platform_device*) ;
 scalar_t__ FUNC_1 (struct snd_soc_codec*,scalar_t__) ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;
 int FUNC_3 (struct snd_soc_codec*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct snd_soc_device *VAR_3 = FUNC_0(VAR_2);
 struct snd_soc_codec *VAR_4 = VAR_3->card->codec;
 u16 VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  u16 VAR_6 = FUNC_1(VAR_4, VAR_5);
  FUNC_3(VAR_4, VAR_5, VAR_6);
 }

 FUNC_2(VAR_4, VAR_0);
 FUNC_2(VAR_4, VAR_4->suspend_bias_level);

 return 0;
}
