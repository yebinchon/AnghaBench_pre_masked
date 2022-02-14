
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_card {int dummy; } ;
struct rme96 {struct snd_kcontrol* spdif_ctl; } ;


 scalar_t__ FUNC_0 (struct rme96*) ;
 int FUNC_1 (struct snd_card*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_2 (int *,struct rme96*) ;
 int * VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct snd_card *VAR_1,
     struct rme96 *VAR_2)
{
 int VAR_3, VAR_4;
 struct snd_kcontrol *VAR_5;

 for (VAR_3 = 0; VAR_3 < 7; VAR_3++) {
  if ((VAR_4 = FUNC_1(VAR_1, VAR_5 = FUNC_2(&VAR_0[VAR_3], VAR_2))) < 0)
   return VAR_4;
  if (VAR_3 == 1)
   VAR_2->spdif_ctl = VAR_5;
 }

 if (FUNC_0(VAR_2)) {
  for (VAR_3 = 7; VAR_3 < 10; VAR_3++)
   if ((VAR_4 = FUNC_1(VAR_1, FUNC_2(&VAR_0[VAR_3], VAR_2))) < 0)
    return VAR_4;
 }

 return 0;
}
