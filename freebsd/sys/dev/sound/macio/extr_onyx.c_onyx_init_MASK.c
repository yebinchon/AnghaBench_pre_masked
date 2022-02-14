
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct snd_mixer {int dummy; } ;
struct onyx_softc {int dummy; } ;
struct TYPE_2__ {int INFO_4; int INFO_3; int INFO_2; int INFO_1; int ADC_HPF_BP; int ADC_CONTROL; int OUT_PHASE; int DAC_FILTER; int DAC_DEEMPH; int DAC_CONTROL; int CONTROL; int RIGHT_ATTN; int LEFT_ATTN; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct onyx_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_mixer*) ;
 int FUNC_2 (struct snd_mixer*,int ) ;
 TYPE_1__ VAR_14 ;
 int FUNC_3 (struct onyx_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct snd_mixer *VAR_15)
{
 struct onyx_softc *VAR_16;
 u_int VAR_17 = 0;

 VAR_16 = FUNC_0(FUNC_1(VAR_15));

 FUNC_3(VAR_16, VAR_10, VAR_14.LEFT_ATTN);
 FUNC_3(VAR_16, VAR_12, VAR_14.RIGHT_ATTN);
 FUNC_3(VAR_16, VAR_2, VAR_14.CONTROL);
 FUNC_3(VAR_16, VAR_3,
        VAR_14.DAC_CONTROL);
 FUNC_3(VAR_16, VAR_4, VAR_14.DAC_DEEMPH);
 FUNC_3(VAR_16, VAR_5, VAR_14.DAC_FILTER);
 FUNC_3(VAR_16, VAR_11, VAR_14.OUT_PHASE);
 FUNC_3(VAR_16, VAR_0,
        VAR_14.ADC_CONTROL);
 FUNC_3(VAR_16, VAR_1, VAR_14.ADC_HPF_BP);
 FUNC_3(VAR_16, VAR_6, VAR_14.INFO_1);
 FUNC_3(VAR_16, VAR_7, VAR_14.INFO_2);
 FUNC_3(VAR_16, VAR_8, VAR_14.INFO_3);
 FUNC_3(VAR_16, VAR_9, VAR_14.INFO_4);

 VAR_17 |= VAR_13;
 FUNC_2(VAR_15, VAR_17);

 return (0);
}
