
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_volume {int dummy; } ;
struct gv_softc {int dummy; } ;
typedef struct gv_volume gv_sd ;
typedef struct gv_volume gv_plex ;
struct gctl_req {int dummy; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct gctl_req*,char*) ;
 char* FUNC_1 (struct gctl_req*,char*,int *) ;
 void* FUNC_2 (struct gctl_req*,char*,int) ;
 struct gv_volume* FUNC_3 (struct gv_softc*,char*) ;
 struct gv_volume* FUNC_4 (struct gv_softc*,char*) ;
 struct gv_volume* FUNC_5 (struct gv_softc*,char*) ;
 int FUNC_6 (struct gv_softc*,char*) ;
 int FUNC_7 (struct gv_softc*,int ,struct gv_volume*,struct gv_volume*,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct gv_softc *VAR_3, struct gctl_req *VAR_4)
{
 struct gv_volume *VAR_5;
 struct gv_plex *VAR_6;
 struct gv_sd *VAR_7;
 off_t *VAR_8;
 int *VAR_9, VAR_10, VAR_11;
 char *VAR_12, *VAR_13;

 VAR_12 = FUNC_1(VAR_4, "child", ((void*)0));
 if (VAR_12 == ((void*)0)) {
  FUNC_0(VAR_4, "no child given");
  return;
 }
 VAR_13 = FUNC_1(VAR_4, "parent", ((void*)0));
 if (VAR_13 == ((void*)0)) {
  FUNC_0(VAR_4, "no parent given");
  return;
 }
 VAR_8 = FUNC_2(VAR_4, "offset", sizeof(*VAR_8));
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_4, "no offset given");
  return;
 }
 VAR_9 = FUNC_2(VAR_4, "rename", sizeof(*VAR_9));
 if (VAR_9 == ((void*)0)) {
  FUNC_0(VAR_4, "no rename flag given");
  return;
 }

 VAR_10 = FUNC_6(VAR_3, VAR_12);
 VAR_11 = FUNC_6(VAR_3, VAR_13);

 switch (VAR_10) {
 case 129:
  if (VAR_11 != VAR_2) {
   FUNC_0(VAR_4, "no such volume to attach to");
   return;
  }
  VAR_5 = FUNC_5(VAR_3, VAR_13);
  VAR_6 = FUNC_3(VAR_3, VAR_12);
  FUNC_7(VAR_3, VAR_0, VAR_6, VAR_5, *VAR_8, *VAR_9);
  break;
 case 128:
  if (VAR_11 != 129) {
   FUNC_0(VAR_4, "no such plex to attach to");
   return;
  }
  VAR_6 = FUNC_3(VAR_3, VAR_13);
  VAR_7 = FUNC_4(VAR_3, VAR_12);
  FUNC_7(VAR_3, VAR_1, VAR_7, VAR_6, *VAR_8, *VAR_9);
  break;
 default:
  FUNC_0(VAR_4, "invalid child type");
  break;
 }
}
