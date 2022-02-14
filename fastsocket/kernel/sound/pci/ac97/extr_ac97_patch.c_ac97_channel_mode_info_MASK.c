
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int private_value; } ;
struct snd_ctl_elem_info {int dummy; } ;


 int FUNC_0 (struct snd_kcontrol*,struct snd_ctl_elem_info*,char const**,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_info *VAR_1)
{
 static const char *VAR_2[] = { "2ch", "4ch", "6ch", "8ch" };
 return FUNC_0(VAR_0, VAR_1, VAR_2,
  VAR_0->private_value);
}
