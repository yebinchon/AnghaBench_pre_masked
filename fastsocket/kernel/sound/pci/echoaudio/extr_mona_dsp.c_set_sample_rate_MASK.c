
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct firmware {int dummy; } ;
struct echoaudio {scalar_t__ input_clock; int sample_rate; scalar_t__ digital_mode; scalar_t__ device_id; TYPE_1__* comm_page; struct firmware const* asic_code; int lock; } ;
struct TYPE_2__ {void* sample_rate; int control_register; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
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
 struct firmware* VAR_23 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct echoaudio*,int ,struct firmware const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct echoaudio*,int,char) ;

__attribute__((used)) static int FUNC_7(struct echoaudio *VAR_24, u32 VAR_25)
{
 u32 VAR_26, VAR_27;
 const struct firmware *VAR_28;
 char VAR_29;


 if (VAR_24->input_clock != VAR_3) {
  FUNC_0(("set_sample_rate: Cannot set sample rate - "
   "clock not set to CLK_CLOCKININTERNAL\n"));

  VAR_24->comm_page->sample_rate = FUNC_1(VAR_25);
  VAR_24->sample_rate = VAR_25;
  return 0;
 }


 if (VAR_25 >= 88200) {
  if (VAR_24->digital_mode == VAR_1)
   return -VAR_4;
  if (VAR_24->device_id == VAR_0)
   VAR_28 = &VAR_23[VAR_8];
  else
   VAR_28 = &VAR_23[VAR_6];
 } else {
  if (VAR_24->device_id == VAR_0)
   VAR_28 = &VAR_23[VAR_7];
  else
   VAR_28 = &VAR_23[VAR_5];
 }

 VAR_29 = 0;
 if (VAR_28 != VAR_24->asic_code) {
  int VAR_30;

  FUNC_5(&VAR_24->lock);
  VAR_30 = FUNC_3(VAR_24, VAR_2,
     VAR_28);
  FUNC_4(&VAR_24->lock);

  if (VAR_30 < 0)
   return VAR_30;
  VAR_24->asic_code = VAR_28;
  VAR_29 = 1;
 }


 VAR_27 = 0;
 VAR_26 = FUNC_2(VAR_24->comm_page->control_register);
 VAR_26 &= VAR_18;
 VAR_26 &= VAR_20;

 switch (VAR_25) {
 case 96000:
  VAR_27 = VAR_17;
  break;
 case 88200:
  VAR_27 = VAR_15;
  break;
 case 48000:
  VAR_27 = VAR_14 | VAR_22;
  break;
 case 44100:
  VAR_27 = VAR_13;

  if (VAR_26 & VAR_19)
   VAR_27 |= VAR_21;
  break;
 case 32000:
  VAR_27 = VAR_12 | VAR_21 |
   VAR_22;
  break;
 case 22050:
  VAR_27 = VAR_11;
  break;
 case 16000:
  VAR_27 = VAR_10;
  break;
 case 11025:
  VAR_27 = VAR_9;
  break;
 case 8000:
  VAR_27 = VAR_16;
  break;
 default:
  FUNC_0(("set_sample_rate: %d invalid!\n", VAR_25));
  return -VAR_4;
 }

 VAR_26 |= VAR_27;

 VAR_24->comm_page->sample_rate = FUNC_1(VAR_25);
 VAR_24->sample_rate = VAR_25;
 FUNC_0(("set_sample_rate: %d clock %d\n", VAR_25, VAR_27));

 return FUNC_6(VAR_24, VAR_26, VAR_29);
}
