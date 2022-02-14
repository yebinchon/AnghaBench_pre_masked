
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int recdevs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_mixer*,int) ;

__attribute__((used)) static int
FUNC_1(struct snd_mixer *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6;

 VAR_6 = 0;
 VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if ((1 << VAR_4) & VAR_2->recdevs) {
   if (VAR_3 == VAR_5)
    break;
   ++VAR_5;
  }
 }

 if (VAR_4 == VAR_1)
  VAR_6 = VAR_0;
 else
  VAR_6 = FUNC_0(VAR_2, (1 << VAR_4));

 return VAR_6;
}
