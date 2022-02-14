
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct twl4030_priv {int bypass_state; } ;
struct soc_mixer_control {int reg; int shift; } ;
struct snd_soc_dapm_widget {TYPE_2__* codec; TYPE_1__* kcontrols; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {scalar_t__ bias_level; struct twl4030_priv* private_data; } ;
struct TYPE_5__ {scalar_t__ private_value; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int) ;
 unsigned char FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*,int,unsigned char) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_7,
  struct snd_kcontrol *VAR_8, int VAR_9)
{
 struct soc_mixer_control *VAR_10 =
  (struct soc_mixer_control *)VAR_7->kcontrols->private_value;
 struct twl4030_priv *VAR_11 = VAR_7->codec->private_data;
 unsigned char VAR_12, VAR_13;

 VAR_12 = FUNC_1(VAR_7->codec, VAR_10->reg);







 if (VAR_10->reg == VAR_6) {

  if (VAR_12)
   VAR_11->bypass_state |= (1 << 5);
  else
   VAR_11->bypass_state &= ~(1 << 5);
 } else if (VAR_10->reg <= VAR_3) {

  if (VAR_12 & (1 << VAR_10->shift))
   VAR_11->bypass_state |=
    (1 << (VAR_10->reg - VAR_2));
  else
   VAR_11->bypass_state &=
    ~(1 << (VAR_10->reg - VAR_2));
 } else if (VAR_10->reg == VAR_5) {

  if (VAR_12 & (1 << VAR_10->shift))
   VAR_11->bypass_state |= (1 << 4);
  else
   VAR_11->bypass_state &= ~(1 << 4);
 } else {

  if (VAR_12 & (0x7 << VAR_10->shift))
   VAR_11->bypass_state |= (1 << (VAR_10->shift ? 7 : 6));
  else
   VAR_11->bypass_state &= ~(1 << (VAR_10->shift ? 7 : 6));
 }


 VAR_13 = FUNC_1(VAR_7->codec, VAR_4);
 if (VAR_11->bypass_state & 0x1F)
  VAR_13 |= VAR_1;
 else
  VAR_13 &= ~VAR_1;
 FUNC_2(VAR_7->codec, VAR_4, VAR_13);

 if (VAR_7->codec->bias_level == VAR_0) {
  if (VAR_11->bypass_state)
   FUNC_0(VAR_7->codec, 0);
  else
   FUNC_0(VAR_7->codec, 1);
 }
 return 0;
}
