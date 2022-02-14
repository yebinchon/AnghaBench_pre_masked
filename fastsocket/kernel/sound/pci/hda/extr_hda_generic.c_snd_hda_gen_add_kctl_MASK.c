
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {char const* name; } ;
struct hda_gen_spec {int kctls; } ;


 int VAR_0 ;
 void* FUNC_0 (char const*,int ) ;
 struct snd_kcontrol_new* FUNC_1 (int *) ;

struct snd_kcontrol_new *
FUNC_2(struct hda_gen_spec *VAR_1, const char *VAR_2,
       const struct snd_kcontrol_new *VAR_3)
{
 struct snd_kcontrol_new *VAR_4 = FUNC_1(&VAR_1->kctls);
 if (!VAR_4)
  return ((void*)0);
 *VAR_4 = *VAR_3;
 if (VAR_2)
  VAR_4->name = FUNC_0(VAR_2, VAR_0);
 else if (VAR_4->name)
  VAR_4->name = FUNC_0(VAR_4->name, VAR_0);
 if (!VAR_4->name)
  return ((void*)0);
 return VAR_4;
}
