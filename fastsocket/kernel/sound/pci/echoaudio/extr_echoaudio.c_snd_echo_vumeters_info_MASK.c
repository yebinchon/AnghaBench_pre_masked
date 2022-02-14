
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {int* d; } ;
struct TYPE_4__ {scalar_t__ max; int min; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_3__ dimen; TYPE_2__ value; int type; } ;
struct echoaudio {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct echoaudio* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
      struct snd_ctl_elem_info *VAR_3)
{
 struct echoaudio *VAR_4;

 VAR_4 = FUNC_0(VAR_2);
 VAR_3->type = VAR_1;
 VAR_3->count = 96;
 VAR_3->value.integer.min = VAR_0;
 VAR_3->value.integer.max = 0;



 VAR_3->dimen.d[0] = 2;

 VAR_3->dimen.d[1] = 16;
 VAR_3->dimen.d[2] = 2;
 return 0;
}
