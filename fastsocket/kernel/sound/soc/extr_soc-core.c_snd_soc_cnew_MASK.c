
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int template ;
struct snd_kcontrol_new {char* name; scalar_t__ index; } ;
struct snd_kcontrol {int dummy; } ;


 int FUNC_0 (struct snd_kcontrol_new*,struct snd_kcontrol_new const*,int) ;
 struct snd_kcontrol* FUNC_1 (struct snd_kcontrol_new*,void*) ;

struct snd_kcontrol *FUNC_2(const struct snd_kcontrol_new *VAR_0,
 void *VAR_1, char *VAR_2)
{
 struct snd_kcontrol_new VAR_3;

 FUNC_0(&VAR_3, VAR_0, sizeof(VAR_3));
 if (VAR_2)
  VAR_3.name = VAR_2;
 VAR_3.index = 0;

 return FUNC_1(&VAR_3, VAR_1);
}
