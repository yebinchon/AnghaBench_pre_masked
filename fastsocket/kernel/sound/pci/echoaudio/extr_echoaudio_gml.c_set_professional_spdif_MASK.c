
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct echoaudio {int sample_rate; char professional_spdif; TYPE_1__* comm_page; } ;
struct TYPE_2__ {int control_register; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct echoaudio*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct echoaudio *VAR_8, char VAR_9)
{
 u32 VAR_10;
 int VAR_11;


 VAR_10 = FUNC_1(VAR_8->comm_page->control_register);
 VAR_10 &= VAR_3;


 VAR_10 |= VAR_7 | VAR_1 |
  VAR_2;
 if (VAR_9) {

  VAR_10 |= VAR_4;

  switch (VAR_8->sample_rate) {
  case 32000:
   VAR_10 |= VAR_5 |
    VAR_6;
   break;
  case 44100:
   VAR_10 |= VAR_5;
   break;
  case 48000:
   VAR_10 |= VAR_6;
   break;
  }
 } else {

  switch (VAR_8->sample_rate) {
  case 32000:
   VAR_10 |= VAR_5 |
    VAR_6;
   break;
  case 48000:
   VAR_10 |= VAR_6;
   break;
  }
 }

 if ((VAR_11 = FUNC_2(VAR_8, VAR_10, VAR_0)))
  return VAR_11;
 VAR_8->professional_spdif = VAR_9;
 FUNC_0(("set_professional_spdif to %s\n",
  VAR_9 ? "Professional" : "Consumer"));
 return 0;
}
