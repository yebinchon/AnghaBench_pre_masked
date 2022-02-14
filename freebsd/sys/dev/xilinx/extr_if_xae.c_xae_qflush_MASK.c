
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xae_softc {int dummy; } ;
struct ifnet {struct xae_softc* if_softc; } ;



__attribute__((used)) static void
FUNC_0(struct ifnet *VAR_0)
{
 struct xae_softc *VAR_1;

 VAR_1 = VAR_0->if_softc;
}
