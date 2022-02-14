
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid3_softc {int sc_lock; } ;
struct g_raid3_metadata {int dummy; } ;
struct g_raid3_disk {struct g_raid3_softc* d_softc; } ;


 int FUNC_0 (int,char*,int ,...) ;
 int VAR_0 ;
 int FUNC_1 (struct g_raid3_disk*,struct g_raid3_metadata*) ;
 int FUNC_2 (struct g_raid3_disk*) ;
 int FUNC_3 (struct g_raid3_disk*,struct g_raid3_metadata*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ) ;

void
FUNC_6(struct g_raid3_disk *VAR_1)
{
 struct g_raid3_softc *VAR_2;
 struct g_raid3_metadata VAR_3;
 int VAR_4;

 FUNC_4();
 VAR_2 = VAR_1->d_softc;
 FUNC_5(&VAR_2->sc_lock, VAR_0);

 FUNC_1(VAR_1, &VAR_3);
 VAR_4 = FUNC_3(VAR_1, &VAR_3);
 if (VAR_4 == 0) {
  FUNC_0(2, "Metadata on %s updated.",
      FUNC_2(VAR_1));
 } else {
  FUNC_0(0,
      "Cannot update metadata on disk %s (error=%d).",
      FUNC_2(VAR_1), VAR_4);
 }
}
