
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mirror_softc {int sc_flags; int sc_ndisks; int sc_mediasize; int sc_balance; int sc_slice; int sc_syncid; int sc_genid; } ;
struct g_mirror_metadata {int md_mflags; int md_all; int md_mediasize; int md_balance; int md_slice; int md_syncid; int md_genid; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct g_mirror_softc *VAR_1,
    const struct g_mirror_metadata *VAR_2)
{

 VAR_1->sc_genid = VAR_2->md_genid;
 VAR_1->sc_syncid = VAR_2->md_syncid;

 VAR_1->sc_slice = VAR_2->md_slice;
 VAR_1->sc_balance = VAR_2->md_balance;
 VAR_1->sc_mediasize = VAR_2->md_mediasize;
 VAR_1->sc_ndisks = VAR_2->md_all;
 VAR_1->sc_flags &= ~VAR_0;
 VAR_1->sc_flags |= (VAR_2->md_mflags & VAR_0);
}
