
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {scalar_t__ max; scalar_t__ min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
          struct snd_ctl_elem_info *VAR_3)
{
 VAR_3->type = VAR_0;
 VAR_3->count = 2;
 VAR_3->value.integer.min = 0;
 VAR_3->value.integer.max = FUNC_0(VAR_1) - 1;
 return 0;
}
