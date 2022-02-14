
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ifnet {int if_mtu; } ;
struct et_softc {struct ifnet* ifp; } ;


 int FUNC_0 (struct et_softc*,scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int* FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct et_softc*) ;

__attribute__((used)) static void
FUNC_5(struct et_softc *VAR_26)
{
 struct ifnet *VAR_27;
 const uint8_t *VAR_28;
 uint32_t VAR_29;
 int VAR_30;


 FUNC_0(VAR_26, VAR_5, VAR_7);




 for (VAR_30 = 0; VAR_30 < 3; ++VAR_30)
  FUNC_0(VAR_26, VAR_22 + (VAR_30 * 4), 0);
 for (VAR_30 = 0; VAR_30 < 20; ++VAR_30)
  FUNC_0(VAR_26, VAR_23 + (VAR_30 * 4), 0);




 VAR_27 = VAR_26->ifp;
 VAR_28 = FUNC_3(VAR_27);
 VAR_29 = (VAR_28[2] << 24) | (VAR_28[3] << 16) | (VAR_28[4] << 8) | VAR_28[5];
 FUNC_0(VAR_26, VAR_25, VAR_29);
 VAR_29 = (VAR_28[0] << 8) | VAR_28[1];
 FUNC_0(VAR_26, VAR_24, VAR_29);


 FUNC_0(VAR_26, VAR_1, 0);


 FUNC_0(VAR_26, VAR_19, 0);
 FUNC_0(VAR_26, VAR_20, 0);
 FUNC_0(VAR_26, VAR_21, 0);

 if (FUNC_1(VAR_27->if_mtu) > VAR_8) {
  VAR_29 = (FUNC_2(256) & VAR_11) |
        VAR_10;
 } else {
  VAR_29 = 0;
 }
 FUNC_0(VAR_26, VAR_9, VAR_29);

 FUNC_0(VAR_26, VAR_12, 0);


 FUNC_0(VAR_26, VAR_13, 0);

 FUNC_0(VAR_26, VAR_18, 0);

 FUNC_0(VAR_26, VAR_13,
      VAR_15 |
      VAR_16 |
      VAR_17 |
      VAR_14);




 VAR_29 = (VAR_0 << VAR_4) &
     VAR_3;
 VAR_29 |= VAR_2;
 FUNC_0(VAR_26, VAR_1, VAR_29);


 FUNC_0(VAR_26, VAR_5,
      VAR_7 | VAR_6);




 FUNC_4(VAR_26);
}
