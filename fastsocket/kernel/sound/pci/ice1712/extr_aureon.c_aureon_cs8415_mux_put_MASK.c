
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {struct aureon_spec* spec; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct aureon_spec {int cs8415_mux; } ;


 int VAR_0 ;
 unsigned short FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (struct snd_ice1712*,int ,unsigned short) ;
 int FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 (struct snd_ice1712*) ;
 struct snd_ice1712* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_4(VAR_1);
 struct aureon_spec *VAR_4 = VAR_3->spec;
 unsigned short VAR_5, VAR_6;
 int VAR_7;

 FUNC_3(VAR_3);
 VAR_5 = FUNC_0(VAR_3, VAR_0);
 VAR_6 = VAR_5 & ~0x07;
 VAR_6 |= VAR_2->value.enumerated.item[0] & 7;
 VAR_7 = (VAR_5 != VAR_6);
 if (VAR_7)
  FUNC_1(VAR_3, VAR_0, VAR_6);
 FUNC_2(VAR_3);
 VAR_4->cs8415_mux = VAR_2->value.enumerated.item[0];
 return VAR_7;
}
