
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_audio_info {int volume; int pch; int dev; int dest; int intr_hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm2835_audio_info*) ;
 int FUNC_1 (struct bcm2835_audio_info*) ;
 int FUNC_2 (struct bcm2835_audio_info*) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,int *,struct bcm2835_audio_info*) ;
 int FUNC_7 (int ,int ,int *,struct bcm2835_audio_info*) ;
 scalar_t__ FUNC_8 (int ,struct bcm2835_audio_info*,int,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (char*,int,char*) ;
 int FUNC_11 (struct bcm2835_audio_info*) ;

__attribute__((used)) static void
FUNC_12(void *VAR_5)
{
     struct bcm2835_audio_info *VAR_6;
     char VAR_7[VAR_2];

 VAR_6 = VAR_5;

 FUNC_4(&VAR_6->intr_hook);

 FUNC_1(VAR_6);
 FUNC_2(VAR_6);
 VAR_6->volume = 75;
 VAR_6->dest = VAR_0;

     if (FUNC_6(VAR_6->dev, &VAR_4, VAR_6)) {
  FUNC_5(VAR_6->dev, "mixer_init failed\n");
  goto no;
 }

     if (FUNC_8(VAR_6->dev, VAR_6, 1, 0)) {
  FUNC_5(VAR_6->dev, "pcm_register failed\n");
  goto no;
 }

 FUNC_7(VAR_6->dev, VAR_1, &VAR_3, VAR_6);
     FUNC_10(VAR_7, VAR_2, "at VCHIQ");
 FUNC_9(VAR_6->dev, VAR_7);

 FUNC_3(&VAR_6->pch);
 FUNC_0(VAR_6);

 FUNC_11(VAR_6);

no:
 ;
}
