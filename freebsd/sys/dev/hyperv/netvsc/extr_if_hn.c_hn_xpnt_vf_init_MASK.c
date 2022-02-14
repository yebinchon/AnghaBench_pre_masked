
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hn_softc {int hn_xvf_flags; TYPE_1__* hn_vf_ifp; TYPE_2__* hn_ifp; } ;
struct TYPE_4__ {int if_xname; } ;
struct TYPE_3__ {int if_xname; int if_flags; } ;


 int FUNC_0 (struct hn_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct hn_softc*,int ) ;
 int FUNC_3 (struct hn_softc*,int) ;
 int FUNC_4 (struct hn_softc*) ;
 int FUNC_5 (struct hn_softc*) ;
 int FUNC_6 (struct hn_softc*) ;
 int FUNC_7 (TYPE_2__*,char*,int ,...) ;

__attribute__((used)) static void
FUNC_8(struct hn_softc *VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4);

 FUNC_1((VAR_4->hn_xvf_flags & VAR_1) == 0,
     ("%s: transparent VF was enabled", VAR_4->hn_ifp->if_xname));

 if (VAR_3) {
  FUNC_7(VAR_4->hn_ifp, "try bringing up %s\n",
      VAR_4->hn_vf_ifp->if_xname);
 }




 FUNC_5(VAR_4);
 VAR_4->hn_vf_ifp->if_flags |= VAR_2;
 VAR_5 = FUNC_4(VAR_4);
 if (VAR_5) {
  FUNC_7(VAR_4->hn_ifp, "bringing up %s failed: %d\n",
      VAR_4->hn_vf_ifp->if_xname, VAR_5);
  return;
 }





 FUNC_2(VAR_4, VAR_0);






 FUNC_3(VAR_4, 1);


 FUNC_6(VAR_4);
}
