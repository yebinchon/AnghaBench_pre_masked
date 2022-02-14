
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct stat {int st_mode; } ;
struct TYPE_3__ {int flags; int type; int st_mode; int st_flags; int st_gid; int st_uid; struct TYPE_3__* child; int slink; int st_rdev; int name; struct TYPE_3__* next; } ;
typedef TYPE_1__ NODE ;




 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
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
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,int,int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 char* VAR_18 ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char) ;
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_11 (char*,struct stat*) ;
 int FUNC_12 (char*,int ) ;
 char* FUNC_13 (int ) ;
 int FUNC_14 (int ,char*) ;
 scalar_t__ VAR_20 ;

__attribute__((used)) static void
FUNC_15(NODE *VAR_21, char *VAR_22)
{
 int VAR_23;
 char *VAR_24;
 const char *VAR_25;
 u_int32_t VAR_26;

 for (; VAR_21; VAR_21 = VAR_21->next) {
  if (VAR_21->flags & VAR_5 && !(VAR_21->flags & VAR_9))
   continue;
  if (VAR_21->type != 129 && (VAR_14 || VAR_21->flags & VAR_9))
   continue;
  FUNC_12(VAR_22, VAR_21->name);
  if (!(VAR_21->flags & VAR_9)) {


   struct stat VAR_27;

   if (VAR_19 && FUNC_11(VAR_18, &VAR_27) == 0 &&
       FUNC_0(VAR_27.st_mode))
    VAR_21->flags |= VAR_9;
   else
    (void)FUNC_9("%s missing", VAR_18);
  }
  switch (VAR_21->type) {
  case 131:
  case 130:
   VAR_25 = "device";
   break;
  case 129:
   VAR_25 = "directory";
   break;
  case 128:
   VAR_25 = "symlink";
   break;
  default:
   FUNC_10('\n');
   continue;
  }

  VAR_23 = 0;
  if (!(VAR_21->flags & VAR_9) && VAR_20) {
   if (VAR_17 || VAR_21->type == 128)
    goto createit;
   if (!(VAR_21->flags & (VAR_7 | VAR_8)))
       FUNC_9(
    " (%s not created: user not specified)", VAR_25);
   else if (!(VAR_21->flags & (VAR_2 | VAR_3)))
       FUNC_9(
    " (%s not created: group not specified)", VAR_25);
   else if (!(VAR_21->flags & VAR_4))
       FUNC_9(
    " (%s not created: mode not specified)", VAR_25);
   else
 createit:
   switch (VAR_21->type) {
   case 131:
   case 130:
    if (VAR_17)
     continue;
    if (!(VAR_21->flags & VAR_0))
     FUNC_9(
        " (%s not created: device not specified)",
         VAR_25);
    else if (FUNC_5(VAR_18,
        VAR_21->st_mode | FUNC_7(VAR_21->type),
        VAR_21->st_rdev) == -1)
     FUNC_9(" (%s not created: %s)\n",
         VAR_25, FUNC_13(VAR_15));
    else
     VAR_23 = 1;
    break;
   case 128:
    if (!(VAR_21->flags & VAR_6))
     FUNC_9(
        " (%s not created: link not specified)\n",
         VAR_25);
    else if (FUNC_14(VAR_21->slink, VAR_18))
     FUNC_9(
         " (%s not created: %s)\n",
         VAR_25, FUNC_13(VAR_15));
    else
     VAR_23 = 1;
    break;
   case 129:
    if (FUNC_4(VAR_18, VAR_13|VAR_11|VAR_12))
     FUNC_9(" (not created: %s)",
         FUNC_13(VAR_15));
    else
     VAR_23 = 1;
    break;
   default:
    FUNC_6("can't create create %s",
        FUNC_8(VAR_21->type));
   }
  }
  if (VAR_23)
   FUNC_9(" (created)");
  if (VAR_21->type == 129) {
   if (!(VAR_21->flags & VAR_9))
    FUNC_10('\n');
   for (VAR_24 = VAR_22; *VAR_24; ++VAR_24)
    continue;
   *VAR_24 = '/';
   FUNC_15(VAR_21->child, VAR_24 + 1);
   *VAR_24 = '\0';
  } else
   FUNC_10('\n');

  if (!VAR_23 || VAR_17)
   continue;
  if ((VAR_21->flags & (VAR_7 | VAR_8)) &&
      (VAR_21->flags & (VAR_2 | VAR_3)) &&
      (FUNC_3(VAR_18, VAR_21->st_uid, VAR_21->st_gid))) {
   FUNC_9("%s: user/group/mode not modified: %s\n",
       VAR_18, FUNC_13(VAR_15));
   FUNC_9("%s: warning: file mode %snot set\n", VAR_18,
       (VAR_21->flags & VAR_1) ? "and file flags " : "");
   continue;
  }
  if (VAR_21->flags & VAR_4) {
   if (FUNC_2(VAR_18, VAR_21->st_mode))
    FUNC_9("%s: permissions not set: %s\n",
        VAR_18, FUNC_13(VAR_15));
  }
 }
}
