
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_softc {int dummy; } ;
struct gv_plex {scalar_t__ state; char* name; scalar_t__ org; } ;
struct gctl_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gctl_req*,char*,...) ;
 char* FUNC_1 (struct gctl_req*,char*,int *) ;
 int* FUNC_2 (struct gctl_req*,char*,int) ;
 struct gv_plex* FUNC_3 (struct gv_softc*,char*) ;
 int FUNC_4 (struct gv_softc*,char*) ;
 int FUNC_5 (struct gv_softc*,int ,struct gv_plex*,int *,int ,int ) ;

__attribute__((used)) static void
FUNC_6(struct gv_softc *VAR_5, struct gctl_req *VAR_6)
{
 struct gv_plex *VAR_7;
 int *VAR_8, *VAR_9, VAR_10;
 char *VAR_11;

 VAR_11 = FUNC_1(VAR_6, "plex", ((void*)0));
 if (VAR_11 == ((void*)0)) {
  FUNC_0(VAR_6, "no plex given");
  return;
 }

 VAR_8 = FUNC_2(VAR_6, "flags", sizeof(*VAR_8));
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_6, "no flags given");
  return;
 }

 VAR_9 = FUNC_2(VAR_6, "rebuild", sizeof(*VAR_9));
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_6, "no operation given");
  return;
 }

 VAR_10 = FUNC_4(VAR_5, VAR_11);
 if (VAR_10 != VAR_4) {
  FUNC_0(VAR_6, "'%s' is not a plex", VAR_11);
  return;
 }
 VAR_7 = FUNC_3(VAR_5, VAR_11);

 if (VAR_7->state != VAR_3) {
  FUNC_0(VAR_6, "plex %s is not completely accessible",
      VAR_7->name);
  return;
 }

 if (VAR_7->org != VAR_2) {
  FUNC_0(VAR_6, "plex %s is not a RAID5 plex", VAR_7->name);
  return;
 }




 if (*VAR_9)
  FUNC_5(VAR_5, VAR_1, VAR_7, ((void*)0), 0, 0);
 else
  FUNC_5(VAR_5, VAR_0, VAR_7, ((void*)0), 0, 0);
}
