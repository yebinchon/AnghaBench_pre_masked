
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {scalar_t__ digital_mode; scalar_t__ input_clock; int sample_rate; TYPE_1__* comm_page; } ;
struct TYPE_2__ {void* sample_rate; int control_register; } ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct echoaudio*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct echoaudio*) ;
 int FUNC_7 (struct echoaudio*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct echoaudio *VAR_23, u32 VAR_24)
{
 u32 VAR_25, VAR_26, VAR_27;

 if (FUNC_5(VAR_24 >= 50000 &&
         VAR_23->digital_mode == VAR_0))
  return -VAR_3;


 if (VAR_23->input_clock != VAR_2) {
  FUNC_0(("set_sample_rate: Cannot set sample rate - "
   "clock not set to CLK_CLOCKININTERNAL\n"));

  VAR_23->comm_page->sample_rate = FUNC_2(VAR_24);
  VAR_23->sample_rate = VAR_24;
  return 0;
 }


 VAR_25 = FUNC_3(VAR_23->comm_page->control_register);
 VAR_25 &= VAR_15 & VAR_18;

 VAR_26 = 0;

 switch (VAR_24) {
 case 96000:
  VAR_26 = VAR_14;
  break;
 case 88200:
  VAR_26 = VAR_12;
  break;
 case 48000:
  VAR_26 = VAR_11 | VAR_20;
  break;
 case 44100:
  VAR_26 = VAR_10;

  if (VAR_25 & VAR_17)
   VAR_26 |= VAR_19;
  break;
 case 32000:
  VAR_26 = VAR_9 | VAR_19 |
   VAR_20;
  break;
 case 22050:
  VAR_26 = VAR_8;
  break;
 case 16000:
  VAR_26 = VAR_7;
  break;
 case 11025:
  VAR_26 = VAR_6;
  break;
 case 8000:
  VAR_26 = VAR_13;
  break;
 default:


  VAR_26 = VAR_21;
  if (VAR_24 > 50000) {
   VAR_27 = VAR_24 >> 1;
   VAR_25 |= VAR_16;
  } else {
   VAR_27 = VAR_24;
  }

  if (VAR_27 < 25000)
   VAR_27 = 25000;

  if (FUNC_6(VAR_23))
   return -VAR_4;

  VAR_23->comm_page->sample_rate =
   FUNC_2(VAR_22 / VAR_27 - 2);

  FUNC_1(VAR_23);
  FUNC_4(VAR_23, VAR_1);
 }

 VAR_25 |= VAR_26;

 VAR_23->comm_page->sample_rate = FUNC_2(VAR_24);
 VAR_23->sample_rate = VAR_24;
 FUNC_0(("set_sample_rate: %d clock %d\n", VAR_24, VAR_25));

 return FUNC_7(VAR_23, VAR_25, VAR_5);
}
