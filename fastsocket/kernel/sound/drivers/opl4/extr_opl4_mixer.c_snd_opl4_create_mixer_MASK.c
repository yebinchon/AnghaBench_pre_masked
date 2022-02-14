
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl4 {struct snd_card* card; } ;
struct snd_card {int mixername; } ;


 int FUNC_0 (struct snd_card*,int ) ;
 int FUNC_1 (int *,struct snd_opl4*) ;
 int * VAR_0 ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct snd_opl4 *VAR_1)
{
 struct snd_card *VAR_2 = VAR_1->card;
 int VAR_3, VAR_4;

 FUNC_2(VAR_2->mixername, ",OPL4");

 for (VAR_3 = 0; VAR_3 < 2; ++VAR_3) {
  VAR_4 = FUNC_0(VAR_2, FUNC_1(&VAR_0[VAR_3], VAR_1));
  if (VAR_4 < 0)
   return VAR_4;
 }
 return 0;
}
