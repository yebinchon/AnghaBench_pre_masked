
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct truephy_dsp {int index; int data; } ;
struct mii_softc {scalar_t__ mii_mpd_model; TYPE_1__* mii_pdata; } ;
struct TYPE_2__ {int mii_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mii_softc*) ;
 int FUNC_5 (struct truephy_dsp*) ;
 struct truephy_dsp* VAR_17 ;

__attribute__((used)) static void
FUNC_6(struct mii_softc *VAR_18)
{
 int VAR_19;

 if (VAR_18->mii_mpd_model == VAR_4) {
  FUNC_4(VAR_18);
  return;
 }

 for (VAR_19 = 0; VAR_19 < 2; ++VAR_19) {
  FUNC_0(VAR_18, VAR_5);
  FUNC_0(VAR_18, VAR_6);

  FUNC_0(VAR_18, VAR_10);
  FUNC_1(VAR_18, VAR_10,
     VAR_11 | VAR_13);

  FUNC_1(VAR_18, VAR_15, VAR_16);
  FUNC_0(VAR_18, VAR_14);

  FUNC_1(VAR_18, VAR_10, VAR_13);
 }

 FUNC_0(VAR_18, VAR_3);
 FUNC_0(VAR_18, VAR_10);
 FUNC_1(VAR_18, VAR_3, VAR_0 | VAR_1 | VAR_2);
 FUNC_1(VAR_18, VAR_10,
    VAR_11 | VAR_13 | VAR_12);

 for (VAR_19 = 0; VAR_19 < FUNC_5(VAR_17); ++VAR_19) {
  const struct truephy_dsp *VAR_20 = &VAR_17[VAR_19];

  FUNC_1(VAR_18, VAR_15, VAR_20->index);
  FUNC_1(VAR_18, VAR_14, VAR_20->data);

  FUNC_1(VAR_18, VAR_15, VAR_20->index);
  FUNC_0(VAR_18, VAR_14);
 }

 FUNC_0(VAR_18, VAR_3);
 FUNC_0(VAR_18, VAR_10);
 FUNC_1(VAR_18, VAR_3, VAR_0 | VAR_2);
 FUNC_1(VAR_18, VAR_10, VAR_13);

 FUNC_4(VAR_18);

 if (FUNC_2((FUNC_3(VAR_18->mii_pdata->mii_ifp)) > 2048)) {
  int VAR_21;

  VAR_21 = FUNC_0(VAR_18, VAR_7);
  VAR_21 &= ~VAR_9;
  VAR_21 |= VAR_8;
  FUNC_1(VAR_18, VAR_7, VAR_21);
 }
}
