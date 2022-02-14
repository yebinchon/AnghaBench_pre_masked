
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_akm4xxx {scalar_t__ type; int num_dacs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_akm4xxx*) ;
 int FUNC_1 (struct snd_akm4xxx*) ;
 int FUNC_2 (struct snd_akm4xxx*,int) ;

int FUNC_3(struct snd_akm4xxx *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_1(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_2->type == VAR_0 || VAR_2->type == VAR_1)
  VAR_4 = 1;
 else
  VAR_4 = VAR_2->num_dacs / 2;
 VAR_3 = FUNC_2(VAR_2, VAR_4);
 if (VAR_3 < 0)
  return VAR_3;

 return 0;
}
