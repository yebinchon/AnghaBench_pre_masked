
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dapm_widget *VAR_3,
    struct snd_kcontrol *VAR_4, int VAR_5)
{
 if (VAR_5 & VAR_2)
  FUNC_0(VAR_0, 1);
 else if (VAR_5 & VAR_1)
  FUNC_0(VAR_0, 0);

 return 0;
}
