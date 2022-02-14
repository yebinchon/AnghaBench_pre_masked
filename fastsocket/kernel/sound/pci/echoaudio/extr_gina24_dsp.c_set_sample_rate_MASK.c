
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct echoaudio*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_18, u32 VAR_19)
{
 u32 VAR_20, VAR_21;

 if (FUNC_3(VAR_19 >= 50000 &&
         VAR_18->digital_mode == VAR_0))
  return -VAR_2;


 if (VAR_18->input_clock != VAR_1) {
  FUNC_0(("set_sample_rate: Cannot set sample rate - "
   "clock not set to CLK_CLOCKININTERNAL\n"));

  VAR_18->comm_page->sample_rate = FUNC_1(VAR_19);
  VAR_18->sample_rate = VAR_19;
  return 0;
 }

 VAR_21 = 0;

 VAR_20 = FUNC_2(VAR_18->comm_page->control_register);
 VAR_20 &= VAR_13 & VAR_15;

 switch (VAR_19) {
 case 96000:
  VAR_21 = VAR_12;
  break;
 case 88200:
  VAR_21 = VAR_10;
  break;
 case 48000:
  VAR_21 = VAR_9 | VAR_17;
  break;
 case 44100:
  VAR_21 = VAR_8;

  if (VAR_20 & VAR_14)
   VAR_21 |= VAR_16;
  break;
 case 32000:
  VAR_21 = VAR_7 | VAR_16 |
   VAR_17;
  break;
 case 22050:
  VAR_21 = VAR_6;
  break;
 case 16000:
  VAR_21 = VAR_5;
  break;
 case 11025:
  VAR_21 = VAR_4;
  break;
 case 8000:
  VAR_21 = VAR_11;
  break;
 default:
  FUNC_0(("set_sample_rate: %d invalid!\n", VAR_19));
  return -VAR_2;
 }

 VAR_20 |= VAR_21;

 VAR_18->comm_page->sample_rate = FUNC_1(VAR_19);
 VAR_18->sample_rate = VAR_19;
 FUNC_0(("set_sample_rate: %d clock %d\n", VAR_19, VAR_21));

 return FUNC_4(VAR_18, VAR_20, VAR_3);
}
