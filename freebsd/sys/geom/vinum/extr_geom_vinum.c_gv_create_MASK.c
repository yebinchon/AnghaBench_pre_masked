
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_volume {int name; int device; } ;
struct gv_softc {int name; int device; } ;
struct gv_sd {int name; int device; } ;
struct gv_plex {int name; int device; } ;
struct gv_drive {int name; int device; } ;
struct gctl_req {int dummy; } ;
struct g_provider {int dummy; } ;
struct g_geom {struct gv_volume* softc; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct gv_volume*,struct gv_volume*,int) ;
 struct gv_volume* FUNC_1 (int,int) ;
 struct g_provider* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct gctl_req*,char*,...) ;
 void* FUNC_5 (struct gctl_req*,char*,int) ;
 int * FUNC_6 (struct gv_volume*,int ) ;
 int * FUNC_7 (struct gv_volume*,int ) ;
 int * FUNC_8 (struct gv_volume*,int ) ;
 int * FUNC_9 (struct gv_volume*,int ) ;
 int * FUNC_10 (struct gv_volume*,int ) ;
 int FUNC_11 (struct gv_volume*,int ,struct gv_volume*,int *,int ,int ) ;
 int FUNC_12 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_13(struct g_geom *VAR_9, struct gctl_req *VAR_10)
{
 struct gv_softc *VAR_11;
 struct gv_drive *VAR_12, *VAR_13;
 struct gv_plex *VAR_14, *VAR_15;
 struct gv_sd *VAR_16, *VAR_17;
 struct gv_volume *VAR_18, *VAR_19;
 struct g_provider *VAR_20;
 int VAR_21, VAR_22, *VAR_23, *VAR_24, *VAR_25, *VAR_26, *VAR_27;
 char VAR_28[20];

 FUNC_3();

 VAR_11 = VAR_9->softc;


 VAR_27 = FUNC_5(VAR_10, "volumes", sizeof(*VAR_27));
 VAR_25 = FUNC_5(VAR_10, "plexes", sizeof(*VAR_25));
 VAR_26 = FUNC_5(VAR_10, "subdisks", sizeof(*VAR_26));
 VAR_23 = FUNC_5(VAR_10, "drives", sizeof(*VAR_23));
 if (VAR_27 == ((void*)0) || VAR_25 == ((void*)0) || VAR_26 == ((void*)0) ||
     VAR_23 == ((void*)0)) {
  FUNC_4(VAR_10, "number of objects not given");
  return (-1);
 }
 VAR_24 = FUNC_5(VAR_10, "flags", sizeof(*VAR_24));
 if (VAR_24 == ((void*)0)) {
  FUNC_4(VAR_10, "flags not given");
  return (-1);
 }


 for (VAR_22 = 0; VAR_22 < *VAR_23; VAR_22++) {
  FUNC_12(VAR_28, sizeof(VAR_28), "drive%d", VAR_22);
  VAR_13 = FUNC_5(VAR_10, VAR_28, sizeof(*VAR_13));
  if (VAR_13 == ((void*)0)) {
   FUNC_4(VAR_10, "no drive definition given");
   return (-1);
  }




  VAR_20 = FUNC_2(VAR_13->device);
  if (VAR_20 == ((void*)0)) {
   FUNC_4(VAR_10, "%s: device not found", VAR_13->device);
   goto error;
  }
  if (FUNC_6(VAR_11, VAR_13->name) != ((void*)0)) {

   if (*VAR_24 & VAR_6)
    continue;
   FUNC_4(VAR_10, "drive '%s' already exists", VAR_13->name);
   goto error;
  }
  if (FUNC_7(VAR_11, VAR_13->device) != ((void*)0)) {
   FUNC_4(VAR_10, "device '%s' already configured in "
       "gvinum", VAR_13->device);
   goto error;
  }


  VAR_12 = FUNC_1(sizeof(*VAR_12), VAR_7 | VAR_8);
  FUNC_0(VAR_13, VAR_12, sizeof(*VAR_12));

  FUNC_11(VAR_11, VAR_0, VAR_12, ((void*)0), 0, 0);
 }


 for (VAR_22 = 0; VAR_22 < *VAR_27; VAR_22++) {
  VAR_21 = 0;
  FUNC_12(VAR_28, sizeof(VAR_28), "volume%d", VAR_22);
  VAR_19 = FUNC_5(VAR_10, VAR_28, sizeof(*VAR_19));
  if (VAR_19 == ((void*)0)) {
   FUNC_4(VAR_10, "no volume definition given");
   return (-1);
  }
  if (FUNC_10(VAR_11, VAR_19->name) != ((void*)0)) {

   if (*VAR_24 & VAR_6)
    continue;
   FUNC_4(VAR_10, "volume '%s' already exists", VAR_19->name);
   goto error;
  }

  VAR_18 = FUNC_1(sizeof(*VAR_18), VAR_7 | VAR_8);
  FUNC_0(VAR_19, VAR_18, sizeof(*VAR_18));

  FUNC_11(VAR_11, VAR_3, VAR_18, ((void*)0), 0, 0);
 }


 for (VAR_22 = 0; VAR_22 < *VAR_25; VAR_22++) {
  VAR_21 = 0;
  FUNC_12(VAR_28, sizeof(VAR_28), "plex%d", VAR_22);
  VAR_15 = FUNC_5(VAR_10, VAR_28, sizeof(*VAR_15));
  if (VAR_15 == ((void*)0)) {
   FUNC_4(VAR_10, "no plex definition given");
   return (-1);
  }
  if (FUNC_8(VAR_11, VAR_15->name) != ((void*)0)) {

   if (*VAR_24 & VAR_6)
    continue;
   FUNC_4(VAR_10, "plex '%s' already exists", VAR_15->name);
   goto error;
  }

  VAR_14 = FUNC_1(sizeof(*VAR_14), VAR_7 | VAR_8);
  FUNC_0(VAR_15, VAR_14, sizeof(*VAR_14));

  FUNC_11(VAR_11, VAR_1, VAR_14, ((void*)0), 0, 0);
 }


 for (VAR_22 = 0; VAR_22 < *VAR_26; VAR_22++) {
  VAR_21 = 0;
  FUNC_12(VAR_28, sizeof(VAR_28), "sd%d", VAR_22);
  VAR_17 = FUNC_5(VAR_10, VAR_28, sizeof(*VAR_17));
  if (VAR_17 == ((void*)0)) {
   FUNC_4(VAR_10, "no subdisk definition given");
   return (-1);
  }
  if (FUNC_9(VAR_11, VAR_17->name) != ((void*)0)) {

   if (*VAR_24 & VAR_6)
    continue;
   FUNC_4(VAR_10, "sd '%s' already exists", VAR_17->name);
   goto error;
  }

  VAR_16 = FUNC_1(sizeof(*VAR_16), VAR_7 | VAR_8);
  FUNC_0(VAR_17, VAR_16, sizeof(*VAR_16));

  FUNC_11(VAR_11, VAR_2, VAR_16, ((void*)0), 0, 0);
 }

error:
 FUNC_11(VAR_11, VAR_5, VAR_11, ((void*)0), 0, 0);
 FUNC_11(VAR_11, VAR_4, VAR_11, ((void*)0), 0, 0);

 return (0);
}
