
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hn_softc {int hn_flags; int hn_rx_ring_inuse; scalar_t__ hn_rss_hash; scalar_t__ hn_rss_hcap; TYPE_1__* hn_ifp; } ;
struct TYPE_2__ {int if_xname; } ;


 int VAR_0 ;
 int FUNC_0 (struct hn_softc*) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 int FUNC_2 (struct hn_softc*,int ) ;
 int FUNC_3 (struct hn_softc*) ;
 int FUNC_4 (TYPE_1__*,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct hn_softc *VAR_2)
{

 FUNC_0(VAR_2);
 FUNC_1(VAR_2->hn_flags & VAR_0,
     ("%s: synthetic parts are not attached", VAR_2->hn_ifp->if_xname));

 if (VAR_2->hn_rx_ring_inuse == 1)
  goto done;




 if (VAR_2->hn_rss_hash != VAR_2->hn_rss_hcap) {
  int VAR_3;

  VAR_2->hn_rss_hash = VAR_2->hn_rss_hcap;
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3) {
   FUNC_4(VAR_2->hn_ifp, "hn_rss_reconfig failed: %d\n",
       VAR_3);

  }
 }
done:

 FUNC_2(VAR_2, VAR_1);
}
