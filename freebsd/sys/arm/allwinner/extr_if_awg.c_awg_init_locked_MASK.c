
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_data {int dummy; } ;
struct awg_softc {int stat_ch; int ifp; int miibus; } ;
typedef int if_t ;


 int FUNC_0 (struct awg_softc*) ;
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
 int FUNC_1 (struct awg_softc*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct awg_softc*,int ,int) ;
 int VAR_18 ;
 int FUNC_3 (struct awg_softc*) ;
 int FUNC_4 (struct awg_softc*) ;
 scalar_t__ VAR_19 ;
 int FUNC_5 (struct awg_softc*) ;
 int VAR_20 ;
 int FUNC_6 (int *,int ,int ,struct awg_softc*) ;
 struct mii_data* FUNC_7 (int ) ;
 int VAR_21 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_12(struct awg_softc *VAR_22)
{
 struct mii_data *VAR_23;
 uint32_t VAR_24;
 if_t VAR_25;

 VAR_23 = FUNC_7(VAR_22->miibus);
 VAR_25 = VAR_22->ifp;

 FUNC_0(VAR_22);

 if (FUNC_9(VAR_25) & VAR_10)
  return;

 FUNC_5(VAR_22);


 VAR_24 = VAR_18 << VAR_0;
 if (VAR_19)
  VAR_24 |= VAR_1;
 FUNC_2(VAR_22, VAR_3, VAR_24);
 FUNC_4(VAR_22);



 VAR_24 = FUNC_1(VAR_22, VAR_7);
 FUNC_2(VAR_22, VAR_7, VAR_24 | VAR_14 | VAR_16 | VAR_17);


 VAR_24 = FUNC_1(VAR_22, VAR_5);
 FUNC_2(VAR_22, VAR_5, VAR_24 | VAR_11 | VAR_13);


 VAR_24 = FUNC_1(VAR_22, VAR_6);
 FUNC_2(VAR_22, VAR_6, VAR_24 | VAR_15);


 VAR_24 = FUNC_1(VAR_22, VAR_4);
 FUNC_2(VAR_22, VAR_4, VAR_24 | VAR_12 | VAR_2);

 FUNC_10(VAR_25, VAR_10, VAR_9);

 FUNC_11(VAR_23);
 FUNC_6(&VAR_22->stat_ch, VAR_21, VAR_20, VAR_22);
}
