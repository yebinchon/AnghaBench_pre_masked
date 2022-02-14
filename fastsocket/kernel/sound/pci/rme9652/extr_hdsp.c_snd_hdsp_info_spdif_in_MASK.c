
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int items; int item; int name; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct hdsp {scalar_t__ io_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct hdsp* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2, struct snd_ctl_elem_info *VAR_3)
{
 static char *VAR_4[4] = {"Optical", "Coaxial", "Internal", "AES"};
 struct hdsp *VAR_5 = FUNC_0(VAR_2);

 VAR_3->type = VAR_1;
 VAR_3->count = 1;
 VAR_3->value.enumerated.items = ((VAR_5->io_type == VAR_0) ? 4 : 3);
 if (VAR_3->value.enumerated.item > ((VAR_5->io_type == VAR_0) ? 3 : 2))
  VAR_3->value.enumerated.item = ((VAR_5->io_type == VAR_0) ? 3 : 2);
 FUNC_1(VAR_3->value.enumerated.name, VAR_4[VAR_3->value.enumerated.item]);
 return 0;
}
