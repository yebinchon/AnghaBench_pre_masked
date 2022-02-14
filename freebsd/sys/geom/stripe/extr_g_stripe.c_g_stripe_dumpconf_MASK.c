
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int u_int ;
struct sbuf {int dummy; } ;
struct g_stripe_softc {int sc_type; TYPE_1__* sc_provider; int sc_ndisks; scalar_t__ sc_stripesize; scalar_t__ sc_id; } ;
struct g_provider {int dummy; } ;
struct g_geom {struct g_stripe_softc* softc; } ;
struct g_consumer {scalar_t__ index; } ;
struct TYPE_2__ {scalar_t__ error; } ;




 int FUNC_0 (struct g_stripe_softc*) ;
 int FUNC_1 (struct sbuf*,char*) ;
 int FUNC_2 (struct sbuf*,char*,char const*,...) ;

__attribute__((used)) static void
FUNC_3(struct sbuf *VAR_0, const char *VAR_1, struct g_geom *VAR_2,
    struct g_consumer *VAR_3, struct g_provider *VAR_4)
{
 struct g_stripe_softc *VAR_5;

 VAR_5 = VAR_2->softc;
 if (VAR_5 == ((void*)0))
  return;
 if (VAR_4 != ((void*)0)) {

 } else if (VAR_3 != ((void*)0)) {
  FUNC_2(VAR_0, "%s<Number>%u</Number>\n", VAR_1,
      (u_int)VAR_3->index);
 } else {
  FUNC_2(VAR_0, "%s<ID>%u</ID>\n", VAR_1, (u_int)VAR_5->sc_id);
  FUNC_2(VAR_0, "%s<Stripesize>%ju</Stripesize>\n", VAR_1,
      (uintmax_t)VAR_5->sc_stripesize);
  FUNC_2(VAR_0, "%s<Type>", VAR_1);
  switch (VAR_5->sc_type) {
  case 129:
   FUNC_1(VAR_0, "AUTOMATIC");
   break;
  case 128:
   FUNC_1(VAR_0, "MANUAL");
   break;
  default:
   FUNC_1(VAR_0, "UNKNOWN");
   break;
  }
  FUNC_1(VAR_0, "</Type>\n");
  FUNC_2(VAR_0, "%s<Status>Total=%u, Online=%u</Status>\n",
      VAR_1, VAR_5->sc_ndisks, FUNC_0(VAR_5));
  FUNC_2(VAR_0, "%s<State>", VAR_1);
  if (VAR_5->sc_provider != ((void*)0) && VAR_5->sc_provider->error == 0)
   FUNC_1(VAR_0, "UP");
  else
   FUNC_1(VAR_0, "DOWN");
  FUNC_1(VAR_0, "</State>\n");
 }
}
