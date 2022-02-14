
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {scalar_t__ input_clock; int sample_rate; TYPE_1__* comm_page; } ;
struct TYPE_2__ {void* control_register; void* sample_rate; } ;


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
 int FUNC_1 (struct echoaudio*) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_5 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_6(struct echoaudio *VAR_10, u32 VAR_11)
{
 u32 VAR_12;

 switch (VAR_11) {
 case 96000:
  VAR_12 = VAR_8;
  break;
 case 88200:
  VAR_12 = VAR_7;
  break;
 case 48000:
  VAR_12 = VAR_6;
  break;
 case 44100:
  VAR_12 = VAR_5;
  break;
 case 32000:
  VAR_12 = VAR_4;
  break;
 default:
  FUNC_0(("set_sample_rate: %d invalid!\n", VAR_11));
  return -VAR_2;
 }


 if (VAR_10->input_clock == VAR_1)
  VAR_12 |= VAR_9;


 if (VAR_12 != FUNC_3(VAR_10->comm_page->control_register)) {
  if (FUNC_5(VAR_10))
   return -VAR_3;

  VAR_10->comm_page->sample_rate = FUNC_2(VAR_11);
  VAR_10->comm_page->control_register = FUNC_2(VAR_12);
  VAR_10->sample_rate = VAR_11;

  FUNC_1(VAR_10);
  return FUNC_4(VAR_10, VAR_0);
 }
 return 0;
}
