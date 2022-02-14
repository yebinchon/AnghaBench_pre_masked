
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int status; } ;
struct TYPE_4__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; int id; } ;
struct snd_ca0106 {int * spdif_bits; } ;


 int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (struct snd_kcontrol*,int *) ;
 struct snd_ca0106* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
                                 struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ca0106 *VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3 = FUNC_1(VAR_0, &VAR_1->id);

 FUNC_0(VAR_1->value.iec958.status,
     VAR_2->spdif_bits[VAR_3]);
        return 0;
}
