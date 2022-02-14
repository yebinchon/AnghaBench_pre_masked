
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_mixer {int dummy; } ;
struct a10codec_info {int dev; int ** res; } ;
typedef int reg ;
typedef scalar_t__ phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int analogref ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,char*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int * FUNC_2 (int ,int ,int*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (struct a10codec_info*,int ,int,int ) ;
 struct a10codec_info* FUNC_4 (struct snd_mixer*) ;
 int FUNC_5 (struct snd_mixer*,int) ;
 int FUNC_6 (struct snd_mixer*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int
FUNC_10(struct snd_mixer *VAR_16)
{
 int VAR_17=1;
 pcell_t VAR_18[2];
 phandle_t VAR_19;
 struct a10codec_info *VAR_20 = FUNC_4(VAR_16);

 if (FUNC_0(FUNC_7(VAR_20->dev), "allwinner,codec-analog-controls",
     &VAR_19, sizeof(VAR_19)) <= 0) {
  return (VAR_0);
 }

 if (FUNC_0(FUNC_1(VAR_19), "reg",
     VAR_18, sizeof(VAR_18)) <= 0) {
  return (VAR_0);
 }

 VAR_20->res[1] = FUNC_2(VAR_20->dev, VAR_15, &VAR_17, VAR_18[0],
     VAR_18[0]+VAR_18[1], VAR_18[1], VAR_6 );

 if (VAR_20->res[1] == ((void*)0)) {
  return (VAR_0);
 }

 FUNC_5(VAR_16, VAR_12 | VAR_14 | VAR_13 |
     VAR_11 | VAR_9 | VAR_10);
 FUNC_6(VAR_16, VAR_11 | VAR_9 | VAR_10 |
     VAR_8);

 FUNC_9(VAR_20->dev, FUNC_8(VAR_20->dev) | VAR_7);


 FUNC_3(VAR_20, VAR_5, VAR_1, 0);
 FUNC_3(VAR_20, VAR_4,
     VAR_2 | VAR_3, 0);

 return (0);
}
