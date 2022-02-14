
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pmac {scalar_t__ model; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int max; scalar_t__ min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct snd_pmac* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_4,
      struct snd_ctl_elem_info *VAR_5)
{
 struct snd_pmac *VAR_6 = FUNC_0(VAR_4);
 VAR_5->type = VAR_1;
 VAR_5->count = 1;
 VAR_5->value.integer.min = 0;
 VAR_5->value.integer.max =
  VAR_6->model == VAR_0 ? VAR_2 : VAR_3;
 return 0;
}
