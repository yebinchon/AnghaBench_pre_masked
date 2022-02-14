
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_wss {int hardware; struct snd_card* card; } ;
struct snd_kcontrol_new {int dummy; } ;
struct snd_card {int mixername; } ;


 unsigned int FUNC_0 (struct snd_kcontrol_new*) ;
 int VAR_0 ;




 scalar_t__ FUNC_1 (int) ;
 struct snd_kcontrol_new* VAR_1 ;
 struct snd_kcontrol_new* VAR_2 ;
 struct snd_kcontrol_new* VAR_3 ;
 struct snd_kcontrol_new* VAR_4 ;
 struct snd_kcontrol_new* VAR_5 ;
 struct snd_kcontrol_new* VAR_6 ;
 int FUNC_2 (struct snd_card*,int ) ;
 int FUNC_3 (struct snd_kcontrol_new*,struct snd_wss*) ;
 int FUNC_4 (struct snd_wss*) ;
 int FUNC_5 (int ,int ) ;

int FUNC_6(struct snd_wss *VAR_7)
{
 struct snd_card *VAR_8;
 unsigned int VAR_9, VAR_10;
 int VAR_11;
 struct snd_kcontrol_new *VAR_12;

 if (FUNC_1(!VAR_7 || !VAR_7->card))
  return -VAR_0;
 VAR_8 = VAR_7->card;
 FUNC_5(VAR_8->mixername, FUNC_4(VAR_7));

 if (VAR_7->hardware == 131 ||
     VAR_7->hardware == 128) {
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_1); VAR_9++) {
   if ((VAR_11 = FUNC_2(VAR_8, FUNC_3(&VAR_1[VAR_9], VAR_7))) < 0)
    return VAR_11;
  }
 } else {
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_5); VAR_9++) {
   if ((VAR_11 = FUNC_2(VAR_8, FUNC_3(&VAR_5[VAR_9], VAR_7))) < 0)
    return VAR_11;
  }
 }
 switch (VAR_7->hardware) {
 case 131:
 case 128:
  VAR_10 = FUNC_0(VAR_2);
  VAR_12 = VAR_2;
  break;
 case 130:
  VAR_10 = FUNC_0(VAR_3);
  VAR_12 = VAR_3;
  break;
 case 129:
  VAR_10 = FUNC_0(VAR_4);
  VAR_12 = VAR_4;
  break;
 default:
  VAR_10 = 0;
  VAR_12 = ((void*)0);
 }
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++, VAR_12++) {
  if ((VAR_11 = FUNC_2(VAR_8, FUNC_3(VAR_12, VAR_7))) < 0)
   return VAR_11;
 }
 if (VAR_7->hardware == 130 ||
     VAR_7->hardware == 129) {
  for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6); VAR_9++) {
   if ((VAR_11 = FUNC_2(VAR_8, FUNC_3(&VAR_6[VAR_9], VAR_7))) < 0)
    return VAR_11;
  }
 }
 return 0;
}
