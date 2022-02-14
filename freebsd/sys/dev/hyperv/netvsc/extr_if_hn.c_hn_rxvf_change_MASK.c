
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; int if_xname; } ;
struct hn_softc {int hn_flags; int hn_link_flags; struct ifnet* hn_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hn_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct hn_softc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (char*,int ,char*,int *) ;
 int FUNC_3 (struct hn_softc*,struct ifnet*) ;
 int FUNC_4 (struct hn_softc*,int ) ;
 int FUNC_5 (struct hn_softc*) ;
 int FUNC_6 (struct hn_softc*) ;
 int FUNC_7 (struct hn_softc*,struct ifnet*) ;
 int FUNC_8 (struct hn_softc*,int ) ;
 int FUNC_9 (struct hn_softc*) ;
 int FUNC_10 (struct hn_softc*,int) ;
 int FUNC_11 (struct hn_softc*) ;
 int FUNC_12 (struct ifnet*,int ) ;
 int FUNC_13 (struct ifnet*,char*,char*,int ) ;

__attribute__((used)) static void
FUNC_14(struct hn_softc *VAR_10, struct ifnet *VAR_11, bool VAR_12)
{
 struct ifnet *VAR_13;

 FUNC_0(VAR_10);

 if (!(VAR_10->hn_flags & VAR_1))
  goto out;

 if (!FUNC_3(VAR_10, VAR_11))
  goto out;
 VAR_13 = VAR_10->hn_ifp;

 if (VAR_12) {
  if (VAR_10->hn_flags & VAR_0)
   goto out;

  VAR_10->hn_flags |= VAR_0;
  FUNC_6(VAR_10);
 } else {
  if (!(VAR_10->hn_flags & VAR_0))
   goto out;

  VAR_10->hn_flags &= ~VAR_0;
  if (VAR_13->if_drv_flags & VAR_6)
   FUNC_6(VAR_10);
  else
   FUNC_8(VAR_10, VAR_8);
 }

 FUNC_4(VAR_10,
     VAR_12 ? VAR_5 : VAR_4);

 FUNC_7(VAR_10, VAR_12 ? VAR_11 : ((void*)0));

 if (VAR_12) {
  FUNC_10(VAR_10, 1);
  FUNC_9(VAR_10);
  VAR_10->hn_link_flags &=
      ~(VAR_2 | VAR_3);
  FUNC_12(VAR_13, VAR_7);
 } else {
  FUNC_11(VAR_10);
  FUNC_5(VAR_10);
 }

 FUNC_2("HYPERV_NIC_VF", VAR_13->if_xname,
     VAR_12 ? "VF_UP" : "VF_DOWN", ((void*)0));

 if (VAR_9) {
  FUNC_13(VAR_13, "datapath is switched %s %s\n",
      VAR_12 ? "to" : "from", VAR_11->if_xname);
 }
out:
 FUNC_1(VAR_10);
}
