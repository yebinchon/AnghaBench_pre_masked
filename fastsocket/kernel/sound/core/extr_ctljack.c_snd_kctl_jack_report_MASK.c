
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int private_value; int id; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_card*,int ,int *) ;

void FUNC_1(struct snd_card *VAR_1,
     struct snd_kcontrol *VAR_2, bool VAR_3)
{
 if (VAR_2->private_value == VAR_3)
  return;
 VAR_2->private_value = VAR_3;
 FUNC_0(VAR_1, VAR_0, &VAR_2->id);
}
