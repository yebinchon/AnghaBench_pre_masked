
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct stat {int st_mtime; } ;
struct TYPE_6__ {int type; int mtime; char* path; char* name; int flags; char* fname; int lineno; int iParents; } ;
typedef TYPE_1__ GNode ;
typedef scalar_t__ Boolean ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 char* FUNC_3 (char*,int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__*) ;
 void* FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int *,char*,struct stat*,int ) ;
 int VAR_7 ;
 int FUNC_9 (int ,char*,char*,char*,...) ;
 int FUNC_10 (char*) ;
 char* VAR_8 ;
 int VAR_9 ;
 char* VAR_10 ;
 int VAR_11 ;
 char* FUNC_11 (char*,char) ;

int
FUNC_12(GNode *VAR_12, Boolean VAR_13)
{
    char *VAR_14;
    struct stat VAR_15;

    if (VAR_12->type & VAR_3) {
 return FUNC_0(VAR_12);
    } else if (VAR_12->type & VAR_6) {
 VAR_12->mtime = 0;
 return 0;
    } else if (VAR_12->path == ((void*)0)) {
 if (VAR_12->type & VAR_5)
     VAR_14 = ((void*)0);
 else {
     VAR_14 = FUNC_3(VAR_12->name, FUNC_6(VAR_12));
     if (VAR_14 == ((void*)0) && VAR_12->flags & VAR_2 &&
  !FUNC_5(VAR_12->iParents)) {
  char *VAR_16;

  VAR_16 = FUNC_11(VAR_12->name, '/');
  if (VAR_16) {




      VAR_16++;

      VAR_14 = FUNC_3(VAR_16, FUNC_6(VAR_12));
      if (VAR_14) {




   VAR_12->path = FUNC_7(VAR_14);
   if (!FUNC_4(".STALE", VAR_12->fname))
       FUNC_9(VAR_11,
    "%s: %s, %d: ignoring stale %s for %s, "
    "found %s\n", VAR_10, VAR_12->fname, VAR_12->lineno,
    VAR_8, VAR_12->name, VAR_14);
      }
  }
     }
     if (FUNC_2(VAR_1))
  FUNC_9(VAR_7, "Found '%s' as '%s'\n",
   VAR_12->name, VAR_14 ? VAR_14 : "(not found)" );
 }
    } else {
 VAR_14 = VAR_12->path;
    }

    if (VAR_14 == ((void*)0)) {
 VAR_14 = FUNC_7(VAR_12->name);
    }

    if (FUNC_8(&VAR_9, VAR_14, &VAR_15, VAR_13 ? VAR_0 : 0) < 0) {
 if (VAR_12->type & VAR_4) {
     if (VAR_14 != VAR_12->path)
  FUNC_10(VAR_14);
     return FUNC_1(VAR_12);
 } else {
     VAR_15.st_mtime = 0;
 }
    }

    if (VAR_14 && VAR_12->path == ((void*)0)) {
 VAR_12->path = VAR_14;
    }

    VAR_12->mtime = VAR_15.st_mtime;
    return (VAR_12->mtime);
}
