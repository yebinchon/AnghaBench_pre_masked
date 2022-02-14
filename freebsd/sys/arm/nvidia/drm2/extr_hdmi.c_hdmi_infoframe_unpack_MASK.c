
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union hdmi_infoframe {int vendor; int audio; int spd; int avi; } ;
typedef int uint8_t ;


 int VAR_0 ;




 int FUNC_0 (int *,void*) ;
 int FUNC_1 (int *,void*) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (int *,void*) ;

int FUNC_4(union hdmi_infoframe *VAR_1, void *VAR_2)
{
 int VAR_3;
 uint8_t *VAR_4 = VAR_2;

 switch (VAR_4[0]) {
 case 130:
  VAR_3 = FUNC_1(&VAR_1->avi, VAR_2);
  break;
 case 129:
  VAR_3 = FUNC_2(&VAR_1->spd, VAR_2);
  break;
 case 131:
  VAR_3 = FUNC_0(&VAR_1->audio, VAR_2);
  break;
 case 128:
  VAR_3 = FUNC_3(&VAR_1->vendor, VAR_2);
  break;
 default:
  VAR_3 = -VAR_0;
  break;
 }

 return VAR_3;
}
