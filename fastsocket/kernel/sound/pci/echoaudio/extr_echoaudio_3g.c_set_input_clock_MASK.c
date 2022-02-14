
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct echoaudio {int input_clock; int digital_mode; int sample_rate; TYPE_1__* comm_page; } ;
struct TYPE_2__ {int status_clocks; int control_register; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;




 int VAR_9 ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 int FUNC_4 (struct echoaudio*,int,int ,int) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_10, u16 VAR_11)
{
 u32 VAR_12, VAR_13;

 FUNC_0(("set_input_clock:\n"));


 VAR_12 = FUNC_2(VAR_10->comm_page->control_register) &
  VAR_2;
 VAR_13 = FUNC_2(VAR_10->comm_page->status_clocks);

 switch (VAR_11) {
 case 130:
  FUNC_0(("Set Echo3G clock to INTERNAL\n"));
  VAR_10->input_clock = 130;
  return FUNC_3(VAR_10, VAR_10->sample_rate);
 case 129:
  if (VAR_10->digital_mode == VAR_0)
   return -VAR_8;
  FUNC_0(("Set Echo3G clock to SPDIF\n"));
  VAR_12 |= VAR_6;
  if (VAR_13 & VAR_3)
   VAR_12 |= VAR_5;
  else
   VAR_12 &= ~VAR_5;
  break;
 case 131:
  if (VAR_10->digital_mode != VAR_0)
   return -VAR_8;
  FUNC_0(("Set Echo3G clock to ADAT\n"));
  VAR_12 |= VAR_1;
  VAR_12 &= ~VAR_5;
  break;
 case 128:
  FUNC_0(("Set Echo3G clock to WORD\n"));
  VAR_12 |= VAR_7;
  if (VAR_13 & VAR_4)
   VAR_12 |= VAR_5;
  else
   VAR_12 &= ~VAR_5;
  break;
 default:
  FUNC_0(("Input clock 0x%x not supported for Echo3G\n", VAR_11));
  return -VAR_9;
 }

 VAR_10->input_clock = VAR_11;
 return FUNC_4(VAR_10, VAR_12, FUNC_1(VAR_10), 1);
}
