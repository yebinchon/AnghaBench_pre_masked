
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tsec_softc {struct ifnet* tsec_ifp; } ;
struct ifnet {int if_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tsec_softc*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct tsec_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct tsec_softc *VAR_3)
{
 struct ifnet *VAR_4;
 uint32_t VAR_5;

 VAR_4 = VAR_3->tsec_ifp;
 VAR_5 = FUNC_0(VAR_3, VAR_2);


 if (VAR_4->if_flags & VAR_0)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;

 FUNC_1(VAR_3, VAR_2, VAR_5);
}
