
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int spdif_sr; } ;
typedef TYPE_3__ vortex_t ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int* status; } ;
struct TYPE_6__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_5, struct snd_ctl_elem_value *VAR_6)
{
 vortex_t *VAR_7 = FUNC_0(VAR_5);
 VAR_6->value.iec958.status[0] = 0x00;
 VAR_6->value.iec958.status[1] = VAR_1|VAR_0;
 VAR_6->value.iec958.status[2] = 0x00;
 switch (VAR_7->spdif_sr) {
 case 32000: VAR_6->value.iec958.status[3] = VAR_2; break;
 case 44100: VAR_6->value.iec958.status[3] = VAR_3; break;
 case 48000: VAR_6->value.iec958.status[3] = VAR_4; break;
 }
 return 0;
}
