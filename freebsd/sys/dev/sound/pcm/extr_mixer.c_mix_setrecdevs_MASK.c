
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_2__ {char* strings; int* strindex; int nvalues; } ;
struct snd_mixer {int recdevs; int dev; TYPE_1__ enuminfo; } ;
typedef TYPE_1__ oss_mixer_enuminfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int * VAR_2 ;
 int FUNC_1 (char*,int ,int) ;

void
FUNC_2(struct snd_mixer *VAR_3, u_int32_t VAR_4)
{
 oss_mixer_enuminfo *VAR_5;
 char *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_5 = &VAR_3->enuminfo;

 VAR_8 = 0;
 VAR_9 = 0;
 VAR_10 = sizeof(VAR_5->strings);
 VAR_6 = VAR_5->strings;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  if ((1 << VAR_7) & VAR_4) {
   VAR_5->strindex[VAR_8] = VAR_9;
   VAR_11 = FUNC_1(VAR_6, VAR_2[VAR_7], VAR_10) + 1;


   VAR_9 += VAR_11;
   VAR_10 -= VAR_11;
   VAR_8++;







   if ((VAR_10 <= 0) || (VAR_8 >= VAR_0)) {
    FUNC_0(VAR_3->dev,
        "mix_setrecdevs:  Not enough room to store device names--please file a bug report.\n");
    FUNC_0(VAR_3->dev,
        "mix_setrecdevs:  Please include details about your sound hardware, OS version, etc.\n");
    break;
   }

   VAR_6 = &VAR_5->strings[VAR_9];
  }
 }





 VAR_5->nvalues = VAR_8;
 VAR_3->recdevs = VAR_4;
}
