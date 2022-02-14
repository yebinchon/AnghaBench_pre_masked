
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct snd_kcontrol {int private_value; struct oxygen* private_data; } ;
struct TYPE_4__ {int * value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct TYPE_6__ {int (* ac97_switch ) (struct oxygen*,unsigned int,int) ;} ;
struct oxygen {int mutex; TYPE_3__ model; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct oxygen*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct oxygen*,unsigned int,unsigned int) ;
 int FUNC_4 (struct oxygen*,unsigned int,unsigned int,int) ;
 int FUNC_5 (struct oxygen*,int ,int ,int ,int ) ;
 int FUNC_6 (struct oxygen*,unsigned int,int) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_11,
      struct snd_ctl_elem_value *VAR_12)
{
 struct oxygen *VAR_13 = VAR_11->private_data;
 unsigned int VAR_14 = (VAR_11->private_value >> 24) & 1;
 unsigned int VAR_15 = VAR_11->private_value & 0xff;
 unsigned int VAR_16 = (VAR_11->private_value >> 8) & 0xff;
 int VAR_17 = VAR_11->private_value & (1 << 16);
 u16 VAR_18, VAR_19;
 int VAR_20;

 FUNC_1(&VAR_13->mutex);
 VAR_18 = FUNC_3(VAR_13, VAR_14, VAR_15);
 VAR_19 = VAR_18;
 if (!VAR_12->value.integer.value[0] ^ !VAR_17)
  VAR_19 |= 1 << VAR_16;
 else
  VAR_19 &= ~(1 << VAR_16);
 VAR_20 = VAR_19 != VAR_18;
 if (VAR_20) {
  FUNC_4(VAR_13, VAR_14, VAR_15, VAR_19);
  if (VAR_14 == 0 && VAR_13->model.ac97_switch)
   VAR_13->model.ac97_switch(VAR_13, VAR_15, VAR_19 & 0x8000);
  if (VAR_15 == VAR_2) {
   FUNC_5(VAR_13, 0, VAR_5,
       VAR_19 & 0x8000 ?
       VAR_6 : 0, VAR_6);
   if (!(VAR_19 & 0x8000)) {
    FUNC_0(VAR_13, VAR_10);
    FUNC_0(VAR_13, VAR_8);
    FUNC_0(VAR_13, VAR_7);
   }
  } else if ((VAR_15 == VAR_3 || VAR_15 == VAR_1 ||
       VAR_15 == VAR_4 || VAR_15 == VAR_0) &&
      VAR_16 == 15 && !(VAR_19 & 0x8000)) {
   FUNC_0(VAR_13, VAR_9);
   FUNC_5(VAR_13, 0, VAR_5,
       VAR_6, VAR_6);
  }
 }
 FUNC_2(&VAR_13->mutex);
 return VAR_20;
}
