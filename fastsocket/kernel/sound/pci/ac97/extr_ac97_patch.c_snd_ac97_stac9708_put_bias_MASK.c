
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct snd_ac97 {int page_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_ac97*,int ,int,int) ;
 int FUNC_3 (struct snd_ac97*,int ,int) ;
 struct snd_ac97* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ac97 *VAR_4 = FUNC_4(VAR_2);
 int VAR_5;

 FUNC_0(&VAR_4->page_mutex);
 FUNC_3(VAR_4, VAR_0, 0xabba);
 VAR_5 = FUNC_2(VAR_4, VAR_1, 0x0010,
       (VAR_3->value.integer.value[0] & 1) << 4);
 FUNC_3(VAR_4, VAR_0, 0);
 FUNC_1(&VAR_4->page_mutex);
 return VAR_5;
}
