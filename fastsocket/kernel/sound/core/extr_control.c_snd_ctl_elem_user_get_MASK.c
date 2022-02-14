
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_element {int elem_data_size; int elem_data; } ;
struct snd_kcontrol {struct user_element* private_data; } ;
struct snd_ctl_elem_value {int value; } ;


 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct user_element *VAR_2 = VAR_0->private_data;

 FUNC_0(&VAR_1->value, VAR_2->elem_data, VAR_2->elem_data_size);
 return 0;
}
