
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct echoaudio {int sample_rate; int digital_mode; int lock; int device_id; TYPE_1__* comm_page; int input_clock; } ;
struct TYPE_2__ {int control_register; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;




 int VAR_1 ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (struct echoaudio*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct echoaudio*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct echoaudio *VAR_12, u8 VAR_13)
{
 u32 VAR_14;
 int VAR_15, VAR_16;


 VAR_16 = VAR_5;
 switch (VAR_13) {
 case 129:
 case 130:
 case 128:
  if (VAR_12->input_clock == VAR_1)
   VAR_16 = VAR_11;
  break;
 case 131:
  if (VAR_12->input_clock == VAR_3)
   VAR_16 = VAR_11;
  break;
 default:
  FUNC_0(("Digital mode not supported: %d\n", VAR_13));
  return -VAR_4;
 }

 FUNC_3(&VAR_12->lock);

 if (VAR_16) {
  VAR_12->sample_rate = 48000;
  FUNC_2(VAR_12, VAR_2);
 }


 VAR_14 = FUNC_1(VAR_12->comm_page->control_register);
 VAR_14 &= VAR_7;


 switch (VAR_13) {
 case 129:
  VAR_14 |= VAR_10;
  break;
 case 130:

  if (VAR_12->device_id == VAR_0)
   VAR_14 |= VAR_9;
  break;
 case 128:

  break;
 case 131:
  VAR_14 |= VAR_6;
  VAR_14 &= ~VAR_8;
  break;
 }

 VAR_15 = FUNC_5(VAR_12, VAR_14, VAR_11);
 FUNC_4(&VAR_12->lock);
 if (VAR_15 < 0)
  return VAR_15;
 VAR_12->digital_mode = VAR_13;

 FUNC_0(("set_digital_mode to %d\n", VAR_12->digital_mode));
 return VAR_16;
}
