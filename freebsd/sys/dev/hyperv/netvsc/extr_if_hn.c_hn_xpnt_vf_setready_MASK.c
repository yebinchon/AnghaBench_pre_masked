
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {scalar_t__ ifr_mtu; int ifr_name; int ifr_reqcap; } ;
struct ifnet {scalar_t__ if_hw_tsomax; scalar_t__ if_hw_tsomaxsegcount; scalar_t__ if_hw_tsomaxsegsize; scalar_t__ if_mtu; int (* if_ioctl ) (struct ifnet*,int ,int ) ;int if_xname; int if_capenable; int if_capabilities; } ;
struct hn_softc {scalar_t__ hn_saved_tsomax; scalar_t__ hn_saved_tsosegcnt; scalar_t__ hn_saved_tsosegsz; int hn_saved_caps; scalar_t__ hn_vf_rdytick; struct ifnet* hn_vf_ifp; struct ifnet* hn_ifp; } ;
typedef int ifr ;
typedef int caddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hn_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct hn_softc*) ;
 int FUNC_2 (struct hn_softc*,struct ifreq*) ;
 int FUNC_3 (struct ifnet*,char*,scalar_t__,...) ;
 int FUNC_4 (struct ifreq*,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct ifnet*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct hn_softc *VAR_2)
{
 struct ifnet *VAR_3, *VAR_4;
 struct ifreq VAR_5;

 FUNC_0(VAR_2);
 VAR_3 = VAR_2->hn_ifp;
 VAR_4 = VAR_2->hn_vf_ifp;




 VAR_2->hn_vf_rdytick = 0;




 VAR_2->hn_saved_caps = VAR_3->if_capabilities;
 VAR_2->hn_saved_tsomax = VAR_3->if_hw_tsomax;
 VAR_2->hn_saved_tsosegcnt = VAR_3->if_hw_tsomaxsegcount;
 VAR_2->hn_saved_tsosegsz = VAR_3->if_hw_tsomaxsegsize;







 VAR_3->if_capabilities &= VAR_4->if_capabilities;
 VAR_3->if_capenable &= VAR_3->if_capabilities;




 if (VAR_3->if_hw_tsomax > VAR_4->if_hw_tsomax)
  VAR_3->if_hw_tsomax = VAR_4->if_hw_tsomax;
 if (VAR_3->if_hw_tsomaxsegcount > VAR_4->if_hw_tsomaxsegcount)
  VAR_3->if_hw_tsomaxsegcount = VAR_4->if_hw_tsomaxsegcount;
 if (VAR_3->if_hw_tsomaxsegsize > VAR_4->if_hw_tsomaxsegsize)
  VAR_3->if_hw_tsomaxsegsize = VAR_4->if_hw_tsomaxsegsize;




 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 FUNC_5(VAR_5.ifr_name, VAR_4->if_xname, sizeof(VAR_5.ifr_name));
 VAR_5.ifr_reqcap = VAR_3->if_capenable;
 FUNC_2(VAR_2, &VAR_5);

 if (VAR_3->if_mtu != VAR_0) {
  int VAR_6;




  FUNC_4(&VAR_5, 0, sizeof(VAR_5));
  FUNC_5(VAR_5.ifr_name, VAR_4->if_xname, sizeof(VAR_5.ifr_name));
  VAR_5.ifr_mtu = VAR_3->if_mtu;
  VAR_6 = VAR_4->if_ioctl(VAR_4, VAR_1, (caddr_t)&VAR_5);
  if (VAR_6) {
   FUNC_3(VAR_3, "%s SIOCSIFMTU %u failed\n",
       VAR_4->if_xname, VAR_3->if_mtu);
   if (VAR_3->if_mtu > VAR_0) {
    FUNC_3(VAR_3, "change MTU to %d\n", VAR_0);







    VAR_3->if_mtu = VAR_0;
    FUNC_1(VAR_2);
   }
  }
 }
}
