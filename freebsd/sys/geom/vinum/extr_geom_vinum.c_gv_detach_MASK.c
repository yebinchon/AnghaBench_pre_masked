
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_softc {int dummy; } ;
struct gv_sd {int dummy; } ;
typedef struct gv_sd gv_plex ;
struct gctl_req {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct gctl_req*,char*) ;
 char* FUNC_1 (struct gctl_req*,char*,int *) ;
 int* FUNC_2 (struct gctl_req*,char*,int) ;
 struct gv_sd* FUNC_3 (struct gv_softc*,char*) ;
 struct gv_sd* FUNC_4 (struct gv_softc*,char*) ;
 int FUNC_5 (struct gv_softc*,char*) ;
 int FUNC_6 (struct gv_softc*,int ,struct gv_sd*,int *,int,int ) ;

__attribute__((used)) static void
FUNC_7(struct gv_softc *VAR_2, struct gctl_req *VAR_3)
{
 struct gv_plex *VAR_4;
 struct gv_sd *VAR_5;
 int *VAR_6, VAR_7;
 char *VAR_8;

 VAR_8 = FUNC_1(VAR_3, "object", ((void*)0));
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_3, "no argument given");
  return;
 }

 VAR_6 = FUNC_2(VAR_3, "flags", sizeof(*VAR_6));
 VAR_7 = FUNC_5(VAR_2, VAR_8);
 switch (VAR_7) {
 case 129:
  VAR_4 = FUNC_3(VAR_2, VAR_8);
  FUNC_6(VAR_2, VAR_0, VAR_4, ((void*)0), *VAR_6, 0);
  break;
 case 128:
  VAR_5 = FUNC_4(VAR_2, VAR_8);
  FUNC_6(VAR_2, VAR_1, VAR_5, ((void*)0), *VAR_6, 0);
  break;
 default:
  FUNC_0(VAR_3, "invalid object type");
  break;
 }
}
