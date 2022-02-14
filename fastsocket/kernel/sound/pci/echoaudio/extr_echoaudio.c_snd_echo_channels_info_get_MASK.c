
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
struct echoaudio {int num_clock_sources; int* clock_source_list; } ;


 int VAR_0 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (struct echoaudio*) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (struct echoaudio*) ;
 int FUNC_4 (struct echoaudio*) ;
 int FUNC_5 (struct echoaudio*) ;
 struct echoaudio* FUNC_6 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_value *VAR_2)
{
 struct echoaudio *VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_3 = FUNC_6(VAR_1);
 VAR_2->value.integer.value[0] = FUNC_3(VAR_3);
 VAR_2->value.integer.value[1] = FUNC_1(VAR_3);
 VAR_2->value.integer.value[2] = FUNC_4(VAR_3);
 VAR_2->value.integer.value[3] = FUNC_2(VAR_3);
 VAR_2->value.integer.value[4] = FUNC_5(VAR_3);


 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = 0;
 VAR_7 = VAR_3->num_clock_sources - 1;
 for (VAR_6 = VAR_0 - 1; VAR_6 >= 0; VAR_6--)
  if (VAR_4 & (1 << VAR_6))
   for (; VAR_7 >= 0; VAR_7--)
    if (VAR_6 == VAR_3->clock_source_list[VAR_7]) {
     VAR_5 |= 1 << VAR_7;
     break;
    }
 VAR_2->value.integer.value[5] = VAR_5;

 return 0;
}
