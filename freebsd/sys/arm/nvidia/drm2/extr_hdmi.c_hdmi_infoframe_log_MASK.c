
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
union hdmi_infoframe {int vendor; int audio; int spd; int avi; TYPE_1__ any; } ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(union hdmi_infoframe *VAR_0)
{
 switch (VAR_0->any.type) {
 case 130:
  FUNC_1(&VAR_0->avi);
  break;
 case 129:
  FUNC_2(&VAR_0->spd);
  break;
 case 131:
  FUNC_0(&VAR_0->audio);
  break;
 case 128:
  FUNC_3(&VAR_0->vendor);
  break;
 }
}
