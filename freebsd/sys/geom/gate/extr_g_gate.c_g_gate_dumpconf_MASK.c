
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct g_provider {int dummy; } ;
struct g_geom {struct g_gate_softc* softc; } ;
struct g_gate_softc {char* sc_unit; int sc_flags; char* sc_timeout; char* sc_info; char* sc_queue_count; char* sc_queue_size; char* sc_ref; TYPE_2__* sc_readcons; scalar_t__ sc_readoffset; } ;
struct g_consumer {int dummy; } ;
typedef char* intmax_t ;
struct TYPE_4__ {TYPE_1__* provider; } ;
struct TYPE_3__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct g_gate_softc* FUNC_0 (char*,int *) ;
 int FUNC_1 (struct g_gate_softc*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sbuf*,char*,char const*,char*) ;

__attribute__((used)) static void
FUNC_5(struct sbuf *VAR_2, const char *VAR_3, struct g_geom *VAR_4,
    struct g_consumer *VAR_5, struct g_provider *VAR_6)
{
 struct g_gate_softc *VAR_7;

 VAR_7 = VAR_4->softc;
 if (VAR_7 == ((void*)0) || VAR_6 != ((void*)0) || VAR_5 != ((void*)0))
  return;
 VAR_7 = FUNC_0(VAR_7->sc_unit, ((void*)0));
 if (VAR_7 == ((void*)0))
  return;
 if ((VAR_7->sc_flags & VAR_0) != 0) {
  FUNC_4(VAR_2, "%s<access>%s</access>\n", VAR_3, "read-only");
 } else if ((VAR_7->sc_flags & VAR_1) != 0) {
  FUNC_4(VAR_2, "%s<access>%s</access>\n", VAR_3,
      "write-only");
 } else {
  FUNC_4(VAR_2, "%s<access>%s</access>\n", VAR_3,
      "read-write");
 }
 if (VAR_7->sc_readcons != ((void*)0)) {
  FUNC_4(VAR_2, "%s<read_offset>%jd</read_offset>\n",
      VAR_3, (intmax_t)VAR_7->sc_readoffset);
  FUNC_4(VAR_2, "%s<read_provider>%s</read_provider>\n",
      VAR_3, VAR_7->sc_readcons->provider->name);
 }
 FUNC_4(VAR_2, "%s<timeout>%u</timeout>\n", VAR_3, VAR_7->sc_timeout);
 FUNC_4(VAR_2, "%s<info>%s</info>\n", VAR_3, VAR_7->sc_info);
 FUNC_4(VAR_2, "%s<queue_count>%u</queue_count>\n", VAR_3,
     VAR_7->sc_queue_count);
 FUNC_4(VAR_2, "%s<queue_size>%u</queue_size>\n", VAR_3,
     VAR_7->sc_queue_size);
 FUNC_4(VAR_2, "%s<ref>%u</ref>\n", VAR_3, VAR_7->sc_ref);
 FUNC_4(VAR_2, "%s<unit>%d</unit>\n", VAR_3, VAR_7->sc_unit);
 FUNC_3();
 FUNC_1(VAR_7);
 FUNC_2();
}
