
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pmac {struct pmac_tumbler* mixer_data; scalar_t__ auto_mute; } ;
struct pmac_tumbler {int auto_mute_notify; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct snd_pmac *VAR_1, int VAR_2)
{
 if (VAR_1->auto_mute) {
  struct pmac_tumbler *VAR_3;
  VAR_3 = VAR_1->mixer_data;
  if (FUNC_1(!VAR_3))
   return;
  VAR_3->auto_mute_notify = VAR_2;
  FUNC_0(&VAR_0);
 }
}
