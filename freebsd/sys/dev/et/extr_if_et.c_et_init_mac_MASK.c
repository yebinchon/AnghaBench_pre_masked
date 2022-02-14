
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ifnet {int if_mtu; } ;
struct et_softc {struct ifnet* ifp; } ;


 int FUNC_0 (struct et_softc*,int ,int) ;
 int FUNC_1 (int ) ;
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
 int* FUNC_2 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_3(struct et_softc *VAR_23)
{
 struct ifnet *VAR_24;
 const uint8_t *VAR_25;
 uint32_t VAR_26;


 FUNC_0(VAR_23, VAR_7,
      VAR_10 | VAR_8 |
      VAR_11 | VAR_9 |
      VAR_12 | VAR_13);




 VAR_26 = (56 << VAR_3) |
     (88 << VAR_4) |
     (80 << VAR_2) |
     (96 << VAR_1);
 FUNC_0(VAR_23, VAR_0, VAR_26);




 VAR_26 = (10 << VAR_16) |
     (15 << VAR_19) |
     (55 << VAR_17) |
     VAR_18;
 FUNC_0(VAR_23, VAR_15, VAR_26);


 FUNC_0(VAR_23, VAR_14, 0);


 FUNC_0(VAR_23, VAR_21, VAR_22);




 VAR_24 = VAR_23->ifp;
 VAR_25 = FUNC_2(VAR_24);
 VAR_26 = VAR_25[2] | (VAR_25[3] << 8) | (VAR_25[4] << 16) | (VAR_25[5] << 24);
 FUNC_0(VAR_23, VAR_5, VAR_26);
 VAR_26 = (VAR_25[0] << 16) | (VAR_25[1] << 24);
 FUNC_0(VAR_23, VAR_6, VAR_26);


 FUNC_0(VAR_23, VAR_20, FUNC_1(VAR_24->if_mtu));


 FUNC_0(VAR_23, VAR_7, 0);
}
