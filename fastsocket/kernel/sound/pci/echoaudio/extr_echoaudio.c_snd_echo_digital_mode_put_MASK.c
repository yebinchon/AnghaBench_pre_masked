
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {unsigned short* item; } ;
struct TYPE_5__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct echoaudio {unsigned short num_digital_modes; unsigned short* digital_mode_list; unsigned short digital_mode; int mode_mutex; TYPE_3__* clock_src_ctl; int card; int opencount; } ;
struct TYPE_6__ {int id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct echoaudio*,unsigned short) ;
 int FUNC_5 (int ,int ,int *) ;
 struct echoaudio* FUNC_6 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_3,
         struct snd_ctl_elem_value *VAR_4)
{
 struct echoaudio *VAR_5;
 int VAR_6;
 unsigned short VAR_7, VAR_8;

 VAR_6 = 0;
 VAR_5 = FUNC_6(VAR_3);

 VAR_7 = VAR_4->value.enumerated.item[0];
 if (VAR_7 >= VAR_5->num_digital_modes)
  return -VAR_1;
 VAR_8 = VAR_5->digital_mode_list[VAR_7];

 if (VAR_8 != VAR_5->digital_mode) {


  FUNC_2(&VAR_5->mode_mutex);




  if (FUNC_1(&VAR_5->opencount)) {
   VAR_6 = -VAR_0;
  } else {
   VAR_6 = FUNC_4(VAR_5, VAR_8);

   if (VAR_6 > 0 && VAR_5->clock_src_ctl) {
    FUNC_5(VAR_5->card,
            VAR_2,
            &VAR_5->clock_src_ctl->id);
    FUNC_0(("SDM() =%d\n", VAR_6));
   }
   if (VAR_6 >= 0)
    VAR_6 = 1;
  }
  FUNC_3(&VAR_5->mode_mutex);
 }
 return VAR_6;
}
