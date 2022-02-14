
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct echoaudio {int output_clock; int input_clock; scalar_t__ meters_enabled; int sample_rate; TYPE_1__* comm_page; } ;
struct TYPE_2__ {int handshake; int gd_spdif_status; int gd_clock_state; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_4 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_5 (struct echoaudio*,int ) ;
 int FUNC_6 (struct echoaudio*,int ) ;
 scalar_t__ FUNC_7 (struct echoaudio*) ;
 scalar_t__ FUNC_8 (struct echoaudio*) ;
 scalar_t__ FUNC_9 (struct echoaudio*) ;
 scalar_t__ FUNC_10 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_11(struct echoaudio *VAR_5)
{
 int VAR_6;
 FUNC_0(("restore_dsp_settings\n"));

 if ((VAR_6 = FUNC_1(VAR_5)) < 0)
  return VAR_6;


 VAR_5->comm_page->gd_clock_state = VAR_3;
 VAR_5->comm_page->gd_spdif_status = VAR_4;
 VAR_5->comm_page->handshake = 0xffffffff;

 if ((VAR_6 = FUNC_6(VAR_5, VAR_5->sample_rate)) < 0)
  return VAR_6;

 if (VAR_5->meters_enabled)
  if (FUNC_3(VAR_5, VAR_0) < 0)
   return -VAR_2;
 if (FUNC_8(VAR_5) < 0)
  return -VAR_2;

 if (FUNC_7(VAR_5) < 0)
  return -VAR_2;






 if (FUNC_10(VAR_5) < 0)
  return -VAR_2;
 FUNC_2(VAR_5);

 FUNC_0(("restore_dsp_rettings done\n"));
 return FUNC_3(VAR_5, VAR_1);
}
