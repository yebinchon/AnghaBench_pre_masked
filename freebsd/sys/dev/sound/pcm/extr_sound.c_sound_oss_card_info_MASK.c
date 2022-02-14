
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snddev_info {int status; int dev; } ;
struct TYPE_3__ {scalar_t__ ack_count; scalar_t__ intr_count; int hw_info; int longname; int shortname; int card; } ;
typedef TYPE_1__ oss_card_info ;


 int VAR_0 ;
 int FUNC_0 (struct snddev_info*) ;
 int FUNC_1 (struct snddev_info*) ;
 int FUNC_2 (struct snddev_info*) ;
 int FUNC_3 (struct snddev_info*) ;
 int FUNC_4 (int *) ;
 struct snddev_info* FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * VAR_1 ;
 int FUNC_8 (int ,int ,int) ;

int
FUNC_9(oss_card_info *VAR_2)
{
 struct snddev_info *VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = 0;

 for (VAR_4 = 0; VAR_1 != ((void*)0) &&
     VAR_4 < FUNC_4(VAR_1); VAR_4++) {
  VAR_3 = FUNC_5(VAR_1, VAR_4);
  if (!FUNC_1(VAR_3))
   continue;

  if (VAR_5++ != VAR_2->card)
   continue;

  FUNC_3(VAR_3);
  FUNC_0(VAR_3);

  FUNC_8(VAR_2->shortname, FUNC_7(VAR_3->dev),
      sizeof(VAR_2->shortname));
  FUNC_8(VAR_2->longname, FUNC_6(VAR_3->dev),
      sizeof(VAR_2->longname));
  FUNC_8(VAR_2->hw_info, VAR_3->status, sizeof(VAR_2->hw_info));
  VAR_2->intr_count = VAR_2->ack_count = 0;

  FUNC_2(VAR_3);

  return (0);
 }
 return (VAR_0);
}
