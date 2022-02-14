
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct via82xx {int port; unsigned char** playback_volume; } ;
struct TYPE_4__ {unsigned int subdevice; } ;
struct snd_kcontrol {TYPE_1__ id; } ;
struct TYPE_5__ {unsigned char* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;


 unsigned char VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char,scalar_t__) ;
 struct via82xx* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_2,
          struct snd_ctl_elem_value *VAR_3)
{
 struct via82xx *VAR_4 = FUNC_1(VAR_2);
 unsigned int VAR_5 = VAR_2->id.subdevice;
 unsigned long VAR_6 = VAR_4->port + 0x10 * VAR_5;
 unsigned char VAR_7;
 int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
  VAR_7 = VAR_3->value.integer.value[VAR_8];
  if (VAR_7 > VAR_0)
   VAR_7 = VAR_0;
  VAR_7 = VAR_0 - VAR_7;
  VAR_9 |= VAR_7 != VAR_4->playback_volume[VAR_5][VAR_8];
  if (VAR_9) {
   VAR_4->playback_volume[VAR_5][VAR_8] = VAR_7;
   FUNC_0(VAR_7, VAR_6 + VAR_1 + VAR_8);
  }
 }
 return VAR_9;
}
