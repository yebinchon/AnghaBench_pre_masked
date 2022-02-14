
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct echoaudio {int sample_rate; int digital_mode; int lock; int * asic_code; TYPE_1__* comm_page; int input_clock; } ;
struct TYPE_2__ {int control_register; } ;


 int FUNC_0 (char*) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct echoaudio*,int ) ;
 int FUNC_3 (struct echoaudio*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct echoaudio*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct echoaudio *VAR_13, u8 VAR_14)
{
 u32 VAR_15;
 int VAR_16, VAR_17;


 VAR_17 = VAR_4;
 switch (VAR_14) {
 case 129:
 case 128:
  if (VAR_13->input_clock == VAR_0)
   VAR_17 = VAR_11;
  break;
 case 130:
  if (VAR_13->input_clock == VAR_2)
   VAR_17 = VAR_11;
  break;
 default:
  FUNC_0(("Digital mode not supported: %d\n", VAR_14));
  return -VAR_3;
 }

 FUNC_4(&VAR_13->lock);

 if (VAR_17) {
  VAR_13->sample_rate = 48000;
  FUNC_2(VAR_13, VAR_1);
 }


 VAR_15 = FUNC_1(VAR_13->comm_page->control_register);
 VAR_15 &= VAR_8;


 switch (VAR_14) {
 case 129:
  VAR_15 |= VAR_10;
  break;
 case 128:

  break;
 case 130:


  if (VAR_13->asic_code == &VAR_12[VAR_6] ||
      VAR_13->asic_code == &VAR_12[VAR_5]) {
   FUNC_3(VAR_13, 48000);
  }
  VAR_15 |= VAR_7;
  VAR_15 &= ~VAR_9;
  break;
 }

 VAR_16 = FUNC_6(VAR_13, VAR_15, VAR_4);
 FUNC_5(&VAR_13->lock);
 if (VAR_16 < 0)
  return VAR_16;
 VAR_13->digital_mode = VAR_14;

 FUNC_0(("set_digital_mode to %d\n", VAR_14));
 return VAR_17;
}
