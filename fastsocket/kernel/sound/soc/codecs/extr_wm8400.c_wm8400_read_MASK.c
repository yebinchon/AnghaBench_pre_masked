
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8400_priv {unsigned int fake_register; int wm8400; } ;
struct snd_soc_codec {struct wm8400_priv* private_data; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct snd_soc_codec *VAR_1,
           unsigned int VAR_2)
{
 struct wm8400_priv *VAR_3 = VAR_1->private_data;

 if (VAR_2 == VAR_0)
  return VAR_3->fake_register;
 else
  return FUNC_0(VAR_3->wm8400, VAR_2);
}
