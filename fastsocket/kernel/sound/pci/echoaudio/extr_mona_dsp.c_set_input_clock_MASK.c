
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct echoaudio {int input_clock; int digital_mode; int lock; int sample_rate; TYPE_1__* comm_page; int opencount; } ;
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
 int VAR_10 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct echoaudio*,int) ;
 int FUNC_7 (struct echoaudio*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct echoaudio *VAR_11, u16 VAR_12)
{
 u32 VAR_13, VAR_14;
 int VAR_15;

 FUNC_0(("set_input_clock:\n"));


 if (FUNC_1(&VAR_11->opencount))
  return -VAR_1;


 VAR_13 = FUNC_2(VAR_11->comm_page->control_register) &
  VAR_4;
 VAR_14 = FUNC_2(VAR_11->comm_page->status_clocks);

 switch (VAR_12) {
 case 130:
  FUNC_0(("Set Mona clock to INTERNAL\n"));
  VAR_11->input_clock = 130;
  return FUNC_3(VAR_11, VAR_11->sample_rate);
 case 129:
  if (VAR_11->digital_mode == VAR_0)
   return -VAR_1;
  FUNC_5(&VAR_11->lock);
  VAR_15 = FUNC_6(VAR_11, VAR_14 &
      VAR_5);
  FUNC_4(&VAR_11->lock);
  if (VAR_15 < 0)
   return VAR_15;
  FUNC_0(("Set Mona clock to SPDIF\n"));
  VAR_13 |= VAR_8;
  if (VAR_14 & VAR_5)
   VAR_13 |= VAR_7;
  else
   VAR_13 &= ~VAR_7;
  break;
 case 128:
  FUNC_0(("Set Mona clock to WORD\n"));
  FUNC_5(&VAR_11->lock);
  VAR_15 = FUNC_6(VAR_11, VAR_14 &
      VAR_6);
  FUNC_4(&VAR_11->lock);
  if (VAR_15 < 0)
   return VAR_15;
  VAR_13 |= VAR_9;
  if (VAR_14 & VAR_6)
   VAR_13 |= VAR_7;
  else
   VAR_13 &= ~VAR_7;
  break;
 case 131:
  FUNC_0(("Set Mona clock to ADAT\n"));
  if (VAR_11->digital_mode != VAR_0)
   return -VAR_1;
  VAR_13 |= VAR_3;
  VAR_13 &= ~VAR_7;
  break;
 default:
  FUNC_0(("Input clock 0x%x not supported for Mona\n", VAR_12));
  return -VAR_2;
 }

 VAR_11->input_clock = VAR_12;
 return FUNC_7(VAR_11, VAR_13, VAR_10);
}
