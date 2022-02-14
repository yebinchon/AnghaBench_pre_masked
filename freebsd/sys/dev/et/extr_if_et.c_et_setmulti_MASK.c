
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_flags; } ;
struct et_softc {struct ifnet* ifp; } ;


 int FUNC_0 (struct et_softc*,scalar_t__) ;
 int FUNC_1 (struct et_softc*,scalar_t__,int) ;
 int FUNC_2 (struct et_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct ifnet*,int ,int**) ;

__attribute__((used)) static void
FUNC_4(struct et_softc *VAR_10)
{
 struct ifnet *VAR_11;
 uint32_t VAR_12[4] = { 0, 0, 0, 0 };
 uint32_t VAR_13, VAR_14;
 int VAR_15, VAR_16;

 FUNC_2(VAR_10);
 VAR_11 = VAR_10->ifp;

 VAR_14 = FUNC_0(VAR_10, VAR_1);
 VAR_13 = FUNC_0(VAR_10, VAR_5);

 VAR_14 &= ~(VAR_2 | VAR_3 | VAR_4);
 if (VAR_11->if_flags & (VAR_8 | VAR_7)) {
  VAR_13 |= VAR_6;
  goto back;
 }

 VAR_16 = FUNC_3(VAR_11, VAR_9, &VAR_12);

 for (VAR_15 = 0; VAR_15 < 4; ++VAR_15)
  FUNC_1(VAR_10, VAR_0 + (VAR_15 * 4), VAR_12[VAR_15]);

 if (VAR_16 > 0)
  VAR_14 |= VAR_3;
 VAR_13 &= ~VAR_6;
back:
 FUNC_1(VAR_10, VAR_1, VAR_14);
 FUNC_1(VAR_10, VAR_5, VAR_13);
}
