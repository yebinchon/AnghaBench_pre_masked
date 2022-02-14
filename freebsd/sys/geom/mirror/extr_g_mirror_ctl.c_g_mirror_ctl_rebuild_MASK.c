
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct gctl_req {int dummy; } ;
struct g_provider {char const* name; } ;
struct g_mirror_softc {int sc_flags; int sc_lock; TYPE_1__* sc_geom; } ;
struct g_mirror_metadata {int dummy; } ;
struct TYPE_5__ {scalar_t__ ds_syncid; } ;
struct g_mirror_disk {scalar_t__ d_state; TYPE_3__* d_consumer; int d_flags; TYPE_2__ d_sync; } ;
struct g_class {int dummy; } ;
typedef int param ;
struct TYPE_6__ {struct g_provider* provider; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct g_mirror_softc*,struct g_provider*,struct g_mirror_metadata*) ;
 int FUNC_1 (struct g_mirror_disk*,int ,int ) ;
 struct g_mirror_softc* FUNC_2 (struct g_class*,char const*) ;
 struct g_mirror_disk* FUNC_3 (struct g_mirror_softc*,char const*) ;
 int FUNC_4 (struct g_mirror_softc*,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,struct g_mirror_metadata*) ;
 int FUNC_6 (struct g_mirror_disk*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct gctl_req*,char*,...) ;
 char* FUNC_10 (struct gctl_req*,char*) ;
 int* FUNC_11 (struct gctl_req*,char*,int) ;
 int FUNC_12 (char*,int,char*,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void
FUNC_14(struct gctl_req *VAR_5, struct g_class *VAR_6)
{
 struct g_mirror_metadata VAR_7;
 struct g_mirror_softc *VAR_8;
 struct g_mirror_disk *VAR_9;
 struct g_provider *VAR_10;
 const char *VAR_11;
 char VAR_12[16];
 int VAR_13, *VAR_14;
 u_int VAR_15;

 VAR_14 = FUNC_11(VAR_5, "nargs", sizeof(*VAR_14));
 if (VAR_14 == ((void*)0)) {
  FUNC_9(VAR_5, "No '%s' argument.", "nargs");
  return;
 }
 if (*VAR_14 < 2) {
  FUNC_9(VAR_5, "Too few arguments.");
  return;
 }
 VAR_11 = FUNC_10(VAR_5, "arg0");
 if (VAR_11 == ((void*)0)) {
  FUNC_9(VAR_5, "No 'arg%u' argument.", 0);
  return;
 }
 VAR_8 = FUNC_2(VAR_6, VAR_11);
 if (VAR_8 == ((void*)0)) {
  FUNC_9(VAR_5, "No such device: %s.", VAR_11);
  return;
 }
 for (VAR_15 = 1; VAR_15 < (u_int)*VAR_14; VAR_15++) {
  FUNC_12(VAR_12, sizeof(VAR_12), "arg%u", VAR_15);
  VAR_11 = FUNC_10(VAR_5, VAR_12);
  if (VAR_11 == ((void*)0)) {
   FUNC_9(VAR_5, "No 'arg%u' argument.", VAR_15);
   continue;
  }
  VAR_9 = FUNC_3(VAR_8, VAR_11);
  if (VAR_9 == ((void*)0)) {
   FUNC_9(VAR_5, "No such provider: %s.", VAR_11);
   continue;
  }
  if (FUNC_4(VAR_8, VAR_2) == 1 &&
      VAR_9->d_state == VAR_2) {




   FUNC_9(VAR_5,
       "Provider %s is the last active provider in %s.",
       VAR_11, VAR_8->sc_geom->name);
   break;
  }




  VAR_9->d_sync.ds_syncid = 0;
  if ((VAR_8->sc_flags & VAR_0) != 0)
   VAR_9->d_flags |= VAR_1;
  FUNC_6(VAR_9);
  VAR_10 = VAR_9->d_consumer->provider;
  FUNC_7();
  VAR_13 = FUNC_5(VAR_9->d_consumer, &VAR_7);
  FUNC_8();
  FUNC_1(VAR_9, VAR_3,
      VAR_4);
  if (VAR_13 != 0) {
   FUNC_9(VAR_5, "Cannot read metadata from %s.",
       VAR_10->name);
   continue;
  }
  VAR_13 = FUNC_0(VAR_8, VAR_10, &VAR_7);
  if (VAR_13 != 0) {
   FUNC_9(VAR_5, "Cannot reconnect component %s.",
       VAR_10->name);
   continue;
  }
 }
 FUNC_13(&VAR_8->sc_lock);
}
