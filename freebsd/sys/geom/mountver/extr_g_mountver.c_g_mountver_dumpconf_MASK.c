
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct g_provider {int dummy; } ;
struct g_mountver_softc {char* sc_provider_name; char* sc_ident; scalar_t__ sc_orphaned; } ;
struct g_geom {struct g_mountver_softc* softc; } ;
struct g_consumer {int dummy; } ;


 int FUNC_0 (struct sbuf*,char*,char const*,char*) ;

__attribute__((used)) static void
FUNC_1(struct sbuf *VAR_0, const char *VAR_1, struct g_geom *VAR_2,
    struct g_consumer *VAR_3, struct g_provider *VAR_4)
{
 struct g_mountver_softc *VAR_5;

 if (VAR_4 != ((void*)0) || VAR_3 != ((void*)0))
  return;

 VAR_5 = VAR_2->softc;
 FUNC_0(VAR_0, "%s<State>%s</State>\n", VAR_1,
     VAR_5->sc_orphaned ? "OFFLINE" : "ONLINE");
 FUNC_0(VAR_0, "%s<Provider-Name>%s</Provider-Name>\n", VAR_1, VAR_5->sc_provider_name);
 FUNC_0(VAR_0, "%s<Disk-Ident>%s</Disk-Ident>\n", VAR_1, VAR_5->sc_ident);
}
