
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_usb_substream {int last_frame_number; int last_delay; int dev; } ;
typedef int snd_pcm_uframes_t ;


 int FUNC_0 (int ) ;

snd_pcm_uframes_t FUNC_1(struct snd_usb_substream *VAR_0,
        unsigned int VAR_1)
{
 int VAR_2;
 int VAR_3;
 int VAR_4;

 VAR_2 = FUNC_0(VAR_0->dev);





 VAR_3 = (VAR_2 - VAR_0->last_frame_number) & 0xff;



 VAR_4 = VAR_0->last_delay - (VAR_3 * VAR_1 / 1000);
 if (VAR_4 < 0)
  VAR_4 = 0;
 return VAR_4;
}
