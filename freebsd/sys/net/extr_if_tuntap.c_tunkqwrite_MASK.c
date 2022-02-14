
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tuntap_softc {int dummy; } ;
struct knote {int kn_data; struct tuntap_softc* kn_hook; } ;
struct ifnet {int if_mtu; } ;


 struct ifnet* FUNC_0 (struct tuntap_softc*) ;

__attribute__((used)) static int
FUNC_1(struct knote *VAR_0, long VAR_1)
{
 struct tuntap_softc *VAR_2 = VAR_0->kn_hook;
 struct ifnet *VAR_3 = FUNC_0(VAR_2);

 VAR_0->kn_data = VAR_3->if_mtu;

 return (1);
}
