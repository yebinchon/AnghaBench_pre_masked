
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sb {int hardware; struct snd_card* card; } ;
struct snd_card {int mixername; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct snd_sb*,int ,int ,int ,int ,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(struct snd_sb *VAR_11)
{
 struct snd_card *VAR_12;
 int VAR_13;

 if (FUNC_1(!VAR_11 || !VAR_11->card))
  return -VAR_0;

 VAR_12 = VAR_11->card;

 switch (VAR_11->hardware) {
 case 136:
  return 0;
 case 134:
 case 133:
  if ((VAR_13 = FUNC_2(VAR_11,
         VAR_7,
         FUNC_0(VAR_7),
         VAR_8,
         FUNC_0(VAR_8),
         "CTL1335")) < 0)
   return VAR_13;
  break;
 case 128:
  if ((VAR_13 = FUNC_2(VAR_11,
         VAR_9,
         FUNC_0(VAR_9),
         VAR_10,
         FUNC_0(VAR_10),
         "CTL1345")) < 0)
   return VAR_13;
  break;
 case 135:
 case 132:
 case 130:
  if ((VAR_13 = FUNC_2(VAR_11,
         VAR_5,
         FUNC_0(VAR_5),
         VAR_6,
         FUNC_0(VAR_6),
         "CTL1745")) < 0)
   return VAR_13;
  break;
 case 131:
  if ((VAR_13 = FUNC_2(VAR_11,
         VAR_1,
         FUNC_0(VAR_1),
         VAR_2,
         FUNC_0(VAR_2),
         "ALS4000")) < 0)
   return VAR_13;
  break;
 case 129:
  if ((VAR_13 = FUNC_2(VAR_11,
         VAR_3,
         FUNC_0(VAR_3),
         VAR_4,
         FUNC_0(VAR_4),
         "DT019X")) < 0)
  break;
 default:
  FUNC_3(VAR_12->mixername, "???");
 }
 return 0;
}
