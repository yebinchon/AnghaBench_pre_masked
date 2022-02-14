
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_volume {scalar_t__ state; int flags; int name; } ;
struct gv_softc {int dummy; } ;
struct gv_sd {scalar_t__ state; int flags; int name; } ;
struct gv_plex {scalar_t__ state; int flags; int name; } ;
struct gv_drive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct gv_volume*) ;
 int FUNC_2 (struct gv_softc*,struct gv_volume*) ;
 int FUNC_3 (struct gv_softc*,struct gv_volume*) ;
 int FUNC_4 (struct gv_softc*,struct gv_volume*) ;
 int FUNC_5 (struct gv_softc*,struct gv_drive*) ;
 struct gv_volume* FUNC_6 (struct gv_softc*,int ) ;
 struct gv_volume* FUNC_7 (struct gv_softc*,int ) ;
 struct gv_volume* FUNC_8 (struct gv_softc*,int ) ;
 struct gv_volume* FUNC_9 (int,char**) ;
 struct gv_volume* FUNC_10 (int,char**) ;
 struct gv_volume* FUNC_11 (int,char**) ;
 int FUNC_12 (char*,char**,int) ;
 int FUNC_13 (char*,char*) ;

void
FUNC_14(struct gv_softc *VAR_7, char *VAR_8, struct gv_drive *VAR_9)
{
 char *VAR_10, *VAR_11, *VAR_12;
 struct gv_volume *VAR_13, *VAR_14;
 struct gv_plex *VAR_15, *VAR_16;
 struct gv_sd *VAR_17, *VAR_18;
 int VAR_19, VAR_20, VAR_21;
 char *VAR_22[VAR_0];

 VAR_20 = FUNC_5(VAR_7, VAR_9);


 for (VAR_10 = VAR_8; *VAR_10 != '\0'; VAR_10 = VAR_11) {
  VAR_11 = VAR_10;
  VAR_12 = VAR_10;


  while (*VAR_11 != '\n')
   VAR_11++;
  *VAR_11 = '\0';
  VAR_11++;

  VAR_21 = FUNC_12(VAR_12, VAR_22, VAR_0);

  if (VAR_21 <= 0)
   continue;

  if (!FUNC_13(VAR_22[0], "volume")) {
   VAR_13 = FUNC_11(VAR_21, VAR_22);
   if (VAR_13 == ((void*)0)) {
    FUNC_0(0, "config parse failed volume");
    break;
   }

   VAR_14 = FUNC_8(VAR_7, VAR_13->name);
   if (VAR_14 != ((void*)0)) {
    if (VAR_20) {
     VAR_14->state = VAR_13->state;
     FUNC_0(2, "newer volume found!");
    }
    FUNC_1(VAR_13);
    continue;
   }

   FUNC_4(VAR_7, VAR_13);

  } else if (!FUNC_13(VAR_22[0], "plex")) {
   VAR_15 = FUNC_9(VAR_21, VAR_22);
   if (VAR_15 == ((void*)0)) {
    FUNC_0(0, "config parse failed plex");
    break;
   }

   VAR_16 = FUNC_6(VAR_7, VAR_15->name);
   if (VAR_16 != ((void*)0)) {

    if (VAR_20) {
     VAR_16->state = VAR_15->state;
     FUNC_0(2, "newer plex found!");
    }
    FUNC_1(VAR_15);
    continue;
   }

   VAR_19 = FUNC_2(VAR_7, VAR_15);
   if (VAR_19)
    continue;




   VAR_15->flags &= ~VAR_1;

  } else if (!FUNC_13(VAR_22[0], "sd")) {
   VAR_17 = FUNC_10(VAR_21, VAR_22);

   if (VAR_17 == ((void*)0)) {
    FUNC_0(0, "config parse failed subdisk");
    break;
   }

   VAR_18 = FUNC_7(VAR_7, VAR_17->name);
   if (VAR_18 != ((void*)0)) {

    if (VAR_20) {
     VAR_18->state = VAR_17->state;
     FUNC_0(2, "newer subdisk found!");
    }
    FUNC_1(VAR_17);
    continue;
   }






   VAR_17->flags |= VAR_5;

   if (VAR_17->state == VAR_6)
    VAR_17->flags |= VAR_2;

   VAR_19 = FUNC_3(VAR_7, VAR_17);
   if (VAR_19)
    continue;





   VAR_17->flags &= ~VAR_4;
   VAR_17->flags &= ~VAR_3;
  }
 }
}
