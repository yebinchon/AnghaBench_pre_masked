
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_capenable; } ;
struct alc_softc {struct ifnet* alc_ifp; } ;


 int FUNC_0 (struct alc_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct alc_softc*,int ) ;
 int FUNC_2 (struct alc_softc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3(struct alc_softc *VAR_3)
{
 struct ifnet *VAR_4;
 uint32_t VAR_5;

 FUNC_0(VAR_3);

 VAR_4 = VAR_3->alc_ifp;
 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if ((VAR_4->if_capenable & VAR_1) != 0)
  VAR_5 |= VAR_2;
 else
  VAR_5 &= ~VAR_2;
 FUNC_2(VAR_3, VAR_0, VAR_5);
}
