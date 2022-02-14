
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_codec {int dev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (struct snd_soc_codec*,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_codec *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = 0;

 FUNC_0(VAR_2->dev, "Waiting for DC servo...\n");
 do {
  VAR_4++;
  FUNC_2(1);
  VAR_3 = FUNC_3(VAR_2, VAR_1);
  FUNC_0(VAR_2->dev, "DC servo status: %x\n", VAR_3);
 } while ((VAR_3 & VAR_0)
   != VAR_0 && VAR_4 < 1000);

 if ((VAR_3 & VAR_0)
     != VAR_0)
  FUNC_1(VAR_2->dev, "Timed out waiting for DC Servo\n");
}
