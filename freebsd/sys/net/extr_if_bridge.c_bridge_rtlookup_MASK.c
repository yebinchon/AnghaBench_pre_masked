
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct ifnet {int dummy; } ;
struct bridge_softc {int dummy; } ;
struct bridge_rtnode {struct ifnet* brt_ifp; } ;


 int FUNC_0 (struct bridge_softc*) ;
 struct bridge_rtnode* FUNC_1 (struct bridge_softc*,int const*,int ) ;

__attribute__((used)) static struct ifnet *
FUNC_2(struct bridge_softc *VAR_0, const uint8_t *VAR_1, uint16_t VAR_2)
{
 struct bridge_rtnode *VAR_3;

 FUNC_0(VAR_0);

 if ((VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2)) == ((void*)0))
  return (((void*)0));

 return (VAR_3->brt_ifp);
}
