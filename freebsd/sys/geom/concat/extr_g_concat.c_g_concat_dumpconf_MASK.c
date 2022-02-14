
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct sbuf {int dummy; } ;
struct g_provider {int dummy; } ;
struct g_geom {struct g_concat_softc* softc; } ;
struct g_consumer {struct g_concat_disk* private; } ;
struct g_concat_softc {int sc_type; TYPE_1__* sc_provider; int sc_ndisks; scalar_t__ sc_id; } ;
struct g_concat_disk {scalar_t__ d_start; scalar_t__ d_end; } ;
typedef int intmax_t ;
struct TYPE_2__ {scalar_t__ error; } ;




 int FUNC_0 (struct g_concat_softc*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct sbuf*,char*) ;
 int FUNC_3 (struct sbuf*,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_4(struct sbuf *VAR_0, const char *VAR_1, struct g_geom *VAR_2,
    struct g_consumer *VAR_3, struct g_provider *VAR_4)
{
 struct g_concat_softc *VAR_5;

 FUNC_1();
 VAR_5 = VAR_2->softc;
 if (VAR_5 == ((void*)0))
  return;
 if (VAR_4 != ((void*)0)) {

 } else if (VAR_3 != ((void*)0)) {
  struct g_concat_disk *VAR_6;

  VAR_6 = VAR_3->private;
  if (VAR_6 == ((void*)0))
   return;
  FUNC_3(VAR_0, "%s<End>%jd</End>\n", VAR_1,
      (intmax_t)VAR_6->d_end);
  FUNC_3(VAR_0, "%s<Start>%jd</Start>\n", VAR_1,
      (intmax_t)VAR_6->d_start);
 } else {
  FUNC_3(VAR_0, "%s<ID>%u</ID>\n", VAR_1, (u_int)VAR_5->sc_id);
  FUNC_3(VAR_0, "%s<Type>", VAR_1);
  switch (VAR_5->sc_type) {
  case 129:
   FUNC_2(VAR_0, "AUTOMATIC");
   break;
  case 128:
   FUNC_2(VAR_0, "MANUAL");
   break;
  default:
   FUNC_2(VAR_0, "UNKNOWN");
   break;
  }
  FUNC_2(VAR_0, "</Type>\n");
  FUNC_3(VAR_0, "%s<Status>Total=%u, Online=%u</Status>\n",
      VAR_1, VAR_5->sc_ndisks, FUNC_0(VAR_5));
  FUNC_3(VAR_0, "%s<State>", VAR_1);
  if (VAR_5->sc_provider != ((void*)0) && VAR_5->sc_provider->error == 0)
   FUNC_2(VAR_0, "UP");
  else
   FUNC_2(VAR_0, "DOWN");
  FUNC_2(VAR_0, "</State>\n");
 }
}
