
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350 {int dummy; } ;
struct snd_soc_dai {struct snd_soc_codec* codec; } ;
struct snd_soc_codec {struct wm8350* control_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wm8350*,int ,int ) ;
 int FUNC_1 (struct wm8350*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_2, int VAR_3)
{
 struct snd_soc_codec *VAR_4 = VAR_2->codec;
 struct wm8350 *VAR_5 = VAR_4->control_data;

 if (VAR_3)
  FUNC_1(VAR_5, VAR_0, VAR_1);
 else
  FUNC_0(VAR_5, VAR_0, VAR_1);
 return 0;
}
