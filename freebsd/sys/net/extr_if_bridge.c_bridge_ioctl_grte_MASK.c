
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbrparam {int ifbrp_cexceeded; } ;
struct bridge_softc {int sc_brtexceeded; } ;



__attribute__((used)) static int
FUNC_0(struct bridge_softc *VAR_0, void *VAR_1)
{
 struct ifbrparam *VAR_2 = VAR_1;

 VAR_2->ifbrp_cexceeded = VAR_0->sc_brtexceeded;
 return (0);
}
