
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gctl_req {int dummy; } ;
struct g_raid3_softc {scalar_t__ sc_ndisks; int sc_flags; int sc_lock; } ;
struct g_raid3_metadata {int dummy; } ;
struct TYPE_3__ {scalar_t__ ds_syncid; } ;
struct g_raid3_disk {scalar_t__ d_state; TYPE_2__* d_consumer; int d_flags; TYPE_1__ d_sync; } ;
struct g_provider {char const* name; } ;
struct g_class {int dummy; } ;
struct TYPE_4__ {struct g_provider* provider; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct g_raid3_softc*,struct g_provider*,struct g_raid3_metadata*) ;
 int FUNC_1 (struct g_raid3_disk*,int ,int ) ;
 struct g_raid3_softc* FUNC_2 (struct g_class*,char const*) ;
 struct g_raid3_disk* FUNC_3 (struct g_raid3_softc*,char const*) ;
 scalar_t__ FUNC_4 (struct g_raid3_softc*,scalar_t__) ;
 int FUNC_5 (TYPE_2__*,struct g_raid3_metadata*) ;
 int FUNC_6 (struct g_raid3_disk*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct gctl_req*,char*,...) ;
 char* FUNC_10 (struct gctl_req*,char*) ;
 int* FUNC_11 (struct gctl_req*,char*,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(struct gctl_req *VAR_5, struct g_class *VAR_6)
{
 struct g_raid3_metadata VAR_7;
 struct g_raid3_softc *VAR_8;
 struct g_raid3_disk *VAR_9;
 struct g_provider *VAR_10;
 const char *VAR_11;
 int VAR_12, *VAR_13;

 VAR_13 = FUNC_11(VAR_5, "nargs", sizeof(*VAR_13));
 if (VAR_13 == ((void*)0)) {
  FUNC_9(VAR_5, "No '%s' argument.", "nargs");
  return;
 }
 if (*VAR_13 != 2) {
  FUNC_9(VAR_5, "Invalid number of arguments.");
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
 VAR_11 = FUNC_10(VAR_5, "arg1");
 if (VAR_11 == ((void*)0)) {
  FUNC_9(VAR_5, "No 'arg%u' argument.", 1);
  FUNC_12(&VAR_8->sc_lock);
  return;
 }
 VAR_9 = FUNC_3(VAR_8, VAR_11);
 if (VAR_9 == ((void*)0)) {
  FUNC_9(VAR_5, "No such provider: %s.", VAR_11);
  FUNC_12(&VAR_8->sc_lock);
  return;
 }
 if (VAR_9->d_state == VAR_2 &&
     FUNC_4(VAR_8, VAR_2) < VAR_8->sc_ndisks) {
  FUNC_9(VAR_5, "There is one stale disk already.");
  FUNC_12(&VAR_8->sc_lock);
  return;
 }




 VAR_9->d_sync.ds_syncid = 0;
 if ((VAR_8->sc_flags & VAR_0) != 0)
  VAR_9->d_flags |= VAR_1;
 FUNC_6(VAR_9);
 VAR_10 = VAR_9->d_consumer->provider;
 FUNC_7();
 VAR_12 = FUNC_5(VAR_9->d_consumer, &VAR_7);
 FUNC_8();
 FUNC_1(VAR_9, VAR_3,
     VAR_4);
 if (VAR_12 != 0) {
  FUNC_9(VAR_5, "Cannot read metadata from %s.", VAR_10->name);
  FUNC_12(&VAR_8->sc_lock);
  return;
 }
 VAR_12 = FUNC_0(VAR_8, VAR_10, &VAR_7);
 if (VAR_12 != 0)
  FUNC_9(VAR_5, "Cannot reconnect component %s.", VAR_10->name);
 FUNC_12(&VAR_8->sc_lock);
}
