
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ukswitch_softc {int numports; struct ifnet** ifp; } ;
struct ifnet {int dummy; } ;



__attribute__((used)) static inline struct ifnet *
FUNC_0(struct ukswitch_softc *VAR_0, int VAR_1)
{

 if (VAR_1 < 0 || VAR_1 > VAR_0->numports)
  return (((void*)0));
 return (VAR_0->ifp[VAR_1]);
}
