
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct g_eli_metadata {int md_keys; } ;
typedef struct g_eli_metadata u_char ;
struct gctl_req {int dummy; } ;
struct g_provider {char const* name; } ;
struct g_eli_softc {int sc_flags; int sc_queue_mtx; TYPE_1__* sc_geom; } ;
struct g_consumer {struct g_provider* provider; } ;
struct g_class {int dummy; } ;
typedef int mkey ;
typedef int md ;
struct TYPE_2__ {int consumer; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char const*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 struct g_consumer* FUNC_1 (int *) ;
 int FUNC_2 (struct g_eli_metadata*,int) ;
 struct g_eli_softc* FUNC_3 (struct g_class*,char const*) ;
 int FUNC_4 (struct g_eli_metadata*,struct g_eli_metadata*,struct g_eli_metadata*,int *) ;
 int FUNC_5 (struct g_eli_softc*,struct g_eli_metadata*) ;
 int FUNC_6 (struct g_class*,struct g_provider*,struct g_eli_metadata*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct gctl_req*,char*,...) ;
 char* FUNC_9 (struct gctl_req*,char*) ;
 struct g_eli_metadata* FUNC_10 (struct gctl_req*,char*,int*) ;
 int* FUNC_11 (struct gctl_req*,char*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct g_eli_softc*) ;

__attribute__((used)) static void
FUNC_15(struct gctl_req *VAR_3, struct g_class *VAR_4)
{
 struct g_eli_metadata VAR_5;
 struct g_eli_softc *VAR_6;
 struct g_provider *VAR_7;
 struct g_consumer *VAR_8;
 const char *VAR_9;
 u_char *VAR_10, VAR_11[VAR_0];
 int *VAR_12, VAR_13, VAR_14;
 u_int VAR_15;

 FUNC_7();

 VAR_12 = FUNC_11(VAR_3, "nargs", sizeof(*VAR_12));
 if (VAR_12 == ((void*)0)) {
  FUNC_8(VAR_3, "No '%s' argument.", "nargs");
  return;
 }
 if (*VAR_12 != 1) {
  FUNC_8(VAR_3, "Invalid number of arguments.");
  return;
 }

 VAR_9 = FUNC_9(VAR_3, "arg0");
 if (VAR_9 == ((void*)0)) {
  FUNC_8(VAR_3, "No 'arg%u' argument.", 0);
  return;
 }
 VAR_10 = FUNC_10(VAR_3, "key", &VAR_13);
 if (VAR_10 == ((void*)0) || VAR_13 != VAR_2) {
  FUNC_8(VAR_3, "No '%s' argument.", "key");
  return;
 }
 VAR_6 = FUNC_3(VAR_4, VAR_9);
 if (VAR_6 == ((void*)0)) {
  FUNC_8(VAR_3, "Provider %s is invalid.", VAR_9);
  return;
 }
 VAR_8 = FUNC_1(&VAR_6->sc_geom->consumer);
 VAR_7 = VAR_8->provider;
 VAR_14 = FUNC_6(VAR_4, VAR_7, &VAR_5);
 if (VAR_14 != 0) {
  FUNC_8(VAR_3, "Cannot read metadata from %s (error=%d).",
      VAR_9, VAR_14);
  return;
 }
 if (VAR_5.md_keys == 0x00) {
  FUNC_2(&VAR_5, sizeof(VAR_5));
  FUNC_8(VAR_3, "No valid keys on %s.", VAR_7->name);
  return;
 }

 VAR_14 = FUNC_4(&VAR_5, VAR_10, VAR_11, &VAR_15);
 FUNC_2(VAR_10, VAR_13);
 if (VAR_14 == -1) {
  FUNC_2(&VAR_5, sizeof(VAR_5));
  FUNC_8(VAR_3, "Wrong key for %s.", VAR_7->name);
  return;
 } else if (VAR_14 > 0) {
  FUNC_2(&VAR_5, sizeof(VAR_5));
  FUNC_8(VAR_3, "Cannot decrypt Master Key for %s (error=%d).",
      VAR_7->name, VAR_14);
  return;
 }
 FUNC_0(1, "Using Master Key %u for %s.", VAR_15, VAR_7->name);

 FUNC_12(&VAR_6->sc_queue_mtx);
 if (!(VAR_6->sc_flags & VAR_1))
  FUNC_8(VAR_3, "Device %s is not suspended.", VAR_9);
 else {

  FUNC_5(VAR_6, VAR_11);
  VAR_6->sc_flags &= ~VAR_1;
  FUNC_0(1, "Resumed %s.", VAR_7->name);
  FUNC_14(VAR_6);
 }
 FUNC_13(&VAR_6->sc_queue_mtx);
 FUNC_2(VAR_11, sizeof(VAR_11));
 FUNC_2(&VAR_5, sizeof(VAR_5));
}
