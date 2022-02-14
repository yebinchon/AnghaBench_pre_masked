
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct echoaudio {scalar_t__ clock_state; scalar_t__ spdif_status; int sample_rate; TYPE_1__* comm_page; } ;
struct TYPE_2__ {int gd_resampler_state; scalar_t__ gd_spdif_status; scalar_t__ gd_clock_state; int sample_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_3 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_4(struct echoaudio *VAR_8, u32 VAR_9)
{
 u8 VAR_10, VAR_11;

 if (FUNC_3(VAR_8))
  return -VAR_1;

 switch (VAR_9) {
 case 44100:
  VAR_10 = VAR_2;
  VAR_11 = VAR_5;
  break;
 case 48000:
  VAR_10 = VAR_3;
  VAR_11 = VAR_6;
  break;
 default:
  VAR_10 = VAR_4;
  VAR_11 = VAR_7;
  break;
 }

 if (VAR_8->clock_state == VAR_10)
  VAR_10 = VAR_4;
 if (VAR_11 == VAR_8->spdif_status)
  VAR_11 = VAR_7;

 VAR_8->comm_page->sample_rate = FUNC_1(VAR_9);
 VAR_8->comm_page->gd_clock_state = VAR_10;
 VAR_8->comm_page->gd_spdif_status = VAR_11;
 VAR_8->comm_page->gd_resampler_state = 3;


 if (VAR_10 != VAR_4)
  VAR_8->clock_state = VAR_10;
 if (VAR_11 != VAR_7)
  VAR_8->spdif_status = VAR_11;
 VAR_8->sample_rate = VAR_9;

 FUNC_0(VAR_8);
 return FUNC_2(VAR_8, VAR_0);
}
