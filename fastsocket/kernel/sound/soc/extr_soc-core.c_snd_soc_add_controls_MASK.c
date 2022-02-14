
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int name; int dev; struct snd_card* card; } ;
struct snd_kcontrol_new {int name; } ;
struct snd_card {int dummy; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct snd_card*,int ) ;
 int FUNC_2 (struct snd_kcontrol_new const*,struct snd_soc_codec*,int *) ;

int FUNC_3(struct snd_soc_codec *VAR_0,
 const struct snd_kcontrol_new *VAR_1, int VAR_2)
{
 struct snd_card *VAR_3 = VAR_0->card;
 int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  const struct snd_kcontrol_new *VAR_6 = &VAR_1[VAR_5];
  VAR_4 = FUNC_1(VAR_3, FUNC_2(VAR_6, VAR_0, ((void*)0)));
  if (VAR_4 < 0) {
   FUNC_0(VAR_0->dev, "%s: Failed to add %s\n",
    VAR_0->name, VAR_6->name);
   return VAR_4;
  }
 }

 return 0;
}
