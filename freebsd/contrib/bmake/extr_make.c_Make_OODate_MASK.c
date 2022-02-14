
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int type; scalar_t__ mtime; int flags; int parents; TYPE_1__* cmgn; } ;
struct TYPE_9__ {scalar_t__ mtime; char* path; char* name; } ;
typedef TYPE_2__ GNode ;
typedef int Boolean ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 char* FUNC_5 (scalar_t__) ;
 int VAR_15 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (TYPE_2__*,int) ;
 scalar_t__ VAR_16 ;

Boolean
FUNC_8(GNode *VAR_17)
{
    Boolean VAR_18;





    if ((VAR_17->type & (VAR_8|VAR_12|VAR_13|VAR_6)) == 0) {
 (void)FUNC_3(VAR_17, 1);
 if (FUNC_2(VAR_3)) {
     if (VAR_17->mtime != 0) {
  FUNC_6(VAR_15, "modified %s...", FUNC_5(VAR_17->mtime));
     } else {
  FUNC_6(VAR_15, "non-existent...");
     }
 }
    }
    if (VAR_17->type & (VAR_12|VAR_13)) {




 if (FUNC_2(VAR_3)) {
     FUNC_6(VAR_15, ".USE node...");
 }
 VAR_18 = VAR_1;
    } else if ((VAR_17->type & VAR_9) &&
        ((VAR_17->mtime==0) || FUNC_0(VAR_17))) {
 if (FUNC_2(VAR_3)) {
     FUNC_6(VAR_15, "library...");
 }





 VAR_18 = (VAR_17->mtime == 0 || FUNC_1(VAR_17) ||
    (VAR_17->cmgn == ((void*)0) && (VAR_17->type & VAR_5)));
    } else if (VAR_17->type & VAR_8) {




 if (FUNC_2(VAR_3)) {
     FUNC_6(VAR_15, ".JOIN node...");
 }
 if (FUNC_2(VAR_3)) {
     FUNC_6(VAR_15, "source %smade...", VAR_17->flags & VAR_0 ? "" : "not ");
 }
 VAR_18 = (VAR_17->flags & VAR_0) ? VAR_14 : VAR_1;
    } else if (VAR_17->type & (VAR_7|VAR_6|VAR_11)) {




 if (FUNC_2(VAR_3)) {
     if (VAR_17->type & VAR_7) {
  FUNC_6(VAR_15, "! operator...");
     } else if (VAR_17->type & VAR_11) {
  FUNC_6(VAR_15, ".PHONY node...");
     } else {
  FUNC_6(VAR_15, ".EXEC node...");
     }
 }
 VAR_18 = VAR_14;
    } else if ((VAR_17->cmgn != ((void*)0) && VAR_17->mtime < VAR_17->cmgn->mtime) ||
        (VAR_17->cmgn == ((void*)0) &&
  ((VAR_17->mtime == 0 && !(VAR_17->type & VAR_10))
    || VAR_17->type & VAR_5)))
    {







 if (FUNC_2(VAR_3)) {
     if (VAR_17->cmgn != ((void*)0) && VAR_17->mtime < VAR_17->cmgn->mtime) {
  FUNC_6(VAR_15, "modified before source %s...",
      VAR_17->cmgn->path ? VAR_17->cmgn->path : VAR_17->cmgn->name);
     } else if (VAR_17->mtime == 0) {
  FUNC_6(VAR_15, "non-existent and no sources...");
     } else {
  FUNC_6(VAR_15, ":: operator and no sources...");
     }
 }
 VAR_18 = VAR_14;
    } else {







 if (FUNC_2(VAR_3)) {
     if (VAR_17->flags & VAR_2)
  FUNC_6(VAR_15, "non existing child...");
 }
 VAR_18 = (VAR_17->flags & VAR_2) ? VAR_14 : VAR_1;
    }
    if (!VAR_18) {
 FUNC_4(VAR_17->parents, VAR_4, VAR_17);
    }

    return (VAR_18);
}
