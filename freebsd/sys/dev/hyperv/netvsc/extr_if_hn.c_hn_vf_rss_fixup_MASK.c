
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ifrsskey {int ifrh_types; int ifrk_key; int ifrh_func; int ifrh_name; int ifrk_keylen; int ifrk_func; int ifrk_name; } ;
struct ifrsshash {int ifrh_types; int ifrk_key; int ifrh_func; int ifrh_name; int ifrk_keylen; int ifrk_func; int ifrk_name; } ;
struct ifnet {int (* if_ioctl ) (struct ifnet*,int ,int ) ;int if_xname; } ;
struct TYPE_2__ {int rss_key; } ;
struct hn_softc {int hn_flags; int hn_rx_ring_inuse; int hn_rss_hcap; int hn_rss_hash; TYPE_1__ hn_rss; struct ifnet* hn_vf_ifp; struct ifnet* hn_ifp; } ;
typedef int ifrk ;
typedef int ifrh ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hn_softc*) ;
 int FUNC_1 (int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct hn_softc*,int) ;
 int FUNC_3 (struct hn_softc*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ifnet*,char*,...) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (struct ifrsskey*,int ,int) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (struct ifnet*,int ,int ) ;
 int FUNC_11 (struct ifnet*,int ,int ) ;

__attribute__((used)) static void
FUNC_12(struct hn_softc *VAR_17, bool VAR_18)
{
 struct ifnet *VAR_19, *VAR_20;
 struct ifrsshash VAR_21;
 struct ifrsskey VAR_22;
 int VAR_23;
 uint32_t VAR_24, VAR_25, VAR_26 = 0;

 FUNC_0(VAR_17);
 FUNC_1(VAR_17->hn_flags & VAR_1,
     ("%s: synthetic parts are not attached", VAR_17->hn_ifp->if_xname));

 if (VAR_17->hn_rx_ring_inuse == 1) {

  return;
 }
 if ((VAR_17->hn_rss_hcap & VAR_3) == 0) {

  return;
 }

 VAR_19 = VAR_17->hn_ifp;
 VAR_20 = VAR_17->hn_vf_ifp;





 FUNC_8(&VAR_22, 0, sizeof(VAR_22));
 FUNC_9(VAR_22.ifrk_name, VAR_20->if_xname, sizeof(VAR_22.ifrk_name));
 VAR_23 = VAR_20->if_ioctl(VAR_20, VAR_16, (caddr_t)&VAR_22);
 if (VAR_23) {
  FUNC_6(VAR_19, "%s SIOCGRSSKEY failed: %d\n",
      VAR_20->if_xname, VAR_23);
  goto done;
 }
 if (VAR_22.ifrk_func != VAR_5) {
  FUNC_6(VAR_19, "%s RSS function %u is not Toeplitz\n",
      VAR_20->if_xname, VAR_22.ifrk_func);
  goto done;
 }
 if (VAR_22.ifrk_keylen != VAR_4) {
  FUNC_6(VAR_19, "%s invalid RSS Toeplitz key length %d\n",
      VAR_20->if_xname, VAR_22.ifrk_keylen);
  goto done;
 }




 FUNC_8(&VAR_21, 0, sizeof(VAR_21));
 FUNC_9(VAR_21.ifrh_name, VAR_20->if_xname, sizeof(VAR_21.ifrh_name));
 VAR_23 = VAR_20->if_ioctl(VAR_20, VAR_15, (caddr_t)&VAR_21);
 if (VAR_23) {
  FUNC_6(VAR_19, "%s SIOCGRSSHASH failed: %d\n",
      VAR_20->if_xname, VAR_23);
  goto done;
 }
 if (VAR_21.ifrh_func != VAR_5) {
  FUNC_6(VAR_19, "%s RSS function %u is not Toeplitz\n",
      VAR_20->if_xname, VAR_21.ifrh_func);
  goto done;
 }

 VAR_24 = FUNC_4(VAR_17->hn_rss_hcap);
 if ((VAR_21.ifrh_types & VAR_24) == 0) {

  FUNC_6(VAR_19, "%s intersection of RSS types failed.  "
      "VF %#x, mine %#x\n", VAR_20->if_xname,
      VAR_21.ifrh_types, VAR_24);
  goto done;
 }

 VAR_25 = VAR_24 ^ VAR_21.ifrh_types;
 VAR_24 &= VAR_21.ifrh_types;
 VAR_26 = VAR_24;
 if ((VAR_24 & VAR_6) &&
     (VAR_25 & VAR_21.ifrh_types &
      (VAR_9 | VAR_12))) {

  FUNC_6(VAR_19, "disable IPV4 mbuf hash delivery\n");
  VAR_26 &= ~VAR_6;
 }
 if ((VAR_24 & VAR_7) &&
     (VAR_25 & VAR_21.ifrh_types &
      (VAR_10 | VAR_13 |
       VAR_11 | VAR_14 |
       VAR_8))) {

  FUNC_6(VAR_19, "disable IPV6 mbuf hash delivery\n");
  VAR_26 &= ~VAR_7;
 }
 if ((VAR_24 & VAR_8) &&
     (VAR_25 & VAR_21.ifrh_types &
      (VAR_10 | VAR_13 |
       VAR_11 | VAR_14 |
       VAR_7))) {

  FUNC_6(VAR_19, "disable IPV6_EX mbuf hash delivery\n");
  VAR_26 &= ~VAR_8;
 }
 if ((VAR_24 & VAR_10) &&
     (VAR_25 & VAR_21.ifrh_types & VAR_11)) {

  FUNC_6(VAR_19, "disable TCP_IPV6 mbuf hash delivery\n");
  VAR_26 &= ~VAR_10;
 }
 if ((VAR_24 & VAR_11) &&
     (VAR_25 & VAR_21.ifrh_types & VAR_10)) {

  FUNC_6(VAR_19, "disable TCP_IPV6_EX mbuf hash delivery\n");
  VAR_26 &= ~VAR_11;
 }
 if ((VAR_24 & VAR_13) &&
     (VAR_25 & VAR_21.ifrh_types & VAR_14)) {

  FUNC_6(VAR_19, "disable UDP_IPV6 mbuf hash delivery\n");
  VAR_26 &= ~VAR_13;
 }
 if ((VAR_24 & VAR_14) &&
     (VAR_25 & VAR_21.ifrh_types & VAR_13)) {

  FUNC_6(VAR_19, "disable UDP_IPV6_EX mbuf hash delivery\n");
  VAR_26 &= ~VAR_14;
 }





 VAR_17->hn_rss_hash = (VAR_17->hn_rss_hcap & VAR_2) |
     FUNC_5(VAR_24);
 FUNC_7(VAR_17->hn_rss.rss_key, VAR_22.ifrk_key, sizeof(VAR_17->hn_rss.rss_key));
 VAR_17->hn_flags |= VAR_0;

 if (VAR_18) {
  VAR_23 = FUNC_3(VAR_17);
  if (VAR_23) {

   FUNC_6(VAR_19, "hn_rss_reconfig failed: %d\n", VAR_23);

  }
 }
done:

 FUNC_2(VAR_17, FUNC_5(VAR_26));
}
