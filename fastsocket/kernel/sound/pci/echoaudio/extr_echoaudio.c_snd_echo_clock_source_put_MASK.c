
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {unsigned int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct echoaudio {unsigned int input_clock_types; unsigned int* clock_source_list; unsigned int input_clock; int mode_mutex; int lock; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct echoaudio*,unsigned int) ;
 struct echoaudio* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 struct echoaudio *VAR_3;
 int VAR_4;
 unsigned int VAR_5, VAR_6;

 VAR_4 = 0;
 VAR_3 = FUNC_4(VAR_1);
 VAR_5 = VAR_2->value.enumerated.item[0];
 if (VAR_5 >= VAR_3->input_clock_types)
  return -VAR_0;
 VAR_6 = VAR_3->clock_source_list[VAR_5];
 if (VAR_3->input_clock != VAR_6) {
  FUNC_1(&VAR_3->mode_mutex);
  FUNC_5(&VAR_3->lock);
  if ((VAR_4 = FUNC_3(VAR_3, VAR_6)) == 0)
   VAR_4 = 1;
  FUNC_6(&VAR_3->lock);
  FUNC_2(&VAR_3->mode_mutex);
 }

 if (VAR_4 < 0)
  FUNC_0(("seticlk val%d err 0x%x\n", VAR_6, VAR_4));

 return VAR_4;
}
