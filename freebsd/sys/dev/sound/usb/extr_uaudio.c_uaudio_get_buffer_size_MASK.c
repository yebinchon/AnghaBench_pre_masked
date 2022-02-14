
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
struct uaudio_chan_alt {int sample_size; int sample_rate; } ;
struct uaudio_chan {struct uaudio_chan_alt* usb_alt; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct uaudio_chan *VAR_1, uint8_t VAR_2)
{
 struct uaudio_chan_alt *VAR_3 = &VAR_1->usb_alt[VAR_2];

 uint32_t VAR_4 = VAR_3->sample_size *
     FUNC_0(VAR_3->sample_rate * (VAR_0 / 8), 1000);
 return (VAR_4);
}
