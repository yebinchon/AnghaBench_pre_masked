
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_sd {int size; scalar_t__ drive_offset; scalar_t__ plex_offset; int drive; int state; int plex; int name; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct gv_sd*) ;
 struct gv_sd* FUNC_1 () ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (char*) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,int) ;
 scalar_t__ FUNC_6 (int ) ;

struct gv_sd *
FUNC_7(int VAR_1, char *VAR_2[])
{
 struct gv_sd *VAR_3;
 int VAR_4, VAR_5;

 if (VAR_2[1] == ((void*)0) || *VAR_2[1] == '\0')
  return (((void*)0));

 VAR_3 = FUNC_1();
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 VAR_5 = 0;
 for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4++) {
  if (!FUNC_4(VAR_2[VAR_4], "name")) {
   VAR_4++;
   if (VAR_4 >= VAR_1) {
    VAR_5++;
    break;
   }
   FUNC_5(VAR_3->name, VAR_2[VAR_4], sizeof(VAR_3->name));
  } else if (!FUNC_4(VAR_2[VAR_4], "drive")) {
   VAR_4++;
   if (VAR_4 >= VAR_1) {
    VAR_5++;
    break;
   }
   FUNC_5(VAR_3->drive, VAR_2[VAR_4], sizeof(VAR_3->drive));
  } else if (!FUNC_4(VAR_2[VAR_4], "plex")) {
   VAR_4++;
   if (VAR_4 >= VAR_1) {
    VAR_5++;
    break;
   }
   FUNC_5(VAR_3->plex, VAR_2[VAR_4], sizeof(VAR_3->plex));
  } else if (!FUNC_4(VAR_2[VAR_4], "state")) {
   VAR_4++;
   if (VAR_4 >= VAR_1) {
    VAR_5++;
    break;
   }
   VAR_3->state = FUNC_2(VAR_2[VAR_4]);
  } else if (!FUNC_4(VAR_2[VAR_4], "len") ||
      !FUNC_4(VAR_2[VAR_4], "length")) {
   VAR_4++;
   if (VAR_4 >= VAR_1) {
    VAR_5++;
    break;
   }
   VAR_3->size = FUNC_3(VAR_2[VAR_4]);
   if (VAR_3->size <= 0)
    VAR_3->size = -1;
  } else if (!FUNC_4(VAR_2[VAR_4], "driveoffset")) {
   VAR_4++;
   if (VAR_4 >= VAR_1) {
    VAR_5++;
    break;
   }
   VAR_3->drive_offset = FUNC_3(VAR_2[VAR_4]);
   if (VAR_3->drive_offset != 0 &&
       VAR_3->drive_offset < VAR_0) {
    VAR_5++;
    break;
   }
  } else if (!FUNC_4(VAR_2[VAR_4], "plexoffset")) {
   VAR_4++;
   if (VAR_4 >= VAR_1) {
    VAR_5++;
    break;
   }
   VAR_3->plex_offset = FUNC_3(VAR_2[VAR_4]);
   if (VAR_3->plex_offset < 0) {
    VAR_5++;
    break;
   }
  } else {
   VAR_5++;
   break;
  }
 }

 if (FUNC_6(VAR_3->drive) == 0)
  VAR_5++;

 if (VAR_5) {
  FUNC_0(VAR_3);
  return (((void*)0));
 }

 return (VAR_3);
}
