
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct tumbler_softc {int dummy; } ;
struct snd_mixer {int dummy; } ;
struct TYPE_2__ {int MIXER2; int MIXER1; int BASS; int TREBLE; int VOLUME; int DRC; int MCR; int RB5; int RB4; int RB3; int RB2; int RB1; int RB0; int LB5; int LB4; int LB3; int LB2; int LB1; int LB0; } ;


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
 struct tumbler_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_mixer*) ;
 int FUNC_2 (struct snd_mixer*,int ) ;
 TYPE_1__ VAR_20 ;
 int FUNC_3 (struct tumbler_softc*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct snd_mixer *VAR_21)
{
 struct tumbler_softc *VAR_22;
 u_int VAR_23 = 0;

 VAR_22 = FUNC_0(FUNC_1(VAR_21));

        FUNC_3(VAR_22, VAR_3, VAR_20.LB0);
 FUNC_3(VAR_22, VAR_4, VAR_20.LB1);
 FUNC_3(VAR_22, VAR_5, VAR_20.LB2);
 FUNC_3(VAR_22, VAR_6, VAR_20.LB3);
 FUNC_3(VAR_22, VAR_7, VAR_20.LB4);
 FUNC_3(VAR_22, VAR_8, VAR_20.LB5);
 FUNC_3(VAR_22, VAR_12, VAR_20.RB0);
 FUNC_3(VAR_22, VAR_13, VAR_20.RB1);
 FUNC_3(VAR_22, VAR_13, VAR_20.RB1);
 FUNC_3(VAR_22, VAR_14, VAR_20.RB2);
 FUNC_3(VAR_22, VAR_15, VAR_20.RB3);
 FUNC_3(VAR_22, VAR_16, VAR_20.RB4);
 FUNC_3(VAR_22, VAR_17, VAR_20.RB5);
 FUNC_3(VAR_22, VAR_9, VAR_20.MCR);
 FUNC_3(VAR_22, VAR_2, VAR_20.DRC);
        FUNC_3(VAR_22, VAR_19, VAR_20.VOLUME);
 FUNC_3(VAR_22, VAR_18, VAR_20.TREBLE);
 FUNC_3(VAR_22, VAR_1, VAR_20.BASS);
 FUNC_3(VAR_22, VAR_10, VAR_20.MIXER1);
 FUNC_3(VAR_22, VAR_11, VAR_20.MIXER2);

 VAR_23 |= VAR_0;
 FUNC_2(VAR_21, VAR_23);

 return (0);
}
