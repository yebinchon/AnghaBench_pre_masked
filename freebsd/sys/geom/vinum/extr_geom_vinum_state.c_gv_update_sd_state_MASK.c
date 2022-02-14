
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gv_sd {int state; int flags; int * plex_sc; int name; struct gv_drive* drive_sc; } ;
struct gv_drive {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int,char*,int ,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct gv_sd *VAR_6)
{
 struct gv_drive *VAR_7;
 int VAR_8;

 FUNC_1(VAR_6 != ((void*)0), ("gv_update_sd_state: NULL s"));
 VAR_7 = VAR_6->drive_sc;
 FUNC_1(VAR_7 != ((void*)0), ("gv_update_sd_state: NULL d"));

 VAR_8 = VAR_6->state;


 if (VAR_7->state != VAR_0) {
  VAR_6->state = VAR_2;

 } else if (VAR_6->flags & VAR_3) {
  VAR_6->state = VAR_5;
  VAR_6->flags &= ~VAR_3;
 } else if (VAR_6->state != VAR_5) {
  if (VAR_6->flags & VAR_1) {
   VAR_6->state = VAR_5;
   VAR_6->flags &= ~VAR_1;
  } else
   VAR_6->state = VAR_4;
 } else
  VAR_6->state = VAR_5;

 if (VAR_6->state != VAR_8)
  FUNC_0(1, "subdisk %s state change: %s -> %s", VAR_6->name,
      FUNC_2(VAR_8), FUNC_2(VAR_6->state));


 if (VAR_6->plex_sc != ((void*)0))
  FUNC_3(VAR_6->plex_sc);
}
