
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct platform_device {int dummy; } ;
struct ac97_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int* VAR_8 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (int ,int ,int,int ,int) ;
 int FUNC_10 (int ,int ,int,int ,int) ;
 int VAR_9 ;
 int FUNC_11 (int *,int,int,int *) ;
 size_t VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int FUNC_12 (int ,int,int,int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_13,
       struct snd_soc_dai *VAR_14)
{
 int VAR_15 = 0;
 VAR_8 = (int *)FUNC_1(VAR_5);
 if (VAR_8 == ((void*)0))
  return -VAR_4;

 if (FUNC_7(VAR_12[VAR_10], "soc-audio")) {
  FUNC_8("Requesting Peripherals failed\n");
  VAR_15 = -VAR_2;
  goto peripheral_err;
 }
 VAR_9 = FUNC_11(&VAR_11[VAR_10], 2, sizeof(struct ac97_frame), ((void*)0));

 if (!VAR_9) {
  VAR_15 = -VAR_3;
  goto sport_err;
 }




 VAR_15 = FUNC_12(VAR_9, 16, 0x1F, 1);

 if (VAR_15) {
  FUNC_8("SPORT is busy!\n");
  VAR_15 = -VAR_1;
  goto sport_config_err;
 }

 VAR_15 = FUNC_9(VAR_9, VAR_6, 0xF, 0, (16*16-1));
 if (VAR_15) {
  FUNC_8("SPORT is busy!\n");
  VAR_15 = -VAR_1;
  goto sport_config_err;
 }

 VAR_15 = FUNC_10(VAR_9, VAR_7, 0xF, 0, (16*16-1));
 if (VAR_15) {
  FUNC_8("SPORT is busy!\n");
  VAR_15 = -VAR_1;
  goto sport_config_err;
 }

 return 0;

sport_config_err:
 FUNC_5(VAR_9);
sport_err:




 FUNC_6(VAR_12[VAR_10]);
peripheral_err:
 FUNC_0((unsigned long)VAR_8);
 VAR_8 = ((void*)0);

 return VAR_15;
}
