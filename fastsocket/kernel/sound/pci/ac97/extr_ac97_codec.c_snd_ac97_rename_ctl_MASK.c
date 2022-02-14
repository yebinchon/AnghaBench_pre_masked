
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 struct snd_kcontrol* FUNC_0 (struct snd_ac97*,char const*,char const*) ;
 int FUNC_1 (int ,char const*,char const*) ;

__attribute__((used)) static int FUNC_2(struct snd_ac97 *VAR_1, const char *VAR_2,
          const char *VAR_3, const char *VAR_4)
{
 struct snd_kcontrol *VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_5->id.name, VAR_3, VAR_4);
  return 0;
 }
 return -VAR_0;
}
