
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cs8403_bits; } ;
struct snd_ice1712 {TYPE_2__ spdif; } ;
struct TYPE_3__ {int iec958; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void FUNC_1(struct snd_ice1712 *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 FUNC_0(&VAR_1->value.iec958, VAR_0->spdif.cs8403_bits);
}
