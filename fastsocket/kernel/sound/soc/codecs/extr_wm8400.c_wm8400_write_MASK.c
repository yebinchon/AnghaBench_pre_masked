
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8400_priv {unsigned int fake_register; int wm8400; } ;
struct snd_soc_codec {struct wm8400_priv* private_data; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,unsigned int,int,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_codec *VAR_1, unsigned int VAR_2,
 unsigned int VAR_3)
{
 struct wm8400_priv *VAR_4 = VAR_1->private_data;

 if (VAR_2 == VAR_0) {
  VAR_4->fake_register = VAR_3;
  return 0;
 } else
  return FUNC_0(VAR_4->wm8400, VAR_2, 0xffff, VAR_3);
}
