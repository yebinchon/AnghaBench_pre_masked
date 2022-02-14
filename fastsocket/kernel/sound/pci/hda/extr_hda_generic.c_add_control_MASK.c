
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol_new {int index; unsigned long private_value; int subdevice; } ;
struct hda_gen_spec {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 struct snd_kcontrol_new* FUNC_1 (struct hda_gen_spec*,char const*,int *) ;

__attribute__((used)) static struct snd_kcontrol_new *
FUNC_2(struct hda_gen_spec *VAR_2, int VAR_3, const char *VAR_4,
         int VAR_5, unsigned long VAR_6)
{
 struct snd_kcontrol_new *VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_4, &VAR_1[VAR_3]);
 if (!VAR_7)
  return ((void*)0);
 VAR_7->index = VAR_5;
 if (FUNC_0(VAR_6))
  VAR_7->subdevice = VAR_0;
 VAR_7->private_value = VAR_6;
 return VAR_7;
}
