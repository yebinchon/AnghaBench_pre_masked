
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_mirror_softc {scalar_t__ sc_type; int sc_flags; int sc_lock; } ;
struct g_mirror_metadata {int dummy; } ;
struct g_mirror_disk {struct g_mirror_softc* d_softc; } ;


 int FUNC_0 (int,char*,int ,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct g_mirror_softc*,struct g_mirror_disk*,struct g_mirror_metadata*) ;
 int FUNC_2 (struct g_mirror_disk*) ;
 int FUNC_3 (struct g_mirror_disk*,struct g_mirror_metadata*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(struct g_mirror_disk *VAR_3)
{
 struct g_mirror_softc *VAR_4;
 struct g_mirror_metadata VAR_5;
 int VAR_6;

 FUNC_4();
 VAR_4 = VAR_3->d_softc;
 FUNC_5(&VAR_4->sc_lock, VAR_2);

 if (VAR_4->sc_type != VAR_1)
  return;
 if ((VAR_4->sc_flags & VAR_0) == 0)
  FUNC_1(VAR_4, VAR_3, &VAR_5);
 VAR_6 = FUNC_3(VAR_3, &VAR_5);
 if (VAR_6 == 0) {
  FUNC_0(2, "Metadata on %s updated.",
      FUNC_2(VAR_3));
 } else {
  FUNC_0(0,
      "Cannot update metadata on disk %s (error=%d).",
      FUNC_2(VAR_3), VAR_6);
 }
}
