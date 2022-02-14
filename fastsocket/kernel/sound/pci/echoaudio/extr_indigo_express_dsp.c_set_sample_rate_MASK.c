
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {int sample_rate; TYPE_1__* comm_page; } ;
struct TYPE_2__ {int control_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_4 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_8, u32 VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12;

 if (FUNC_4(VAR_8))
  return -VAR_2;

 VAR_12 = FUNC_2(VAR_8->comm_page->control_register);
 VAR_11 = VAR_12 & ~VAR_6;

 switch (VAR_9) {
 case 32000:
  VAR_10 = VAR_3;
  break;
 case 44100:
  VAR_10 = VAR_4;
  break;
 case 48000:
  VAR_10 = VAR_5;
  break;
 case 64000:
  VAR_10 = VAR_3|VAR_7;
  break;
 case 88200:
  VAR_10 = VAR_4|VAR_7;
  break;
 case 96000:
  VAR_10 = VAR_5|VAR_7;
  break;
 default:
  return -VAR_1;
 }

 VAR_11 |= VAR_10;
 if (VAR_11 != VAR_12) {
  VAR_8->comm_page->control_register = FUNC_1(VAR_11);
  VAR_8->sample_rate = VAR_9;
  FUNC_0(VAR_8);
  return FUNC_3(VAR_8, VAR_0);
 }
 return 0;
}
