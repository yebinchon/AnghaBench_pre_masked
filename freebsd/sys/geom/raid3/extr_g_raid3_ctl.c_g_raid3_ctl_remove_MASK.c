
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gctl_req {int dummy; } ;
struct g_raid3_softc {size_t sc_ndisks; int sc_lock; struct g_raid3_disk* sc_disks; } ;
struct g_raid3_disk {int d_state; } ;
struct g_class {int dummy; } ;
typedef size_t intmax_t ;



 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct g_raid3_disk*) ;
 int FUNC_1 (struct g_raid3_disk*,int ,int ) ;
 struct g_raid3_softc* FUNC_2 (struct g_class*,char const*) ;
 size_t FUNC_3 (struct g_raid3_disk*) ;
 size_t FUNC_4 (struct g_raid3_softc*,int const) ;
 int FUNC_5 (struct gctl_req*,char*,...) ;
 char* FUNC_6 (struct gctl_req*,char*) ;
 void* FUNC_7 (struct gctl_req*,char*,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct gctl_req *VAR_2, struct g_class *VAR_3)
{
 struct g_raid3_softc *VAR_4;
 struct g_raid3_disk *VAR_5;
 const char *VAR_6;
 intmax_t *VAR_7;
 int *VAR_8;

 VAR_8 = FUNC_7(VAR_2, "nargs", sizeof(*VAR_8));
 if (VAR_8 == ((void*)0)) {
  FUNC_5(VAR_2, "No '%s' argument.", "nargs");
  return;
 }
 if (*VAR_8 != 1) {
  FUNC_5(VAR_2, "Invalid number of arguments.");
  return;
 }
 VAR_7 = FUNC_7(VAR_2, "number", sizeof(*VAR_7));
 if (VAR_7 == ((void*)0)) {
  FUNC_5(VAR_2, "No '%s' argument.", "no");
  return;
 }
 VAR_6 = FUNC_6(VAR_2, "arg0");
 if (VAR_6 == ((void*)0)) {
  FUNC_5(VAR_2, "No 'arg%u' argument.", 0);
  return;
 }
 VAR_4 = FUNC_2(VAR_3, VAR_6);
 if (VAR_4 == ((void*)0)) {
  FUNC_5(VAR_2, "No such device: %s.", VAR_6);
  return;
 }
 if (*VAR_7 >= VAR_4->sc_ndisks) {
  FUNC_8(&VAR_4->sc_lock);
  FUNC_5(VAR_2, "Invalid component number.");
  return;
 }
 VAR_5 = &VAR_4->sc_disks[*VAR_7];
 switch (VAR_5->d_state) {
 case 131:




  if (FUNC_4(VAR_4, 131) <
      VAR_4->sc_ndisks) {
   FUNC_5(VAR_2, "Cannot replace component number %jd.",
       *VAR_7);
   break;
  }

 case 129:
 case 128:
  if (FUNC_0(VAR_5) != 0) {
   FUNC_5(VAR_2, "Cannot clear metadata on %s.",
       FUNC_3(VAR_5));
  } else {
   FUNC_1(VAR_5,
       VAR_0,
       VAR_1);
  }
  break;
 case 130:
  break;
 default:
  FUNC_5(VAR_2, "Cannot replace component number %jd.", *VAR_7);
  break;
 }
 FUNC_8(&VAR_4->sc_lock);
}
