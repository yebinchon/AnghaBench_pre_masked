
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ac97 {TYPE_1__* bus; } ;
struct TYPE_2__ {int card; } ;


 int VAR_0 ;
 struct snd_kcontrol* FUNC_0 (struct snd_ac97*,char const*) ;
 int FUNC_1 (int ,struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_kcontrol*,struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_3 (char*,unsigned int const*) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static int FUNC_5(struct snd_ac97 *VAR_1, char *VAR_2,
    const unsigned int *VAR_3, const char **VAR_4)
{
 struct snd_kcontrol *VAR_5;
 const char **VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_0;
 VAR_7 = FUNC_1(VAR_1->bus->card, VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 for (VAR_6 = VAR_4; *VAR_6; VAR_6++) {
  struct snd_kcontrol *VAR_8;

  VAR_8 = FUNC_0(VAR_1, *VAR_6);
  if (!VAR_8) {
   FUNC_4("Cannot find slave %s, skipped\n", *VAR_6);
   continue;
  }
  VAR_7 = FUNC_2(VAR_5, VAR_8);
  if (VAR_7 < 0)
   return VAR_7;
 }
 return 0;
}
