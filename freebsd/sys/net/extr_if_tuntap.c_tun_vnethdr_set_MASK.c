
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap_softc {int tun_vhdrlen; } ;
struct ifnet {int if_capabilities; int if_capenable; struct tuntap_softc* if_softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct ifnet*,char*,int,int ) ;
 int FUNC_1 (struct tuntap_softc*) ;
 int FUNC_2 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_3(struct ifnet *VAR_1, int VAR_2)
{
 struct tuntap_softc *VAR_3 = VAR_1->if_softc;

 FUNC_1(VAR_3);

 if (VAR_3->tun_vhdrlen == VAR_2)
  return;






 if (VAR_2 != 0)
  VAR_1->if_capabilities |=
   VAR_0;
 else
  VAR_1->if_capabilities &=
   ~VAR_0;




 VAR_1->if_capenable &= VAR_1->if_capabilities;
 FUNC_2(VAR_1);
 VAR_3->tun_vhdrlen = VAR_2;

 FUNC_0(VAR_1, "vnet_hdr_len=%d, if_capabilities=%x\n",
     VAR_2, VAR_1->if_capabilities);
}
