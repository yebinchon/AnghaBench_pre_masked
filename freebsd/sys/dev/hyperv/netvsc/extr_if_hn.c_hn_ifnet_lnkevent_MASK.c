
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct hn_softc {int hn_ifp; struct ifnet* hn_vf_ifp; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, struct ifnet *VAR_1, int VAR_2)
{
 struct hn_softc *VAR_3 = VAR_0;

 if (VAR_3->hn_vf_ifp == VAR_1)
  FUNC_0(VAR_3->hn_ifp, VAR_2);
}
