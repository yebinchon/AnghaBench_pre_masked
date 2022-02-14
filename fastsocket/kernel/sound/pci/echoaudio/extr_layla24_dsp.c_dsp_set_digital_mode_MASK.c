
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct firmware {int dummy; } ;
struct echoaudio {int sample_rate; int digital_mode; int lock; TYPE_1__* comm_page; int input_clock; } ;
struct TYPE_2__ {int control_register; } ;


 int FUNC_0 (char*) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct firmware* VAR_13 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct echoaudio*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct echoaudio*,struct firmware const*) ;
 int FUNC_6 (struct echoaudio*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct echoaudio *VAR_14, u8 VAR_15)
{
 u32 VAR_16;
 int VAR_17, VAR_18;
 const struct firmware *VAR_19;


 VAR_18 = VAR_5;
 switch (VAR_15) {
 case 129:
 case 128:
  if (VAR_14->input_clock == VAR_0)
   VAR_18 = VAR_12;
  VAR_19 = &VAR_13[VAR_7];
  break;
 case 130:
  if (VAR_14->input_clock == VAR_2)
   VAR_18 = VAR_12;
  VAR_19 = &VAR_13[VAR_6];
  break;
 default:
  FUNC_0(("Digital mode not supported: %d\n", VAR_15));
  return -VAR_3;
 }

 if (VAR_18) {
  VAR_14->sample_rate = 48000;
  FUNC_3(&VAR_14->lock);
  FUNC_2(VAR_14, VAR_1);
  FUNC_4(&VAR_14->lock);
 }


 if (FUNC_5(VAR_14, VAR_19) < 0)
  return -VAR_4;

 FUNC_3(&VAR_14->lock);


 VAR_16 = FUNC_1(VAR_14->comm_page->control_register);
 VAR_16 &= VAR_9;

 switch (VAR_15) {
 case 129:
  VAR_16 |= VAR_11;
  break;
 case 128:

  break;
 case 130:
  VAR_16 |= VAR_8;
  VAR_16 &= ~VAR_10;
  break;
 }

 VAR_17 = FUNC_6(VAR_14, VAR_16, VAR_12);
 FUNC_4(&VAR_14->lock);
 if (VAR_17 < 0)
  return VAR_17;
 VAR_14->digital_mode = VAR_15;

 FUNC_0(("set_digital_mode to %d\n", VAR_15));
 return VAR_18;
}
