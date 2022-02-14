
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int dummy; } ;
struct alc_spec {scalar_t__ num_mixers; struct snd_kcontrol_new const** mixers; } ;


 scalar_t__ FUNC_0 (struct snd_kcontrol_new const**) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct alc_spec *VAR_0, const struct snd_kcontrol_new *VAR_1)
{
 if (FUNC_1(VAR_0->num_mixers >= FUNC_0(VAR_0->mixers)))
  return;
 VAR_0->mixers[VAR_0->num_mixers++] = VAR_1;
}
