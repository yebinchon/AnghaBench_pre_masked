
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_flags; int ifr_flagshigh; int ifr_name; } ;
struct ifnet {int if_flags; int (* if_ioctl ) (struct ifnet*,int ,int ) ;int if_xname; } ;
struct hn_softc {struct ifnet* hn_vf_ifp; } ;
typedef int ifr ;
typedef int caddr_t ;


 int FUNC_0 (struct hn_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct ifreq*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ifnet*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct hn_softc *VAR_1)
{
 struct ifnet *VAR_2;
 struct ifreq VAR_3;

 FUNC_0(VAR_1);
 VAR_2 = VAR_1->hn_vf_ifp;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 FUNC_2(VAR_3.ifr_name, VAR_2->if_xname, sizeof(VAR_3.ifr_name));
 VAR_3.ifr_flags = VAR_2->if_flags & 0xffff;
 VAR_3.ifr_flagshigh = VAR_2->if_flags >> 16;
 return (VAR_2->if_ioctl(VAR_2, VAR_0, (caddr_t)&VAR_3));
}
