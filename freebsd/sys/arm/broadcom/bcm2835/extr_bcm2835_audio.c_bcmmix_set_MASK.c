
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct bcm2835_audio_info {unsigned int volume; } ;


 int FUNC_0 (struct bcm2835_audio_info*) ;
 int FUNC_1 (struct bcm2835_audio_info*) ;

 int FUNC_2 (struct bcm2835_audio_info*) ;
 struct bcm2835_audio_info* FUNC_3 (struct snd_mixer*) ;

__attribute__((used)) static int
FUNC_4(struct snd_mixer *VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
     struct bcm2835_audio_info *VAR_4 = FUNC_3(VAR_0);

 switch (VAR_1) {
 case 128:
  FUNC_0(VAR_4);
  VAR_4->volume = VAR_2;
  FUNC_2(VAR_4);
  FUNC_1(VAR_4);

  break;

 default:
  break;
 }

     return VAR_2 | (VAR_2 << 8);
}
