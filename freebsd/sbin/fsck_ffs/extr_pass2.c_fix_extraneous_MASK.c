
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct inoinfo {intptr_t i_dotdot; intptr_t i_parent; intptr_t i_number; } ;
struct inodesc {intptr_t id_number; intptr_t id_parent; int id_func; void* id_type; TYPE_1__* id_dirp; int id_name; } ;
struct TYPE_7__ {int ino_linkcnt; } ;
struct TYPE_6__ {intptr_t value; intptr_t size; } ;
struct TYPE_5__ {intptr_t d_ino; char* d_name; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct inodesc*) ;
 TYPE_2__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,intptr_t,intptr_t) ;
 int FUNC_2 (intptr_t) ;
 TYPE_3__* FUNC_3 (intptr_t) ;
 int FUNC_4 (struct inodesc*,int ,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*,char) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (int ) ;
 int FUNC_13 (char*,int ,int ,TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_14(struct inoinfo *VAR_9, struct inodesc *VAR_10)
{
 char *VAR_11;
 struct inodesc VAR_12;
 char VAR_13[VAR_2 + 1];
 char VAR_14[VAR_2 + 1];





 if (VAR_9->i_dotdot == 0) {
  FUNC_4(&VAR_12, 0, sizeof(struct inodesc));
  VAR_12.id_type = VAR_0;
  VAR_12.id_number = VAR_10->id_dirp->d_ino;
  VAR_12.id_func = VAR_7;
  VAR_12.id_name = FUNC_11("..");
  if ((FUNC_0(FUNC_2(VAR_12.id_number), &VAR_12) & VAR_1))
   VAR_9->i_dotdot = VAR_12.id_parent;
 }
 if (VAR_9->i_dotdot == 0 ||
     VAR_10->id_number == VAR_9->i_parent ||
     VAR_9->i_dotdot != VAR_10->id_number ||
     VAR_9->i_dotdot == VAR_9->i_parent) {
  FUNC_1(VAR_14, VAR_10->id_number, VAR_10->id_number);
  if (FUNC_10(VAR_14, "/") != 0)
   FUNC_8 (VAR_14, "/");
  FUNC_8(VAR_14, VAR_10->id_dirp->d_name);
  FUNC_1(VAR_13, VAR_9->i_number, VAR_9->i_number);
  FUNC_6("%s IS AN EXTRANEOUS HARD LINK TO DIRECTORY %s",
      VAR_14, VAR_13);
  if (VAR_4 != 0) {





   VAR_3.value = VAR_10->id_number;
   if (FUNC_13("vfs.ffs.setcwd", 0, 0,
       &VAR_3, sizeof VAR_3) == -1) {
    FUNC_5(" (IGNORED)\n");
    return (0);
   }
   VAR_3.value = (intptr_t)VAR_10->id_dirp->d_name;
   VAR_3.size = VAR_9->i_number;
   if (FUNC_13("vfs.ffs.unlink", 0, 0,
       &VAR_3, sizeof VAR_3) == -1) {
    FUNC_5(" (UNLINK FAILED: %s)\n",
        FUNC_12(VAR_6));
    return (0);
   }
   FUNC_5(" (REMOVED)\n");
   return (0);
  }
  if (VAR_8) {
   FUNC_5(" (REMOVED)\n");
   return (1);
  }
  return (FUNC_7("REMOVE"));
 }




 FUNC_1(VAR_13, VAR_9->i_parent, VAR_9->i_number);
 FUNC_1(VAR_14, VAR_9->i_number, VAR_9->i_number);
 FUNC_6("%s IS AN EXTRANEOUS HARD LINK TO DIRECTORY %s", VAR_13,
     VAR_14);
 if (VAR_4 != 0) {





  VAR_3.value = VAR_9->i_parent;
  if (FUNC_13("vfs.ffs.setcwd", 0, 0,
      &VAR_3, sizeof VAR_3) == -1) {
   FUNC_5(" (IGNORED)\n");
   return (0);
  }
  if ((VAR_11 = FUNC_9(VAR_13, '/')) == ((void*)0)) {
   FUNC_5(" (IGNORED)\n");
   return (0);
  }
  VAR_3.value = (intptr_t)(VAR_11 + 1);
  VAR_3.size = VAR_9->i_number;
  if (FUNC_13("vfs.ffs.unlink", 0, 0,
      &VAR_3, sizeof VAR_3) == -1) {
   FUNC_5(" (UNLINK FAILED: %s)\n",
       FUNC_12(VAR_6));
   return (0);
  }
  FUNC_5(" (REMOVED)\n");
  VAR_9->i_parent = VAR_10->id_number;
  return (0);
 }
 if (!VAR_8 && !FUNC_7("REMOVE"))
  return (0);
 FUNC_4(&VAR_12, 0, sizeof(struct inodesc));
 VAR_12.id_type = VAR_0;
 VAR_12.id_number = VAR_9->i_parent;
 VAR_12.id_parent = VAR_9->i_number;
 VAR_12.id_func = VAR_5;
 if ((FUNC_0(FUNC_2(VAR_12.id_number), &VAR_12) & VAR_1) && VAR_8)
  FUNC_5(" (REMOVED)\n");
 VAR_9->i_parent = VAR_10->id_number;
 FUNC_3(VAR_9->i_number)->ino_linkcnt++;
 return (0);
}
