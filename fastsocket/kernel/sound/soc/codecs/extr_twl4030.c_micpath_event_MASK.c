
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_enum {scalar_t__ shift_l; } ;
struct snd_soc_dapm_widget {int codec; TYPE_1__* kcontrols; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_2__ {scalar_t__ private_value; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned char FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned char) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_6,
 struct snd_kcontrol *VAR_7, int VAR_8)
{
 struct soc_enum *VAR_9 = (struct soc_enum *)VAR_6->kcontrols->private_value;
 unsigned char VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_6->codec, VAR_2);
 VAR_11 = FUNC_0(VAR_6->codec, VAR_3);



 if (VAR_9->shift_l) {

  if (VAR_10 & VAR_5)
   VAR_11 |= VAR_1;
  else
   VAR_11 &= ~VAR_1;
 } else {

  if (VAR_10 & VAR_4)
   VAR_11 |= VAR_0;
  else
   VAR_11 &= ~VAR_0;
 }

 FUNC_1(VAR_6->codec, VAR_3, VAR_11);

 return 0;
}
