
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_usb_substream {scalar_t__ direction; TYPE_2__* stream; } ;
struct audioformat {int rate_min; } ;
struct TYPE_4__ {int chip; TYPE_1__* substream; } ;
struct TYPE_3__ {int interface; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct snd_usb_substream *VAR_8,
     struct audioformat *VAR_9)
{
 unsigned char VAR_10 = 0;





 if (VAR_8->direction == VAR_7) {
  if (VAR_8->stream->substream[VAR_6].interface != -1)
   return;
 }

 switch (VAR_9->rate_min) {
 case 48000:
  VAR_10 = VAR_3;
  break;
 case 88200:
  VAR_10 = VAR_4;
  break;
 case 96000:
  VAR_10 = VAR_5;
  break;
 case 176400:
  VAR_10 = VAR_0;
  break;
 case 192000:
  VAR_10 = VAR_1;
  break;
 default:
  VAR_10 = VAR_2;
  break;
 }
 FUNC_0(VAR_8->stream->chip, VAR_10);
}
