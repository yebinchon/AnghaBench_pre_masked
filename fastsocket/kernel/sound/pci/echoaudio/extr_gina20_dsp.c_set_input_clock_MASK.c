
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct echoaudio {int input_clock; void* clock_state; TYPE_1__* comm_page; int sample_rate; int spdif_status; } ;
struct TYPE_2__ {int gd_spdif_status; void* gd_clock_state; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;


 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*,int ) ;
 int FUNC_3 (struct echoaudio*,int ) ;

__attribute__((used)) static int FUNC_4(struct echoaudio *VAR_6, u16 VAR_7)
{
 FUNC_0(("set_input_clock:\n"));

 switch (VAR_7) {
 case 129:

  VAR_6->clock_state = VAR_3;
  VAR_6->spdif_status = VAR_5;
  FUNC_3(VAR_6, VAR_6->sample_rate);
  VAR_6->input_clock = VAR_7;
  FUNC_0(("Set Gina clock to INTERNAL\n"));
  break;
 case 128:
  VAR_6->comm_page->gd_clock_state = VAR_2;
  VAR_6->comm_page->gd_spdif_status = VAR_4;
  FUNC_1(VAR_6);
  FUNC_2(VAR_6, VAR_0);
  VAR_6->clock_state = VAR_2;
  FUNC_0(("Set Gina20 clock to SPDIF\n"));
  VAR_6->input_clock = VAR_7;
  break;
 default:
  return -VAR_1;
 }

 return 0;
}
