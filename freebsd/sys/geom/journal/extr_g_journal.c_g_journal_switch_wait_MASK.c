
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_journal_softc {scalar_t__ sc_flush_in_progress; scalar_t__ sc_copy_in_progress; scalar_t__ sc_flush_count; scalar_t__ sc_delayed_count; int sc_flags; int sc_name; int sc_mtx; int sc_journal_copying; } ;
struct bintime {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int,struct bintime*) ;
 int FUNC_2 (int,struct bintime*,char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int *,int ,char*,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct g_journal_softc*) ;

__attribute__((used)) static void
FUNC_6(struct g_journal_softc *VAR_7)
{
 struct bintime VAR_8;

 FUNC_4(&VAR_7->sc_mtx, VAR_2);
 if (VAR_4 >= 2) {
  if (VAR_7->sc_flush_in_progress > 0) {
   FUNC_0(2, "%d requests flushing.",
       VAR_7->sc_flush_in_progress);
  }
  if (VAR_7->sc_copy_in_progress > 0) {
   FUNC_0(2, "%d requests copying.",
       VAR_7->sc_copy_in_progress);
  }
  if (VAR_7->sc_flush_count > 0) {
   FUNC_0(2, "%d requests to flush.",
       VAR_7->sc_flush_count);
  }
  if (VAR_7->sc_delayed_count > 0) {
   FUNC_0(2, "%d requests delayed.",
       VAR_7->sc_delayed_count);
  }
 }
 VAR_5++;
 if (VAR_7->sc_copy_in_progress > 0)
  VAR_6++;
 FUNC_1(1, &VAR_8);
 VAR_7->sc_flags &= ~VAR_0;
 VAR_7->sc_flags |= VAR_1;
 FUNC_5(VAR_7);
 while (VAR_7->sc_flags & VAR_1) {
  FUNC_3(&VAR_7->sc_journal_copying, &VAR_7->sc_mtx, VAR_3,
      "gj:switch", 0);
 }
 FUNC_2(1, &VAR_8, "Switch time of %s", VAR_7->sc_name);
}
