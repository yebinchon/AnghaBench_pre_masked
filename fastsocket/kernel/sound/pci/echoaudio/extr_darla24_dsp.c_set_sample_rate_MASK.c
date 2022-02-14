
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct echoaudio {int sample_rate; scalar_t__ input_clock; TYPE_1__* comm_page; } ;
struct TYPE_2__ {int gd_clock_state; int sample_rate; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_4 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_14, u32 VAR_15)
{
 u8 VAR_16;

 switch (VAR_15) {
 case 96000:
  VAR_16 = VAR_12;
  break;
 case 88200:
  VAR_16 = VAR_11;
  break;
 case 48000:
  VAR_16 = VAR_9;
  break;
 case 44100:
  VAR_16 = VAR_8;
  break;
 case 32000:
  VAR_16 = VAR_7;
  break;
 case 22050:
  VAR_16 = VAR_6;
  break;
 case 16000:
  VAR_16 = VAR_5;
  break;
 case 11025:
  VAR_16 = VAR_4;
  break;
 case 8000:
  VAR_16 = VAR_10;
  break;
 default:
  FUNC_0(("set_sample_rate: Error, invalid sample rate %d\n",
   VAR_15));
  return -VAR_2;
 }

 if (FUNC_4(VAR_14))
  return -VAR_3;

 FUNC_0(("set_sample_rate: %d clock %d\n", VAR_15, VAR_16));
 VAR_14->sample_rate = VAR_15;


 if (VAR_14->input_clock == VAR_1)
  VAR_16 = VAR_13;

 VAR_14->comm_page->sample_rate = FUNC_2(VAR_15);
 VAR_14->comm_page->gd_clock_state = VAR_16;
 FUNC_1(VAR_14);
 return FUNC_3(VAR_14, VAR_0);
}
