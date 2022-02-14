
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ctl_elem_info {int dummy; } ;
struct user_element {struct snd_ctl_elem_info info; } ;
struct snd_kcontrol {struct user_element* private_data; } ;



__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_info *VAR_1)
{
 struct user_element *VAR_2 = VAR_0->private_data;

 *VAR_1 = VAR_2->info;
 return 0;
}
