
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcxhr {TYPE_1__* mgr; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int items; int item; int name; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_3__ value; int type; } ;
struct TYPE_4__ {scalar_t__ board_has_mic; scalar_t__ board_has_aes1; } ;


 int VAR_0 ;
 struct snd_pcxhr* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,char const*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_info *VAR_2)
{
 static const char *VAR_3[5] = {
  "Line", "Digital", "Digi+SRC", "Mic", "Line+Mic"
 };
 int VAR_4;
 struct snd_pcxhr *VAR_5 = FUNC_0(VAR_1);

 VAR_4 = 2;
 if (VAR_5->mgr->board_has_aes1) {
  VAR_4 = 3;
  if (VAR_5->mgr->board_has_mic)
   VAR_4 = 5;
 }
 VAR_2->type = VAR_0;
 VAR_2->count = 1;
 VAR_2->value.enumerated.items = VAR_4;
 if (VAR_2->value.enumerated.item > (VAR_4-1))
  VAR_2->value.enumerated.item = VAR_4-1;
 FUNC_1(VAR_2->value.enumerated.name,
  VAR_3[VAR_2->value.enumerated.item]);
 return 0;
}
