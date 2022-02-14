
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_minor {int type; int card; int device; } ;
struct snd_card {int number; } ;


 int FUNC_0 (struct snd_minor**) ;
 struct snd_minor** VAR_0 ;

__attribute__((used)) static int FUNC_1(int VAR_1, struct snd_card *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct snd_minor *VAR_6;

 VAR_4 = VAR_2 ? VAR_2->number : -1;
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); ++VAR_5)
  if ((VAR_6 = VAR_0[VAR_5]) != ((void*)0) &&
      VAR_6->type == VAR_1 &&
      VAR_6->card == VAR_4 &&
      VAR_6->device == VAR_3)
   return VAR_5;
 return -1;
}
