
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap_softc {int tun_flags; int tun_busy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tuntap_softc*) ;

__attribute__((used)) static int
FUNC_1(struct tuntap_softc *VAR_2)
{

 FUNC_0(VAR_2);
 if ((VAR_2->tun_flags & VAR_1) != 0) {






  return (VAR_0);
 }

 ++VAR_2->tun_busy;
 return (0);
}
