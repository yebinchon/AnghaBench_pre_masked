
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_2,
 struct snd_kcontrol *VAR_3, int VAR_4)
{
 if (FUNC_0(VAR_4)) {
  FUNC_1(VAR_1, 1);
  FUNC_1(VAR_0, 1);
 } else {
  FUNC_1(VAR_0, 0);
  FUNC_2(1);
  FUNC_1(VAR_1, 0);
 }

 return 0;
}
