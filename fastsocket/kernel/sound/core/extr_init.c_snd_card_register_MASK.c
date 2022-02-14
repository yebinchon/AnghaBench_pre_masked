
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {size_t number; char* id; int * card_dev; int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int ,int ,int ,struct snd_card*,char*,size_t) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct snd_card*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_4 ;
 int FUNC_8 (struct snd_card*,char*) ;
 struct snd_card** VAR_5 ;
 int FUNC_9 (struct snd_card*) ;
 int FUNC_10 (struct snd_card*,int ) ;
 int VAR_6 ;

int FUNC_11(struct snd_card *VAR_7)
{
 int VAR_8;

 if (FUNC_7(!VAR_7))
  return -VAR_0;

 if (!VAR_7->card_dev) {
  VAR_7->card_dev = FUNC_2(VAR_6, VAR_7->dev,
            FUNC_1(0, 0), VAR_7,
            "card%i", VAR_7->number);
  if (FUNC_0(VAR_7->card_dev))
   VAR_7->card_dev = ((void*)0);
 }

 if ((VAR_8 = FUNC_9(VAR_7)) < 0)
  return VAR_8;
 FUNC_5(&VAR_4);
 if (VAR_5[VAR_7->number]) {

  FUNC_6(&VAR_4);
  return 0;
 }
 FUNC_8(VAR_7, VAR_7->id[0] == '\0' ? ((void*)0) : VAR_7->id);
 VAR_5[VAR_7->number] = VAR_7;
 FUNC_6(&VAR_4);
 FUNC_4(VAR_7);





 if (VAR_7->card_dev) {
  VAR_8 = FUNC_3(VAR_7->card_dev, &VAR_2);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_8 = FUNC_3(VAR_7->card_dev, &VAR_3);
  if (VAR_8 < 0)
   return VAR_8;
 }

 return 0;
}
