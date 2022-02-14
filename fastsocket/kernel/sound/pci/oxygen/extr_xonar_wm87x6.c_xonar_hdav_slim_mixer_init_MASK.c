
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct oxygen {int card; } ;


 unsigned int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct oxygen*) ;
 int * VAR_1 ;
 int FUNC_2 (int ,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_3 (int *,struct oxygen*) ;

__attribute__((used)) static int FUNC_4(struct oxygen *VAR_2)
{
 unsigned int VAR_3;
 struct snd_kcontrol *VAR_4;
 int VAR_5;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); ++VAR_3) {
  VAR_4 = FUNC_3(&VAR_1[VAR_3], VAR_2);
  if (!VAR_4)
   return -VAR_0;
  VAR_5 = FUNC_2(VAR_2->card, VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return FUNC_1(VAR_2);
}
