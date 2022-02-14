
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct stge_softc {struct ifnet* sc_ifp; } ;
struct ifnet {int if_flags; } ;
typedef int mchash ;


 int FUNC_0 (struct stge_softc*,int ) ;
 int FUNC_1 (struct stge_softc*,int ,int) ;
 int FUNC_2 (struct stge_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct stge_softc*) ;
 int VAR_7 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct ifnet*,int ,int *) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_6(struct stge_softc *VAR_9)
{
 struct ifnet *VAR_10;
 uint32_t VAR_11[2];
 uint16_t VAR_12;
 int VAR_13;

 FUNC_3(VAR_9);

 VAR_10 = VAR_9->sc_ifp;

 VAR_12 = FUNC_0(VAR_9, VAR_7);
 if ((VAR_10->if_flags & (VAR_1 | VAR_0)) != 0) {
  if ((VAR_10->if_flags & VAR_1) != 0)
   VAR_12 |= VAR_2;
  else if ((VAR_10->if_flags & VAR_0) != 0)
   VAR_12 |= VAR_3;
  FUNC_1(VAR_9, VAR_7, VAR_12);
  return;
 }


 FUNC_2(VAR_9, VAR_5, 0);
 FUNC_2(VAR_9, VAR_6, 0);
 FUNC_4(VAR_11, sizeof(VAR_11));
 VAR_13 = FUNC_5(VAR_10, VAR_8, VAR_11);

 VAR_12 &= ~(VAR_3 | VAR_2);
 if (VAR_13 > 0)
  VAR_12 |= VAR_4;
 else
  VAR_12 &= ~VAR_4;

 FUNC_2(VAR_9, VAR_5, VAR_11[0]);
 FUNC_2(VAR_9, VAR_6, VAR_11[1]);
 FUNC_1(VAR_9, VAR_7, VAR_12);
}
