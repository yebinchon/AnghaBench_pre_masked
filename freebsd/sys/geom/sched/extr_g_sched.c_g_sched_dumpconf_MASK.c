
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct g_sched_softc {struct g_gsched* sc_gsched; } ;
struct g_provider {int dummy; } ;
struct g_gsched {char* gs_name; int (* gs_dumpconf ) (struct sbuf*,char const*,struct g_geom*,struct g_consumer*,struct g_provider*) ;} ;
struct g_geom {struct g_sched_softc* softc; } ;
struct g_consumer {int dummy; } ;


 int FUNC_0 (struct sbuf*,char*,char*) ;
 int FUNC_1 (struct sbuf*,char const*,struct g_geom*,struct g_consumer*,struct g_provider*) ;

__attribute__((used)) static void
FUNC_2(struct sbuf *VAR_0, const char *VAR_1, struct g_geom *VAR_2,
    struct g_consumer *VAR_3, struct g_provider *VAR_4)
{
 struct g_sched_softc *VAR_5 = VAR_2->softc;
 struct g_gsched *VAR_6 = VAR_5->sc_gsched;
 if (VAR_1 == ((void*)0)) {
  FUNC_0(VAR_0, " algo %s", VAR_6 ? VAR_6->gs_name : "--");
 }
 if (VAR_6 != ((void*)0) && VAR_6->gs_dumpconf)
  VAR_6->gs_dumpconf(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
