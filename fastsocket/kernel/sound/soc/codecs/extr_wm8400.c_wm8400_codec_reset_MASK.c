
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8400_priv {int wm8400; } ;
struct snd_soc_codec {struct wm8400_priv* private_data; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct snd_soc_codec *VAR_0)
{
 struct wm8400_priv *VAR_1 = VAR_0->private_data;

 FUNC_0(VAR_1->wm8400);
}
