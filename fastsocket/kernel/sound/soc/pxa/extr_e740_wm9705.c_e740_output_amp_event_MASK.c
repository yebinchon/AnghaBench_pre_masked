
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dapm_widget *VAR_4,
    struct snd_kcontrol *VAR_5, int VAR_6)
{
 if (VAR_6 & VAR_2)
  VAR_3 |= VAR_0;
 else if (VAR_6 & VAR_1)
  VAR_3 &= ~VAR_0;

 FUNC_0(VAR_3);

 return 0;
}
