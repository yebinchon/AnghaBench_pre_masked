
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int channel; } ;
struct bcm2835_audio_info {TYPE_1__ pch; } ;
struct bcm2835_audio_chinfo {int retrieved_samples; int submitted_samples; struct bcm2835_audio_info* parent; } ;
typedef int kobj_t ;



 int FUNC_0 (int) ;


 int FUNC_1 (struct bcm2835_audio_info*) ;
 int FUNC_2 (struct bcm2835_audio_info*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_0, void *VAR_1, int VAR_2)
{
 struct bcm2835_audio_chinfo *VAR_3 = VAR_1;
 struct bcm2835_audio_info *VAR_4 = VAR_3->parent;

 if (!FUNC_0(VAR_2))
  return (0);

 switch (VAR_2) {
 case 129:

  FUNC_3(VAR_4->pch.channel);
  VAR_3->submitted_samples = 0;
  VAR_3->retrieved_samples = 0;
  FUNC_1(VAR_4);
  break;

 case 128:
 case 130:
  FUNC_2(VAR_4);
  break;

 default:
  break;
 }
 return 0;
}
