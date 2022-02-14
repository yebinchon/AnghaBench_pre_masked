
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350 {int dummy; } ;
struct snd_soc_codec {struct wm8350* control_data; } ;


 unsigned int FUNC_0 (struct wm8350*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_1(struct snd_soc_codec *VAR_0,
          unsigned int VAR_1)
{
 struct wm8350 *VAR_2 = VAR_0->control_data;
 return FUNC_0(VAR_2, VAR_1);
}
