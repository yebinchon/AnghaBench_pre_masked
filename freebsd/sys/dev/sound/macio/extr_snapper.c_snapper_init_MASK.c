
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct snd_mixer {int dummy; } ;
struct snapper_softc {int dummy; } ;
struct TYPE_2__ {int ACR; int RLB_GAIN; int LLB_GAIN; int RLB; int LLB; int MIXER_R; int MIXER_L; int BASS; int TREBLE; int VOLUME; int DRC; int MCR2; int MCR1; int RB6; int RB5; int RB4; int RB3; int RB2; int RB1; int RB0; int LB6; int LB5; int LB4; int LB3; int LB2; int LB1; int LB0; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 struct snapper_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_mixer*) ;
 int FUNC_2 (struct snd_mixer*,int ) ;
 TYPE_1__ VAR_28 ;
 int FUNC_3 (struct snapper_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct snd_mixer *VAR_29)
{
 struct snapper_softc *VAR_30;
 u_int VAR_31 = 0;

 VAR_30 = FUNC_0(FUNC_1(VAR_29));

        FUNC_3(VAR_30, VAR_3, VAR_28.LB0);
 FUNC_3(VAR_30, VAR_4, VAR_28.LB1);
 FUNC_3(VAR_30, VAR_5, VAR_28.LB2);
 FUNC_3(VAR_30, VAR_6, VAR_28.LB3);
 FUNC_3(VAR_30, VAR_7, VAR_28.LB4);
 FUNC_3(VAR_30, VAR_8, VAR_28.LB5);
 FUNC_3(VAR_30, VAR_9, VAR_28.LB6);
 FUNC_3(VAR_30, VAR_16, VAR_28.RB0);
 FUNC_3(VAR_30, VAR_17, VAR_28.RB1);
 FUNC_3(VAR_30, VAR_17, VAR_28.RB1);
 FUNC_3(VAR_30, VAR_18, VAR_28.RB2);
 FUNC_3(VAR_30, VAR_19, VAR_28.RB3);
 FUNC_3(VAR_30, VAR_20, VAR_28.RB4);
 FUNC_3(VAR_30, VAR_21, VAR_28.RB5);
 FUNC_3(VAR_30, VAR_22, VAR_28.RB6);
 FUNC_3(VAR_30, VAR_12, VAR_28.MCR1);
 FUNC_3(VAR_30, VAR_13, VAR_28.MCR2);
 FUNC_3(VAR_30, VAR_2, VAR_28.DRC);
 FUNC_3(VAR_30, VAR_26, VAR_28.VOLUME);
 FUNC_3(VAR_30, VAR_25, VAR_28.TREBLE);
 FUNC_3(VAR_30, VAR_1, VAR_28.BASS);
 FUNC_3(VAR_30, VAR_14, VAR_28.MIXER_L);
 FUNC_3(VAR_30, VAR_15, VAR_28.MIXER_R);
 FUNC_3(VAR_30, VAR_10, VAR_28.LLB);
 FUNC_3(VAR_30, VAR_23, VAR_28.RLB);
 FUNC_3(VAR_30, VAR_11, VAR_28.LLB_GAIN);
 FUNC_3(VAR_30, VAR_24, VAR_28.RLB_GAIN);
 FUNC_3(VAR_30, VAR_0, VAR_28.ACR);

 VAR_31 |= VAR_27;
 FUNC_2(VAR_29, VAR_31);

 return (0);
}
