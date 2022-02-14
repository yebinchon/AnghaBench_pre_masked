
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
struct echoaudio {int* input_gain; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct echoaudio*) ;
 int FUNC_1 (struct echoaudio*,int,int) ;
 struct echoaudio* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct echoaudio*) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_2,
       struct snd_ctl_elem_value *VAR_3)
{
 struct echoaudio *VAR_4;
 int VAR_5, VAR_6, VAR_7;

 VAR_7 = 0;
 VAR_4 = FUNC_2(VAR_2);
 FUNC_3(&VAR_4->lock);
 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++) {
  VAR_6 = VAR_3->value.integer.value[VAR_5];

  if (VAR_6 < VAR_1 || VAR_6 > VAR_0)
   continue;
  if (VAR_4->input_gain[VAR_5] != VAR_6) {
   FUNC_1(VAR_4, VAR_5, VAR_6);
   VAR_7 = 1;
  }
 }
 if (VAR_7)
  FUNC_5(VAR_4);
 FUNC_4(&VAR_4->lock);
 return VAR_7;
}
