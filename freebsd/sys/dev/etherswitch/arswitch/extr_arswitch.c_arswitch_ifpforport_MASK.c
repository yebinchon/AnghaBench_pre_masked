
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct arswitch_softc {int numphys; struct ifnet** ifp; } ;



__attribute__((used)) static inline struct ifnet *
FUNC_0(struct arswitch_softc *VAR_0, int VAR_1)
{
 int VAR_2 = VAR_1-1;

 if (VAR_2 < 0 || VAR_2 >= VAR_0->numphys)
  return (((void*)0));
 return (VAR_0->ifp[VAR_2]);
}
