
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ice1712 {struct aureon_spec* spec; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct aureon_spec {unsigned int* vol; int * master; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (struct snd_ice1712*,int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_value *VAR_2)
{
 struct snd_ice1712 *VAR_3 = FUNC_2(VAR_1);
 struct aureon_spec *VAR_4 = VAR_3->spec;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_8 = VAR_1->private_value >> 8;
 VAR_7 = VAR_1->private_value & 0xff;
 FUNC_1(VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++) {
  unsigned int VAR_10 = VAR_2->value.integer.value[VAR_5];
  if (VAR_10 > 0x7f)
   continue;
  VAR_10 |= VAR_4->vol[VAR_7+VAR_5];
  if (VAR_10 != VAR_4->vol[VAR_7+VAR_5]) {
   VAR_4->vol[VAR_7+VAR_5] = VAR_10;
   VAR_6 = VAR_0 + VAR_7 + VAR_5;
   FUNC_3(VAR_3, VAR_6, VAR_4->vol[VAR_7 + VAR_5],
       VAR_4->master[VAR_5]);
   VAR_9 = 1;
  }
 }
 FUNC_0(VAR_3);
 return VAR_9;
}
