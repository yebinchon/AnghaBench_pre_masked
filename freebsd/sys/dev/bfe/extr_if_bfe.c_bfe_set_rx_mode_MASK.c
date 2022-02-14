
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ifnet {int if_flags; } ;
struct bfe_softc {struct ifnet* bfe_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfe_softc*) ;
 int FUNC_1 (struct bfe_softc*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bfe_softc*,int ) ;
 int FUNC_3 (struct bfe_softc*,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct bfe_softc*,int ,int ) ;
 int VAR_9 ;
 int FUNC_6 (struct ifnet*,int ,struct bfe_softc*) ;

__attribute__((used)) static void
FUNC_7(struct bfe_softc *VAR_10)
{
 struct ifnet *VAR_11 = VAR_10->bfe_ifp;
 u_int32_t VAR_12;

 FUNC_0(VAR_10);

 VAR_12 = FUNC_2(VAR_10, VAR_2);

 if (VAR_11->if_flags & VAR_8)
  VAR_12 |= VAR_5;
 else
  VAR_12 &= ~VAR_5;

 if (VAR_11->if_flags & VAR_7)
  VAR_12 &= ~VAR_4;
 else
  VAR_12 |= VAR_4;


 FUNC_3(VAR_10, VAR_0, 0);
 FUNC_5(VAR_10, FUNC_4(VAR_10->bfe_ifp), 0);

 if (VAR_11->if_flags & VAR_6)
  VAR_12 |= VAR_3;
 else {
  VAR_12 &= ~VAR_3;
  FUNC_6(VAR_11, VAR_9, VAR_10);
 }

 FUNC_3(VAR_10, VAR_2, VAR_12);
 FUNC_1(VAR_10, VAR_0, VAR_1);
}
