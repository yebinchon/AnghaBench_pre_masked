
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct echoaudio {int input_clock; TYPE_1__* comm_page; scalar_t__ sample_rate; } ;
struct TYPE_2__ {int input_clock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct echoaudio*,int ) ;
 int FUNC_4 (struct echoaudio*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct echoaudio *VAR_6, u16 VAR_7)
{
 u16 VAR_8;
 u32 VAR_9;

 FUNC_0(("set_input_clock:\n"));
 VAR_9 = 0;
 switch (VAR_7) {
 case 131:
  FUNC_0(("Set Layla20 clock to INTERNAL\n"));
  VAR_9 = VAR_6->sample_rate;
  VAR_8 = VAR_2;
  break;
 case 130:
  FUNC_0(("Set Layla20 clock to SPDIF\n"));
  VAR_8 = VAR_3;
  break;
 case 128:
  FUNC_0(("Set Layla20 clock to WORD\n"));
  VAR_8 = VAR_5;
  break;
 case 129:
  FUNC_0(("Set Layla20 clock to SUPER\n"));
  VAR_8 = VAR_4;
  break;
 default:
  FUNC_0(("Input clock 0x%x not supported for Layla24\n",
   VAR_7));
  return -VAR_1;
 }
 VAR_6->input_clock = VAR_7;

 VAR_6->comm_page->input_clock = FUNC_2(VAR_8);
 FUNC_1(VAR_6);
 FUNC_3(VAR_6, VAR_0);

 if (VAR_9)
  FUNC_4(VAR_6, VAR_9);

 return 0;
}
