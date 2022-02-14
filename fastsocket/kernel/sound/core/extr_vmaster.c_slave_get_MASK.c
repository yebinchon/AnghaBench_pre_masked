
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_value {int dummy; } ;
struct link_slave {int dummy; } ;


 int FUNC_0 (struct link_slave*,struct snd_ctl_elem_value*) ;
 struct link_slave* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
       struct snd_ctl_elem_value *VAR_1)
{
 struct link_slave *VAR_2 = FUNC_1(VAR_0);
 return FUNC_0(VAR_2, VAR_1);
}
