
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct ifnet {int if_mtu; } ;
struct et_softc {int sc_flags; struct ifnet* ifp; } ;


 int FUNC_0 (struct et_softc*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct et_softc*) ;
 int FUNC_4 (struct et_softc*) ;
 int FUNC_5 (struct et_softc*) ;
 int FUNC_6 (struct et_softc*) ;
 int FUNC_7 (struct et_softc*) ;
 int FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_9(struct et_softc *VAR_17)
{
 struct ifnet *VAR_18;
 uint32_t VAR_19;
 int VAR_20, VAR_21, VAR_22;

 VAR_18 = VAR_17->ifp;




 VAR_21 = FUNC_1(VAR_18->if_mtu);
 if (VAR_21 < 2048) {
  VAR_22 = VAR_2;
 } else if (VAR_21 <= VAR_11) {
  VAR_22 = VAR_3 / 2;
 } else {
  VAR_22 = VAR_3 -
  FUNC_8(VAR_21 + VAR_4, VAR_5);
 }
 VAR_19 = FUNC_2(VAR_22);

 FUNC_0(VAR_17, VAR_13, VAR_10);
 FUNC_0(VAR_17, VAR_12, VAR_19);
 FUNC_0(VAR_17, VAR_16, VAR_19 + 1);
 FUNC_0(VAR_17, VAR_15, VAR_9);


 FUNC_0(VAR_17, VAR_1, 0);


 if ((VAR_17->sc_flags & VAR_0) == 0)
  FUNC_0(VAR_17, VAR_8, 0);


 FUNC_0(VAR_17, VAR_14, 0);


 FUNC_3(VAR_17);


 FUNC_0(VAR_17, VAR_6, VAR_7);


 FUNC_5(VAR_17);


 FUNC_7(VAR_17);


 VAR_20 = FUNC_4(VAR_17);
 if (VAR_20)
  return (VAR_20);


 VAR_20 = FUNC_6(VAR_17);
 if (VAR_20)
  return (VAR_20);

 return (0);
}
