
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sbuf {int dummy; } ;
struct gv_sd {int size; scalar_t__ state; int initialized; int plex_offset; int drive; int drive_offset; int name; int flags; TYPE_1__* drive_sc; int plex; int * plex_sc; } ;
typedef int intmax_t ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sbuf*,char*,...) ;

void
FUNC_3(struct gv_sd *VAR_4, struct sbuf *VAR_5, int VAR_6)
{
 if (VAR_6 & VAR_0) {
  FUNC_2(VAR_5, "Subdisk %s:\n", VAR_4->name);
  FUNC_2(VAR_5, "\t\tSize: %16jd bytes (%jd MB)\n",
      (intmax_t)VAR_4->size, (intmax_t)VAR_4->size / VAR_3);
  FUNC_2(VAR_5, "\t\tState: %s\n", FUNC_1(VAR_4->state));

  if (VAR_4->state == VAR_1 ||
      VAR_4->state == VAR_2) {
   if (VAR_4->state == VAR_1)
    FUNC_2(VAR_5, "\t\tInitialized: ");
   else
    FUNC_2(VAR_5, "\t\tRevived: ");

   FUNC_2(VAR_5, "%16jd bytes (%d%%)\n",
       (intmax_t)VAR_4->initialized,
       (int)((VAR_4->initialized * 100) / VAR_4->size));
  }

  if (VAR_4->plex_sc != ((void*)0)) {
   FUNC_2(VAR_5, "\t\tPlex %s at offset %jd (%s)\n",
       VAR_4->plex, (intmax_t)VAR_4->plex_offset,
       FUNC_0(VAR_4->plex_offset, 1));
  }

  FUNC_2(VAR_5, "\t\tDrive %s (%s) at offset %jd (%s)\n",
      VAR_4->drive,
      VAR_4->drive_sc == ((void*)0) ? "*missing*" : VAR_4->drive_sc->name,
      (intmax_t)VAR_4->drive_offset,
      FUNC_0(VAR_4->drive_offset, 1));
  FUNC_2(VAR_5, "\t\tFlags: %d\n", VAR_4->flags);
 } else {
  FUNC_2(VAR_5, "S %-21s State: ", VAR_4->name);
  if (VAR_4->state == VAR_1 ||
      VAR_4->state == VAR_2) {
   if (VAR_4->state == VAR_1)
    FUNC_2(VAR_5, "I ");
   else
    FUNC_2(VAR_5, "R ");
   FUNC_2(VAR_5, "%d%%\t",
       (int)((VAR_4->initialized * 100) / VAR_4->size));
  } else {
   FUNC_2(VAR_5, "%s\t", FUNC_1(VAR_4->state));
  }
  FUNC_2(VAR_5, "D: %-12s Size: %s\n", VAR_4->drive,
      FUNC_0(VAR_4->size, 0));
 }
}
