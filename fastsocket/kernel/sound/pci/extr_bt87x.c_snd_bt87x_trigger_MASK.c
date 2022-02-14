
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_bt87x {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct snd_bt87x*) ;
 int FUNC_1 (struct snd_bt87x*) ;
 struct snd_bt87x* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_bt87x *VAR_3 = FUNC_2(VAR_1);

 switch (VAR_2) {
 case 129:
  return FUNC_0(VAR_3);
 case 128:
  return FUNC_1(VAR_3);
 default:
  return -VAR_0;
 }
}
