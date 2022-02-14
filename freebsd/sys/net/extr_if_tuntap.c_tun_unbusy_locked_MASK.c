
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap_softc {scalar_t__ tun_busy; int tun_cv; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct tuntap_softc*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct tuntap_softc *VAR_0)
{

 FUNC_1(VAR_0);
 FUNC_0(VAR_0->tun_busy != 0, ("tun_unbusy: called for non-busy tunnel"));

 --VAR_0->tun_busy;

 if (VAR_0->tun_busy == 0)
  FUNC_2(&VAR_0->tun_cv);
}
