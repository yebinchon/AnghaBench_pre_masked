
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifbrparam {int ifbrp_prio; } ;
struct bridge_softc {int sc_stp; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(struct bridge_softc *VAR_0, void *VAR_1)
{
 struct ifbrparam *VAR_2 = VAR_1;

 return (FUNC_0(&VAR_0->sc_stp, VAR_2->ifbrp_prio));
}
