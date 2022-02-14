
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_volume {int dummy; } ;
struct gv_softc {int dummy; } ;
typedef struct gv_volume gv_plex ;
struct gctl_req {int dummy; } ;
struct g_geom {struct gv_softc* softc; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct gctl_req*,char*,...) ;
 char* FUNC_1 (struct gctl_req*,char*,int *) ;
 int* FUNC_2 (struct gctl_req*,char*,int) ;
 struct gv_volume* FUNC_3 (struct gv_softc*,char*) ;
 struct gv_volume* FUNC_4 (struct gv_softc*,char*) ;
 int FUNC_5 (struct gv_softc*,char*) ;
 int FUNC_6 (struct gv_softc*,int ,struct gv_volume*,int *,int,int ) ;
 int FUNC_7 (char*,int,char*,int) ;

void
FUNC_8(struct g_geom *VAR_2, struct gctl_req *VAR_3)
{
 struct gv_softc *VAR_4;
 struct gv_volume *VAR_5;
 struct gv_plex *VAR_6;
 int *VAR_7, *VAR_8;
 char *VAR_9, VAR_10[20];
 int VAR_11, VAR_12;

 VAR_7 = FUNC_2(VAR_3, "argc", sizeof(*VAR_7));
 VAR_8 = FUNC_2(VAR_3, "initsize", sizeof(*VAR_8));

 if (VAR_7 == ((void*)0) || *VAR_7 == 0) {
  FUNC_0(VAR_3, "no arguments given");
  return;
 }

 VAR_4 = VAR_2->softc;

 for (VAR_11 = 0; VAR_11 < *VAR_7; VAR_11++) {
  FUNC_7(VAR_10, sizeof(VAR_10), "argv%d", VAR_11);
  VAR_9 = FUNC_1(VAR_3, VAR_10, ((void*)0));
  if (VAR_9 == ((void*)0))
   continue;
  VAR_12 = FUNC_5(VAR_4, VAR_9);
  switch (VAR_12) {
  case 128:
   VAR_5 = FUNC_4(VAR_4, VAR_9);
   if (VAR_5 != ((void*)0))
    FUNC_6(VAR_4, VAR_1, VAR_5,
        ((void*)0), *VAR_8, 0);
   break;

  case 130:
   VAR_6 = FUNC_3(VAR_4, VAR_9);
   if (VAR_6 != ((void*)0))
    FUNC_6(VAR_4, VAR_0, VAR_6, ((void*)0),
        *VAR_8, 0);
   break;

  case 129:
  case 131:

   FUNC_0(VAR_3, "unable to start '%s' - not yet supported",
       VAR_9);
   return;
  default:
   FUNC_0(VAR_3, "unknown object '%s'", VAR_9);
   return;
  }
 }
}
