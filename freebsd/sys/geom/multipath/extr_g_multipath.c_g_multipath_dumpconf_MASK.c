
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct g_provider {int dummy; } ;
struct g_multipath_softc {int sc_active_active; int sc_ndisks; char* sc_uuid; struct g_consumer* sc_active; } ;
struct g_geom {struct g_multipath_softc* softc; } ;
struct g_consumer {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct g_geom*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sbuf*,char*,char const*,char*) ;

__attribute__((used)) static void
FUNC_3(struct sbuf *VAR_3, const char *VAR_4, struct g_geom *VAR_5,
    struct g_consumer *VAR_6, struct g_provider *VAR_7)
{
 struct g_multipath_softc *VAR_8;
 int VAR_9;

 FUNC_1();

 VAR_8 = VAR_5->softc;
 if (VAR_8 == ((void*)0))
  return;
 if (VAR_6 != ((void*)0)) {
  FUNC_2(VAR_3, "%s<State>%s</State>\n", VAR_4,
      (VAR_6->index & VAR_2) ? "NEW" :
      (VAR_6->index & VAR_1) ? "LOST" :
      (VAR_6->index & VAR_0) ? "FAIL" :
      (VAR_8->sc_active_active == 1 || VAR_8->sc_active == VAR_6) ?
       "ACTIVE" :
       VAR_8->sc_active_active == 2 ? "READ" : "PASSIVE");
 } else {
  VAR_9 = FUNC_0(VAR_5);
  FUNC_2(VAR_3, "%s<State>%s</State>\n", VAR_4,
      VAR_9 == 0 ? "BROKEN" :
      (VAR_9 != VAR_8->sc_ndisks || VAR_8->sc_ndisks == 1) ?
      "DEGRADED" : "OPTIMAL");
 }
 if (VAR_6 == ((void*)0) && VAR_7 == ((void*)0)) {
  FUNC_2(VAR_3, "%s<UUID>%s</UUID>\n", VAR_4, VAR_8->sc_uuid);
  FUNC_2(VAR_3, "%s<Mode>Active/%s</Mode>\n", VAR_4,
      VAR_8->sc_active_active == 2 ? "Read" :
      VAR_8->sc_active_active == 1 ? "Active" : "Passive");
  FUNC_2(VAR_3, "%s<Type>%s</Type>\n", VAR_4,
      VAR_8->sc_uuid[0] == 0 ? "MANUAL" : "AUTOMATIC");
 }
}
