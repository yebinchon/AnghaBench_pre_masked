
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {size_t id; } ;
struct atmel_ssc_info {int cmr_div; int tcmr_period; int rcmr_period; } ;





 int VAR_0 ;
 int VAR_1 ;
 struct atmel_ssc_info* VAR_2 ;

__attribute__((used)) static int FUNC_0(struct snd_soc_dai *VAR_3,
 int VAR_4, int VAR_5)
{
 struct atmel_ssc_info *VAR_6 = &VAR_2[VAR_3->id];

 switch (VAR_4) {
 case 130:





  if (VAR_6->cmr_div == 0)
   VAR_6->cmr_div = VAR_5;
  else
   if (VAR_5 != VAR_6->cmr_div)
    return -VAR_0;
  break;

 case 128:
  VAR_6->tcmr_period = VAR_5;
  break;

 case 129:
  VAR_6->rcmr_period = VAR_5;
  break;

 default:
  return -VAR_1;
 }

 return 0;
}
