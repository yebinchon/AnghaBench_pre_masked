
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_miro {int aci_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_miro*) ;
 int FUNC_1 (struct snd_miro*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct snd_miro * VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5[] = {VAR_2, VAR_3, VAR_4};
 int VAR_6, VAR_7;

 if (FUNC_2(&VAR_1->aci_mutex))
  return -VAR_0;

 for (VAR_7=0; VAR_7<3; VAR_7++) {
  if (VAR_5[VAR_7]< 0 || VAR_5[VAR_7] > 255)
   break;
  else {
   VAR_6 = FUNC_1(VAR_1, VAR_5[VAR_7]);
   if (VAR_6 < 0)
    goto out;
  }
 }

 VAR_6 = FUNC_0(VAR_1);

out: FUNC_3(&VAR_1->aci_mutex);
 return VAR_6;
}
