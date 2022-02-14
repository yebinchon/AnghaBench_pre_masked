
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_i2c_device {int bus; struct cs8427* private_data; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_5__ {TYPE_1__ iec958; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int def_status; } ;
struct cs8427 {TYPE_3__ playback; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct snd_i2c_device* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
    struct snd_ctl_elem_value *VAR_1)
{
 struct snd_i2c_device *VAR_2 = FUNC_3(VAR_0);
 struct cs8427 *VAR_3 = VAR_2->private_data;

 FUNC_1(VAR_2->bus);
 FUNC_0(VAR_1->value.iec958.status, VAR_3->playback.def_status, 24);
 FUNC_2(VAR_2->bus);
 return 0;
}
