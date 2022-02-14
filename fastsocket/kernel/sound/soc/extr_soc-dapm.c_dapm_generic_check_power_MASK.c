
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int codec; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_dapm_widget*) ;
 int FUNC_2 (struct snd_soc_dapm_widget*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_0)
{
 int VAR_1, VAR_2;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_0->codec);
 VAR_2 = FUNC_2(VAR_0);
 FUNC_0(VAR_0->codec);
 return VAR_2 != 0 && VAR_1 != 0;
}
