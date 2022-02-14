
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {int dummy; } ;
struct snd_ac97 {int dummy; } ;


 int FUNC_0 (struct snd_ac97*,int,unsigned char*,unsigned char*) ;
 int FUNC_1 (struct snd_card*,char*,int,int,int,struct snd_ac97*) ;
 int FUNC_2 (struct snd_card*,char*,int,unsigned char,unsigned char,struct snd_ac97*) ;
 scalar_t__ FUNC_3 (struct snd_ac97*,int,int) ;
 int FUNC_4 (struct snd_ac97*,int) ;
 int FUNC_5 (char*,char*,char const*) ;

__attribute__((used)) static int FUNC_6(struct snd_card *VAR_0, const char *VAR_1,
        int VAR_2, int VAR_3, int VAR_4,
        struct snd_ac97 *VAR_5)
{
 int VAR_6;
 char VAR_7[44];
 unsigned char VAR_8, VAR_9;

 if (! FUNC_4(VAR_5, VAR_2))
  return 0;

 if (FUNC_3(VAR_5, VAR_2, 15)) {
  FUNC_5(VAR_7, "%s Switch", VAR_1);
  if ((VAR_6 = FUNC_1(VAR_0, VAR_7, VAR_2,
           VAR_3, VAR_4,
           VAR_5)) < 0)
   return VAR_6;
 }
 FUNC_0(VAR_5, VAR_2, &VAR_8, &VAR_9);
 if (VAR_8) {
  FUNC_5(VAR_7, "%s Volume", VAR_1);
  if ((VAR_6 = FUNC_2(VAR_0, VAR_7, VAR_2, VAR_8, VAR_9, VAR_5)) < 0)
   return VAR_6;
 }
 return 0;
}
