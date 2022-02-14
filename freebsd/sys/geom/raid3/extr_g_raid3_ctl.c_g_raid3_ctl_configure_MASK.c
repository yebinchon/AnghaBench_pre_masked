
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct gctl_req {int dummy; } ;
struct g_raid3_softc {scalar_t__ sc_ndisks; int sc_flags; int sc_lock; struct g_raid3_disk* sc_disks; } ;
struct g_raid3_disk {scalar_t__ d_state; int d_flags; } ;
struct g_class {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct g_raid3_disk*,int ,int ) ;
 struct g_raid3_softc* FUNC_1 (struct g_class*,char const*) ;
 scalar_t__ FUNC_2 (struct g_raid3_softc*,int) ;
 int FUNC_3 (struct g_raid3_disk*) ;
 int FUNC_4 (struct gctl_req*,char*,...) ;
 char* FUNC_5 (struct gctl_req*,char*) ;
 int* FUNC_6 (struct gctl_req*,char*,int) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct gctl_req *VAR_10, struct g_class *VAR_11)
{
 struct g_raid3_softc *VAR_12;
 struct g_raid3_disk *VAR_13;
 const char *VAR_14;
 int *VAR_15, VAR_16 = 0, VAR_17 = 1;
 int *VAR_18, *VAR_19;
 int *VAR_20, *VAR_21;
 int *VAR_22, *VAR_23;
 int *VAR_24, *VAR_25;
 u_int VAR_26;

 VAR_15 = FUNC_6(VAR_10, "nargs", sizeof(*VAR_15));
 if (VAR_15 == ((void*)0)) {
  FUNC_4(VAR_10, "No '%s' argument.", "nargs");
  return;
 }
 if (*VAR_15 != 1) {
  FUNC_4(VAR_10, "Invalid number of arguments.");
  return;
 }
 VAR_18 = FUNC_6(VAR_10, "autosync", sizeof(*VAR_18));
 if (VAR_18 == ((void*)0)) {
  FUNC_4(VAR_10, "No '%s' argument.", "autosync");
  return;
 }
 VAR_19 = FUNC_6(VAR_10, "noautosync", sizeof(*VAR_19));
 if (VAR_19 == ((void*)0)) {
  FUNC_4(VAR_10, "No '%s' argument.", "noautosync");
  return;
 }
 if (*VAR_18 && *VAR_19) {
  FUNC_4(VAR_10, "'%s' and '%s' specified.", "autosync",
      "noautosync");
  return;
 }
 VAR_20 = FUNC_6(VAR_10, "failsync", sizeof(*VAR_20));
 if (VAR_20 == ((void*)0)) {
  FUNC_4(VAR_10, "No '%s' argument.", "failsync");
  return;
 }
 VAR_21 = FUNC_6(VAR_10, "nofailsync", sizeof(*VAR_21));
 if (VAR_21 == ((void*)0)) {
  FUNC_4(VAR_10, "No '%s' argument.", "nofailsync");
  return;
 }
 if (*VAR_20 && *VAR_21) {
  FUNC_4(VAR_10, "'%s' and '%s' specified.", "failsync",
      "nofailsync");
  return;
 }
 VAR_22 = FUNC_6(VAR_10, "round_robin", sizeof(*VAR_22));
 if (VAR_22 == ((void*)0)) {
  FUNC_4(VAR_10, "No '%s' argument.", "round_robin");
  return;
 }
 VAR_23 = FUNC_6(VAR_10, "noround_robin",
     sizeof(*VAR_23));
 if (VAR_23 == ((void*)0)) {
  FUNC_4(VAR_10, "No '%s' argument.", "noround_robin");
  return;
 }
 if (*VAR_22 && *VAR_23) {
  FUNC_4(VAR_10, "'%s' and '%s' specified.", "round_robin",
      "noround_robin");
  return;
 }
 VAR_24 = FUNC_6(VAR_10, "verify", sizeof(*VAR_24));
 if (VAR_24 == ((void*)0)) {
  FUNC_4(VAR_10, "No '%s' argument.", "verify");
  return;
 }
 VAR_25 = FUNC_6(VAR_10, "noverify", sizeof(*VAR_25));
 if (VAR_25 == ((void*)0)) {
  FUNC_4(VAR_10, "No '%s' argument.", "noverify");
  return;
 }
 if (*VAR_24 && *VAR_25) {
  FUNC_4(VAR_10, "'%s' and '%s' specified.", "verify",
      "noverify");
  return;
 }
 if (!*VAR_18 && !*VAR_19 && !*VAR_20 && !*VAR_21 &&
     !*VAR_22 && !*VAR_23 && !*VAR_24 && !*VAR_25) {
  FUNC_4(VAR_10, "Nothing has changed.");
  return;
 }
 VAR_14 = FUNC_5(VAR_10, "arg0");
 if (VAR_14 == ((void*)0)) {
  FUNC_4(VAR_10, "No 'arg%u' argument.", 0);
  return;
 }
 VAR_12 = FUNC_1(VAR_11, VAR_14);
 if (VAR_12 == ((void*)0)) {
  FUNC_4(VAR_10, "No such device: %s.", VAR_14);
  return;
 }
 if (FUNC_2(VAR_12, -1) < VAR_12->sc_ndisks) {
  FUNC_4(VAR_10, "Not all disks connected.");
  FUNC_7(&VAR_12->sc_lock);
  return;
 }
 if ((VAR_12->sc_flags & VAR_0) != 0) {
  if (*VAR_18) {
   VAR_12->sc_flags &= ~VAR_0;
   VAR_16 = 1;
  }
 } else {
  if (*VAR_19)
   VAR_12->sc_flags |= VAR_0;
 }
 if ((VAR_12->sc_flags & VAR_1) != 0) {
  if (*VAR_20)
   VAR_12->sc_flags &= ~VAR_1;
 } else {
  if (*VAR_21) {
   VAR_12->sc_flags |= VAR_1;
   VAR_17 = 0;
  }
 }
 if ((VAR_12->sc_flags & VAR_3) != 0) {
  if (*VAR_25)
   VAR_12->sc_flags &= ~VAR_3;
 } else {
  if (*VAR_24)
   VAR_12->sc_flags |= VAR_3;
 }
 if ((VAR_12->sc_flags & VAR_2) != 0) {
  if (*VAR_23)
   VAR_12->sc_flags &= ~VAR_2;
 } else {
  if (*VAR_22)
   VAR_12->sc_flags |= VAR_2;
 }
 if ((VAR_12->sc_flags & VAR_3) != 0 &&
     (VAR_12->sc_flags & VAR_2) != 0) {



  VAR_12->sc_flags &= ~VAR_2;
 }
 for (VAR_26 = 0; VAR_26 < VAR_12->sc_ndisks; VAR_26++) {
  VAR_13 = &VAR_12->sc_disks[VAR_26];
  if (VAR_16) {
   if (VAR_13->d_state == VAR_8)
    VAR_13->d_flags &= ~VAR_5;
  }
  if (!VAR_17)
   VAR_13->d_flags &= ~VAR_4;
  FUNC_3(VAR_13);
  if (VAR_16) {
   if (VAR_13->d_state == VAR_7) {




    FUNC_0(VAR_13,
        VAR_6,
        VAR_9);
   }
  }
 }
 FUNC_7(&VAR_12->sc_lock);
}
