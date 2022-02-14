
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct tuntap_softc {int dummy; } ;
struct ifnet {int if_capenable; int if_hwassist; scalar_t__ if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct tuntap_softc*) ;

__attribute__((used)) static void
FUNC_1(struct ifnet *VAR_10)
{
 uint64_t VAR_11 = 0;

 FUNC_0((struct tuntap_softc *)VAR_10->if_softc);
 if (VAR_10->if_capenable & VAR_8)
  VAR_11 |= VAR_2 | VAR_4;
 if (VAR_10->if_capenable & VAR_9)
  VAR_11 |= VAR_3
      | VAR_5;
 if (VAR_10->if_capenable & VAR_6)
  VAR_11 |= VAR_1;
 if (VAR_10->if_capenable & VAR_7)
  VAR_11 |= VAR_0;
 VAR_10->if_hwassist = VAR_11;
}
