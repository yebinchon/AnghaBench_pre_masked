
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ifnet {int if_flags; } ;
struct hme_softc {int sc_dev; struct ifnet* sc_ifp; } ;


 int FUNC_0 (struct hme_softc*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hme_softc*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct hme_softc*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,char*) ;
 int VAR_13 ;
 int FUNC_4 (struct hme_softc*,int ,int,int,int) ;
 int FUNC_5 (struct ifnet*,int ,int**) ;

__attribute__((used)) static void
FUNC_6(struct hme_softc *VAR_14, int VAR_15)
{
 struct ifnet *VAR_16 = VAR_14->sc_ifp;
 u_int32_t VAR_17[4];
 u_int32_t VAR_18;

 FUNC_0(VAR_14, VAR_12);

 VAR_17[3] = VAR_17[2] = VAR_17[1] = VAR_17[0] = 0;


 VAR_18 = FUNC_1(VAR_14, VAR_4);






 VAR_18 &= ~(VAR_8 | VAR_9);







 if (!FUNC_4(VAR_14, VAR_4, VAR_18,
     VAR_5, 0))
  FUNC_3(VAR_14->sc_dev, "cannot disable RX MAC\n");

 if (!FUNC_4(VAR_14, VAR_4, VAR_18,
     VAR_6, 0))
  FUNC_3(VAR_14->sc_dev, "cannot disable hash filter\n");


 VAR_18 |= VAR_7;
 if (VAR_15)
  VAR_18 |= VAR_5;
 else
  VAR_18 &= ~VAR_5;

 if ((VAR_16->if_flags & VAR_11) != 0) {
  VAR_18 |= VAR_9;
  goto chipit;
 }
 if ((VAR_16->if_flags & VAR_10) != 0) {
  VAR_18 |= VAR_8;
  goto chipit;
 }

 VAR_18 |= VAR_6;
 FUNC_5(VAR_16, VAR_13, &VAR_17);

chipit:

 FUNC_2(VAR_14, VAR_0, VAR_17[0]);
 FUNC_2(VAR_14, VAR_1, VAR_17[1]);
 FUNC_2(VAR_14, VAR_2, VAR_17[2]);
 FUNC_2(VAR_14, VAR_3, VAR_17[3]);
 if (!FUNC_4(VAR_14, VAR_4, VAR_18, 0,
     VAR_18 & (VAR_5 | VAR_6 |
     VAR_7)))
  FUNC_3(VAR_14->sc_dev, "cannot configure RX MAC\n");
}
