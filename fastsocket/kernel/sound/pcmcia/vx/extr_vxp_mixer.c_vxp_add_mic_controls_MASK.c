
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vx_core {int type; int card; } ;
struct snd_vxpocket {scalar_t__ mic_level; } ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,struct snd_vxpocket*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct vx_core*,int ) ;
 int FUNC_3 (struct vx_core*,int ) ;

int FUNC_4(struct vx_core *VAR_2)
{
 struct snd_vxpocket *VAR_3 = (struct snd_vxpocket *)VAR_2;
 int VAR_4;


 VAR_3->mic_level = 0;
 switch (VAR_2->type) {
 case 128:
  FUNC_3(VAR_2, 0);
  break;
 case 129:
  FUNC_2(VAR_2, 0);
  break;
 }


 switch (VAR_2->type) {
 case 128:
  if ((VAR_4 = FUNC_0(VAR_2->card, FUNC_1(&VAR_1, VAR_3))) < 0)
   return VAR_4;
  break;
 case 129:
  if ((VAR_4 = FUNC_0(VAR_2->card, FUNC_1(&VAR_0, VAR_3))) < 0)
   return VAR_4;
  break;
 }

 return 0;
}
