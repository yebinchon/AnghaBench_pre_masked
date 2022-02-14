
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct snd_ctl_elem_value {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct snd_soc_codec* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (struct snd_kcontrol*,struct snd_ctl_elem_value*) ;
 int FUNC_2 (struct snd_soc_codec*,int ) ;
 int FUNC_3 (struct snd_soc_codec*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_6,
         struct snd_ctl_elem_value *VAR_7)
{
 struct snd_soc_codec *VAR_8 = FUNC_0(VAR_6);
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_7);


 if (FUNC_2(VAR_8, VAR_5)
     & (VAR_3 | VAR_4))
  FUNC_3(VAR_8,
        VAR_2,
        VAR_0 |
        VAR_1,
        VAR_0 |
        VAR_1);

 return VAR_9;
}
