
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int fts_info; int fts_level; int fts_accpath; TYPE_1__* fts_statp; int fts_name; int fts_errno; int fts_path; } ;
struct TYPE_11__ {int flags; scalar_t__ type; struct TYPE_11__* child; int name; struct TYPE_11__* next; struct TYPE_11__* prev; struct TYPE_11__* parent; } ;
struct TYPE_10__ {int st_mode; } ;
typedef TYPE_2__ NODE ;
typedef TYPE_3__ FTSENT ;
typedef int FTS ;


 int VAR_0 ;





 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char**,int ,int *) ;
 TYPE_3__* FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_3__*,int ) ;
 int VAR_12 ;
 char* VAR_13 ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_13 (int ) ;
 TYPE_2__* VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_14 (int ,int ) ;
 char* FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (char*,char*,char*) ;

__attribute__((used)) static int
FUNC_19(void)
{
 FTS *VAR_17;
 FTSENT *VAR_18;
 NODE *VAR_19, *VAR_20;
 int VAR_21, VAR_22;
 char *VAR_23[2];
 char VAR_24[] = ".";
 VAR_23[0] = VAR_24;
 VAR_23[1] = ((void*)0);

 if ((VAR_17 = FUNC_7(VAR_23, VAR_12, ((void*)0))) == ((void*)0))
  FUNC_10("fts_open: %s", FUNC_15(VAR_11));
 VAR_20 = VAR_15;
 VAR_21 = VAR_22 = 0;
 while ((VAR_18 = FUNC_8(VAR_17)) != ((void*)0)) {
  if (FUNC_2(VAR_18->fts_name, VAR_18->fts_path)) {
   FUNC_9(VAR_17, VAR_18, VAR_1);
   continue;
  }
  if (!FUNC_4(VAR_18->fts_path)) {
   FUNC_9(VAR_17, VAR_18, VAR_1);
   continue;
  }
  switch(VAR_18->fts_info) {
  case 133:
  case 128:
   break;
  case 131:
   if (VAR_21 > VAR_18->fts_level) {
    for (VAR_20 = VAR_20->parent; VAR_20->prev;
        VAR_20 = VAR_20->prev)
     continue;
    --VAR_21;
   }
   continue;
  case 132:
  case 130:
  case 129:
   FUNC_18("%s: %s", FUNC_0(VAR_18), FUNC_15(VAR_18->fts_errno));
   continue;
  default:
   if (VAR_9)
    continue;
  }

  if (VAR_21 != VAR_18->fts_level)
   goto extra;
  for (VAR_19 = VAR_20; VAR_19; VAR_19 = VAR_19->next)
   if ((VAR_19->flags & VAR_4 &&
       !FUNC_5(VAR_19->name, VAR_18->fts_name, VAR_0)) ||
       !FUNC_14(VAR_19->name, VAR_18->fts_name)) {
    VAR_19->flags |= VAR_6;
    if ((VAR_19->flags & VAR_5) == 0 &&
        FUNC_3(VAR_19, VAR_18))
     VAR_22 = VAR_7;
    if (!(VAR_19->flags & VAR_3) &&
        VAR_19->type == VAR_2 &&
        VAR_18->fts_info == 133) {
     if (VAR_19->child) {
      VAR_20 = VAR_19->child;
      ++VAR_21;
     }
    } else
     FUNC_9(VAR_17, VAR_18, VAR_1);
    break;
   }

  if (VAR_19)
   continue;
 extra:
  if (!VAR_10 && !(VAR_9 && VAR_18->fts_info == 128)) {
   FUNC_11("extra: %s", FUNC_0(VAR_18));
   if (VAR_14) {
    if ((FUNC_1(VAR_18->fts_statp->st_mode)
        ? FUNC_13 : FUNC_17)(VAR_18->fts_accpath)) {
     FUNC_11(", not removed: %s",
         FUNC_15(VAR_11));
    } else
     FUNC_11(", removed");
   }
   FUNC_12('\n');
  }
  FUNC_9(VAR_17, VAR_18, VAR_1);
 }
 FUNC_6(VAR_17);
 if (VAR_16)
  FUNC_18("%s checksum: %u", VAR_13, VAR_8);
 return (VAR_22);
}
