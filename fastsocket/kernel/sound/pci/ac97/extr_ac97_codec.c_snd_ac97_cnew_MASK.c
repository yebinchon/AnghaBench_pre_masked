
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int template ;
struct snd_kcontrol_new {int index; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_ac97 {int num; } ;


 int FUNC_0 (struct snd_kcontrol_new*,struct snd_kcontrol_new const*,int) ;
 struct snd_kcontrol* FUNC_1 (struct snd_kcontrol_new*,struct snd_ac97*) ;

__attribute__((used)) static struct snd_kcontrol *FUNC_2(const struct snd_kcontrol_new *VAR_0,
       struct snd_ac97 * VAR_1)
{
 struct snd_kcontrol_new VAR_2;
 FUNC_0(&VAR_2, VAR_0, sizeof(VAR_2));
 VAR_2.index = VAR_1->num;
 return FUNC_1(&VAR_2, VAR_1);
}
