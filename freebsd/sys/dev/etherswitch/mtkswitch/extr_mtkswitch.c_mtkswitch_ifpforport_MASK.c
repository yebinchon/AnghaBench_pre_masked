
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtkswitch_softc {struct ifnet** ifp; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline struct ifnet *
FUNC_1(struct mtkswitch_softc *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 < 0 || VAR_3 >= VAR_0)
  return (((void*)0));

 return (VAR_1->ifp[VAR_3]);
}
