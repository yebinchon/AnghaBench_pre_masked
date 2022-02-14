
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sbuf {int dummy; } ;
struct g_provider {int dummy; } ;
struct g_journal_softc {scalar_t__ sc_id; scalar_t__ sc_jend; scalar_t__ sc_jstart; struct g_consumer* sc_jconsumer; struct g_consumer* sc_dconsumer; } ;
struct g_geom {struct g_journal_softc* softc; } ;
struct g_consumer {int dummy; } ;
typedef int intmax_t ;


 int FUNC_0 () ;
 int FUNC_1 (struct sbuf*,char*) ;
 int FUNC_2 (struct sbuf*,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_3(struct sbuf *VAR_0, const char *VAR_1, struct g_geom *VAR_2,
    struct g_consumer *VAR_3, struct g_provider *VAR_4)
{
 struct g_journal_softc *VAR_5;

 FUNC_0();

 VAR_5 = VAR_2->softc;
 if (VAR_5 == ((void*)0))
  return;
 if (VAR_4 != ((void*)0)) {

 } else if (VAR_3 != ((void*)0)) {
  int VAR_6 = 1;

  FUNC_2(VAR_0, "%s<Role>", VAR_1);
  if (VAR_3 == VAR_5->sc_dconsumer) {
   FUNC_1(VAR_0, "Data");
   VAR_6 = 0;
  }
  if (VAR_3 == VAR_5->sc_jconsumer) {
   if (!VAR_6)
    FUNC_1(VAR_0, ",");
   FUNC_1(VAR_0, "Journal");
  }
  FUNC_1(VAR_0, "</Role>\n");
  if (VAR_3 == VAR_5->sc_jconsumer) {
   FUNC_2(VAR_0, "<Jstart>%jd</Jstart>\n",
       (intmax_t)VAR_5->sc_jstart);
   FUNC_2(VAR_0, "<Jend>%jd</Jend>\n",
       (intmax_t)VAR_5->sc_jend);
  }
 } else {
  FUNC_2(VAR_0, "%s<ID>%u</ID>\n", VAR_1, (u_int)VAR_5->sc_id);
 }
}
