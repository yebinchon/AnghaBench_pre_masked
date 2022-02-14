
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_softc {scalar_t__ mii_mpd_model; } ;
typedef int phandle_t ;
typedef int pcell_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int *,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mii_softc*,int) ;
 int FUNC_4 (struct mii_softc*,int,int) ;
 int FUNC_5 (struct mii_softc*,int,int) ;
 int FUNC_6 (struct mii_softc*,int,int,int) ;

__attribute__((used)) static void
FUNC_7(struct mii_softc *VAR_1, phandle_t VAR_2,
    uint32_t VAR_3, uint32_t VAR_4, char *VAR_5, uint32_t VAR_6, int VAR_7,
    char *VAR_8, uint32_t VAR_9, int VAR_10, char *VAR_11, uint32_t VAR_12,
    int VAR_13, char *VAR_14, uint32_t VAR_15, int VAR_16)
{
 pcell_t VAR_17[1];
 int VAR_18;
 int VAR_19;

 if (VAR_1->mii_mpd_model == VAR_0)
  VAR_19 = FUNC_5(VAR_1, VAR_3, VAR_4);
 else
  VAR_19 = FUNC_3(VAR_1, VAR_4);

 if ((VAR_18 = FUNC_1(VAR_2, VAR_5)) > 0) {
  FUNC_0(VAR_2, VAR_5, VAR_17, VAR_18);
  VAR_19 &= ~(VAR_6 << VAR_7);
  VAR_19 |= (FUNC_2(VAR_17[0]) & VAR_6) << VAR_7;
 }

 if (VAR_8 != ((void*)0) && (VAR_18 = FUNC_1(VAR_2, VAR_8)) > 0) {
  FUNC_0(VAR_2, VAR_8, VAR_17, VAR_18);
  VAR_19 &= ~(VAR_9 << VAR_10);
  VAR_19 |= (FUNC_2(VAR_17[0]) & VAR_9) << VAR_10;
 }

 if (VAR_11 != ((void*)0) && (VAR_18 = FUNC_1(VAR_2, VAR_11)) > 0) {
  FUNC_0(VAR_2, VAR_11, VAR_17, VAR_18);
  VAR_19 &= ~(VAR_12 << VAR_13);
  VAR_19 |= (FUNC_2(VAR_17[0]) & VAR_12) << VAR_13;
 }

 if (VAR_14 != ((void*)0) && (VAR_18 = FUNC_1(VAR_2, VAR_14)) > 0) {
  FUNC_0(VAR_2, VAR_14, VAR_17, VAR_18);
  VAR_19 &= ~(VAR_15 << VAR_16);
  VAR_19 |= (FUNC_2(VAR_17[0]) & VAR_15) << VAR_16;
 }

 if (VAR_1->mii_mpd_model == VAR_0)
  FUNC_6(VAR_1, VAR_3, VAR_4, VAR_19);
 else
  FUNC_4(VAR_1, VAR_4, VAR_19);
}
