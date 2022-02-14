
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_flags; } ;
struct ale_softc {struct ifnet* ale_ifp; } ;
typedef int mchash ;


 int FUNC_0 (struct ale_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ale_softc*,int ) ;
 int FUNC_2 (struct ale_softc*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (struct ifnet*,int ,int**) ;

__attribute__((used)) static void
FUNC_5(struct ale_softc *VAR_10)
{
 struct ifnet *VAR_11;
 uint32_t VAR_12[2];
 uint32_t VAR_13;

 FUNC_0(VAR_10);

 VAR_11 = VAR_10->ale_ifp;

 VAR_13 = FUNC_1(VAR_10, VAR_0);
 VAR_13 &= ~(VAR_6 | VAR_7 | VAR_8);
 if ((VAR_11->if_flags & VAR_4) != 0)
  VAR_13 |= VAR_7;
 if ((VAR_11->if_flags & (VAR_5 | VAR_3)) != 0) {
  if ((VAR_11->if_flags & VAR_5) != 0)
   VAR_13 |= VAR_8;
  if ((VAR_11->if_flags & VAR_3) != 0)
   VAR_13 |= VAR_6;
  FUNC_2(VAR_10, VAR_1, 0xFFFFFFFF);
  FUNC_2(VAR_10, VAR_2, 0xFFFFFFFF);
  FUNC_2(VAR_10, VAR_0, VAR_13);
  return;
 }


 FUNC_3(VAR_12, sizeof(VAR_12));
 FUNC_4(VAR_11, VAR_9, &VAR_12);

 FUNC_2(VAR_10, VAR_1, VAR_12[0]);
 FUNC_2(VAR_10, VAR_2, VAR_12[1]);
 FUNC_2(VAR_10, VAR_0, VAR_13);
}
